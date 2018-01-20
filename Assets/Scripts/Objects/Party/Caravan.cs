using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class Caravan : Party {
	/// <summary>
	/// 캐러밴은 두 종류로 나뉜다. 
	/// 짐을 싣고 출발하는 캐러밴 -> 보통 부유한 도시에서 출발 ; 편도여행 m_bOneWay = true; 출발과 동시에 m_bCargoLoaded = true;
	/// 짐 없이 출발하여 도시에서 보급을 받으려는 상단. ; 왕복여행 m_bOneWay = false; 도시에 도착하여 m_bCargoLoaded = true;
	/// </summary>
	public bool m_bOneWay;
	public bool m_bCargoLoaded;

	public GameObject m_destinationLoc;

	protected override void Start ()
	{
		base.Start ();

		m_strPartyName = Localization.Get ("Party_Caravan");

		if (!bLoaded) {
			if (m_departureLoc.GetComponent<WorldIcon> ().m_iconType == (int)WORLDICON_TYPE.CITY) {
				m_bOneWay = true;
				m_bCargoLoaded = true;
			} else {
				m_bOneWay = false;
				m_bCargoLoaded = false;
			}
		}

		m_partyType = PARTY_TYPE.CARAVAN;
	}

	protected override void ThinkWhatAreDoingNext()
	{
		//Arrive Destination
		if (m_destinationLoc != null &&  m_iGridIdx == m_iDestinationIdx) {
			if (m_bOneWay) {
				m_destinationLoc.GetComponent<WorldIcon> ().m_fProsperity += 33f;
				if (m_destinationLoc.GetComponent<WorldIcon> ().m_fProsperity > 100f)
					m_destinationLoc.GetComponent<WorldIcon> ().m_fProsperity = 100f;
				
				Destroy (gameObject);
			} else {

				if (m_bCargoLoaded) {
					
					m_destinationLoc.GetComponent<WorldIcon> ().m_fProsperity += 33f;
					if (m_destinationLoc.GetComponent<WorldIcon> ().m_fProsperity > 100f)
						m_destinationLoc.GetComponent<WorldIcon> ().m_fProsperity = 100f;

					Destroy (gameObject);
				}

				GameObject tmpObj = m_departureLoc;
				m_departureLoc = m_destinationLoc;
				m_destinationLoc = tmpObj;

				m_iDepartureIdx = GridMgr.getInstance.GetGridIdx (m_departureLoc.transform.position);
				m_iDestinationIdx = GridMgr.getInstance.GetGridIdx (m_destinationLoc.transform.position);
				m_listMoveIdx = AStar.getInstance.AStarStart_World(GridMgr.getInstance.GetGridIdx(gameObject.transform.position), m_iDestinationIdx);

				m_iWaitTurnCount = Random.Range (2, 5);
				m_state = AI_WORLD_STATE.CAMP;

				m_bCargoLoaded = true;

				return;
			}
		}

		if (Random.Range (0, 100) < 70) { // MOVE

			SetDestination ();
			m_state = AI_WORLD_STATE.MOVE;

		} else { // IDLE
			m_iWaitTurnCount = Random.Range (2, 5);
			m_state = AI_WORLD_STATE.CAMP;
		}
	}


	protected override void SetDestination()
	{
		if (m_iDestinationIdx == 0) {

			Dictionary<int,int> iDicDistance = new Dictionary<int, int> ();

			if(m_bOneWay)
			{
				
				int iRandomRange = Random.Range (0, 100);
				if (iRandomRange < 50) {
					List<int> m_iListCity = WorldMapManager.getInstance.m_iListCity;
					for (int i = 0; i < m_iListCity.Count; ++i) {
						iDicDistance.Add (m_iListCity [i], AStar.getInstance.AStarStart_World (m_iGridIdx, m_iListCity [i]).Count);
					}
				} else {
					List<int> m_iListCastle = WorldMapManager.getInstance.m_iListCastle;
					for (int i = 0; i < m_iListCastle.Count; ++i) {
						iDicDistance.Add (m_iListCastle [i], AStar.getInstance.AStarStart_World (m_iGridIdx, m_iListCastle [i]).Count);
					}
				}

			}else{
				List<int> iListCity = WorldMapManager.getInstance.m_iListCity;
				for (int i = 0; i < iListCity.Count; ++i) {
					iDicDistance.Add (iListCity [i], AStar.getInstance.AStarStart_World (m_iGridIdx, iListCity [i]).Count);
				}
			}




			//가까운 순서대로 gridIdx 정렬a
			List<int> iListCloseLoc = iDicDistance.OrderBy (kp => kp.Value).Select(kp => kp.Key).ToList();
			Transform geoTrans = GameObject.Find ("Geo").transform;

			bool bFindDest = false;
			if (m_bOneWay) {
				for (int i = 0; i < iListCloseLoc.Count; ++i) {
					if (geoTrans.GetChild (iListCloseLoc [i]).GetComponent<WorldGeo> ().m_worldIcon.GetComponent<WorldIcon> ().m_fProsperity < 33f) {
						m_iDestinationIdx = iListCloseLoc [i];
						bFindDest = true;
						break;
					}
				}
				if (!bFindDest) {
					for (int i = 0; i < iListCloseLoc.Count; ++i) {
						if (geoTrans.GetChild (iListCloseLoc [i]).GetComponent<WorldGeo> ().m_worldIcon.GetComponent<WorldIcon> ().m_fProsperity < 66f) {
							m_iDestinationIdx = iListCloseLoc [i];
							bFindDest = true;
							break;
						}
					}
				}
				if (!bFindDest) {
					for (int i = 0; i < iListCloseLoc.Count; ++i) {
						if (geoTrans.GetChild (iListCloseLoc [i]).GetComponent<WorldGeo> ().m_worldIcon.GetComponent<WorldIcon> ().m_fProsperity < 100f) {
							m_iDestinationIdx = iListCloseLoc [i];
							bFindDest = true;
							break;
						}
					}
				}
			} else {
				for (int i = 0; i < iListCloseLoc.Count; ++i) {
					if (geoTrans.GetChild (iListCloseLoc [i]).GetComponent<WorldGeo> ().m_worldIcon.GetComponent<WorldIcon> ().m_fProsperity > 66f) {
						m_iDestinationIdx = iListCloseLoc [i];
						bFindDest = true;
						break;
					}
				}
				if (!bFindDest) {
					for (int i = 0; i < iListCloseLoc.Count; ++i) {
						if (geoTrans.GetChild (iListCloseLoc [i]).GetComponent<WorldGeo> ().m_worldIcon.GetComponent<WorldIcon> ().m_fProsperity > 33f) {
							m_iDestinationIdx = iListCloseLoc [i];
							bFindDest = true;
							break;
						}
					}
				}
				if (!bFindDest) {
					for (int i = 0; i < iListCloseLoc.Count; ++i) {
						if (geoTrans.GetChild (iListCloseLoc [i]).GetComponent<WorldGeo> ().m_worldIcon.GetComponent<WorldIcon> ().m_fProsperity > 0f) {
							m_iDestinationIdx = iListCloseLoc [i];
							bFindDest = true;
							break;
						}
					}
				}
			}


			
			m_destinationLoc = GameObject.Find ("Geo").transform.GetChild (m_iDestinationIdx).GetComponent<WorldGeo> ().m_worldIcon;
		}

		m_listMoveIdx = AStar.getInstance.AStarStart_World(m_iGridIdx, m_iDestinationIdx);

		m_iFatigue = Random.Range (4, 8);

		base.SetDestination ();
	}


}
