using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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
		m_strPartyName = Localization.Get ("Party_Caravan");
		m_partyType = PARTY_TYPE.CARAVAN;

		base.Start ();

		if (!bLoaded) {
			if (m_departureLoc.GetComponent<WorldIcon> ().m_iconType == (int)WORLDICON_TYPE.CITY) {
				m_bOneWay = true;
				m_bCargoLoaded = true;
			} else {
				m_bOneWay = false;
				m_bCargoLoaded = false;
			}
		}

		ThinkWhatAreDoingNext ();
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
				m_listMoveIdx = AStar.getInstance.AStarStart_World(GridMgr.getInstance.GetGridIdx(gameObject.transform.position), m_iDestinationIdx, true);

				m_iWaitTurnCount = Random.Range (2, 5);
				m_state = AI_WORLD_STATE.CAMP;
				transform.GetChild(7).gameObject.SetActive(true);
				for (int i = 0; i < 7; ++i) {
					if (i == 5)
						continue;
					transform.GetChild(i).gameObject.SetActive(false);
				}

				m_bCargoLoaded = true;

				return;
			}
		}

		//Move
		SetDestination ();
		m_state = AI_WORLD_STATE.MOVE;

		transform.GetChild(7).gameObject.SetActive(false);
		for (int i = 0; i < 7; ++i) {
			if (i == 5)
				continue;
			transform.GetChild(i).gameObject.SetActive(true);
		}
	}


	protected override void SetDestination()
	{
		if (m_iDestinationIdx == 0) {

			Dictionary<int,int> iDicDistance = new Dictionary<int, int> ();
			AStar aStar = AStar.getInstance;

			if(m_bOneWay)
			{
				
				int iRandomRange = Random.Range (0, 100);
				if (iRandomRange < 50) {
					List<int> m_iListCity = GameObject.Find("WorldMapManager").GetComponent<WorldMapManager>().m_iListCity;
					for (int i = 0; i < m_iListCity.Count; ++i) {
						if (m_iListCity [i] == m_iGridIdx)
							continue;
						iDicDistance.Add (m_iListCity [i], aStar.AStarStart_World (m_iGridIdx, m_iListCity [i]).Count);
					}
				} else {
					List<int> m_iListCastle = GameObject.Find("WorldMapManager").GetComponent<WorldMapManager>().m_iListCastle;
					for (int i = 0; i < m_iListCastle.Count; ++i) {
						iDicDistance.Add (m_iListCastle [i], aStar.AStarStart_World (m_iGridIdx, m_iListCastle [i]).Count);
					}
				}

			}else{
				List<int> iListCity = GameObject.Find("WorldMapManager").GetComponent<WorldMapManager>().m_iListCity;
				for (int i = 0; i < iListCity.Count; ++i) {
					iDicDistance.Add (iListCity [i], aStar.AStarStart_World (m_iGridIdx, iListCity [i]).Count);
				}
			}




			//가까운 순서대로 gridIdx 정렬a
			List<KeyValuePair<int, int>> iListCloseLoc = new List<KeyValuePair<int, int>>(iDicDistance);
			iListCloseLoc.Sort(
				delegate(KeyValuePair<int, int> firstPair,
					KeyValuePair<int, int> nextPair)
				{
					return firstPair.Value.CompareTo(nextPair.Value);
				}
			);

			Transform geoTrans = GameObject.Find ("Geo").transform;

			bool bFindDest = false;
			if (m_bOneWay) {
				for (int i = 0; i < iListCloseLoc.Count; ++i) {
					if (geoTrans.GetChild (iListCloseLoc [i].Key).GetComponent<WorldGeo> ().m_worldIcon.GetComponent<WorldIcon> ().m_fProsperity < 33f) {
						m_iDestinationIdx = iListCloseLoc [i].Key;
						bFindDest = true;
						break;
					}
				}
				if (!bFindDest) {
					for (int i = 0; i < iListCloseLoc.Count; ++i) {
						if (geoTrans.GetChild (iListCloseLoc [i].Key).GetComponent<WorldGeo> ().m_worldIcon.GetComponent<WorldIcon> ().m_fProsperity < 66f) {
							m_iDestinationIdx = iListCloseLoc [i].Key;
							bFindDest = true;
							break;
						}
					}
				}
				if (!bFindDest) {
					for (int i = 0; i < iListCloseLoc.Count; ++i) {
						if (geoTrans.GetChild (iListCloseLoc [i].Key).GetComponent<WorldGeo> ().m_worldIcon.GetComponent<WorldIcon> ().m_fProsperity < 100f) {
							m_iDestinationIdx = iListCloseLoc [i].Key;
							bFindDest = true;
							break;
						}
					}
				}
			} else {
				for (int i = 0; i < iListCloseLoc.Count; ++i) {
					if (geoTrans.GetChild (iListCloseLoc [i].Key).GetComponent<WorldGeo> ().m_worldIcon.GetComponent<WorldIcon> ().m_fProsperity > 66f) {
						m_iDestinationIdx = iListCloseLoc [i].Key;
						bFindDest = true;
						break;
					}
				}
				if (!bFindDest) {
					for (int i = 0; i < iListCloseLoc.Count; ++i) {
						if (geoTrans.GetChild (iListCloseLoc [i].Key).GetComponent<WorldGeo> ().m_worldIcon.GetComponent<WorldIcon> ().m_fProsperity > 33f) {
							m_iDestinationIdx = iListCloseLoc [i].Key;
							bFindDest = true;
							break;
						}
					}
				}
				if (!bFindDest) {
					for (int i = 0; i < iListCloseLoc.Count; ++i) {
						if (geoTrans.GetChild (iListCloseLoc [i].Key).GetComponent<WorldGeo> ().m_worldIcon.GetComponent<WorldIcon> ().m_fProsperity > 0f) {
							m_iDestinationIdx = iListCloseLoc [i].Key;
							bFindDest = true;
							break;
						}
					}
				}
			}

			m_iFatigue = Random.Range (4, 8);
			
			m_destinationLoc = GameObject.Find ("Geo").transform.GetChild (m_iDestinationIdx).GetComponent<WorldGeo> ().m_worldIcon;
		}

		m_listMoveIdx = AStar.getInstance.AStarStart_World(m_iGridIdx, m_iDestinationIdx, true);


		base.SetDestination ();
	}


}
