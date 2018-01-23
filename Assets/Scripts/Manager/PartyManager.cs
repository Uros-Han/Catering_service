using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PartyManager : MonoBehaviour {

	Transform transParty;

	void Start(){
		transParty = GameObject.Find ("Party").transform;
	}

	public void CalculateDepolying () {
		CalculateCaravan ();
		CalculateRaider ();
	}

	void CalculateCaravan(){
		List<GameObject> listObjCaravan = ListParty(PARTY_TYPE.CARAVAN);

		if (listObjCaravan.Count < GameMgr.getInstance.m_iDay / 5) {
			int iDepoleyIdx = CalculateDeployLocation_Caravan();

			if(iDepoleyIdx != -1)
				DeployParty (iDepoleyIdx, PARTY_TYPE.CARAVAN);
		}
	}

	void CalculateRaider()
	{
		List<GameObject> listObjRaider = ListParty(PARTY_TYPE.RAID);

		if (listObjRaider.Count < GameMgr.getInstance.m_iReward / 500) {
			int iDepoleyIdx = CalculateDeployLocation_Raider();

			if(iDepoleyIdx != -1)
				DeployParty (iDepoleyIdx, PARTY_TYPE.RAID);
		}
	}

	List<GameObject> ListParty(PARTY_TYPE partyType)
	{
		List<GameObject> listObjParty = new List<GameObject> ();

		for (int i = 0; i < transParty.childCount; ++i) {
			if (transParty.GetChild (i).GetComponent<Party> ().m_partyType == partyType) {
				listObjParty.Add (transParty.GetChild (i).gameObject);
			}
		}

		return listObjParty;
	}

	int CalculateDeployLocation_Caravan()
	{
		List<int> m_iListLoc;
		int iRandom = Random.Range (0, 100);

		if (iRandom < 33) {
			m_iListLoc = WorldMapManager.getInstance.m_iListVillage;
		} else if (iRandom < 66) {
			m_iListLoc = WorldMapManager.getInstance.m_iListCity;
		} else {
			m_iListLoc = WorldMapManager.getInstance.m_iListCastle;
		}

		return m_iListLoc[Random.Range(0, m_iListLoc.Count)];
	}

	int CalculateDeployLocation_Raider()
	{
		int iReward = GameMgr.getInstance.m_iReward;
		Transform GeoTrans = GameObject.Find ("Geo").transform;
		int iCoreIdx = GridMgr.getInstance.GetGridIdx (GameObject.Find ("Core").transform.position);
		Dictionary<int,int> iDicDistance = new Dictionary<int, int> ();
		AStar aStar = AStar.getInstance;
		List<int> m_iListLoc;

		string strLocKey = "";

		if (iReward < 2000) {
			m_iListLoc = WorldMapManager.getInstance.m_iListVillage;
			strLocKey = "Icon_Village_name";
		} else if (iReward < 4000) {
			m_iListLoc = WorldMapManager.getInstance.m_iListCity;
			strLocKey = "Icon_City_name";
		} else {
			m_iListLoc = WorldMapManager.getInstance.m_iListCastle;
			strLocKey = "Icon_Castle_name";
		}

		for (int i = 0; i < m_iListLoc.Count; ++i) {
			iDicDistance.Add (m_iListLoc [i], aStar.AStarStart_World (iCoreIdx, m_iListLoc [i]).Count);
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

		for (int i = 0; i < iListCloseLoc.Count; ++i) {
			if (!GeoTrans.GetChild (iListCloseLoc[i].Key).GetComponent<WorldGeo> ().m_bPolluted && iListCloseLoc [i].Value > 2) {
				ObjectFactory.getInstance.Create_AleartMsg (string.Format(Localization.Get("AleartMsg_Create_Raider"), Localization.Get(strLocKey)));
				return iListCloseLoc [i].Key;
			}
		}

		return -1;
	}

	void DeployParty(int iGrid, PARTY_TYPE partyType)
	{
		ObjectFactory.getInstance.Create_Party (iGrid, partyType);
	}


	public static List<int> Shuffle (List<int> aList) {

		System.Random _random = new System.Random ();

		int myI;

		int n = aList.Count;
		for (int i = 0; i < n; i++)
		{
			// NextDouble returns a random number between 0 and 1.
			// ... It is equivalent to Math.random() in Java.
			int r = i + (int)(_random.NextDouble() * (n - i));
			myI = aList[r];
			aList[r] = aList[i];
			aList[i] = myI;
		}

		return aList;
	}
}
