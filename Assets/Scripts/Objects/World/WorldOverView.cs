using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WorldOverView : Singleton<WorldOverView> {

	public WorldIcon m_selectedWorldIcon = null;
	public WorldGeo m_selectedWorldGeo = null;

	// Use this for initialization
	void Start () {
		
	}

	public void SelectWorldIcon(WorldGeo worldGeo)
	{
		/////////////////////////////////////////////
		///GEO Info
		/////////////////////////////////////////////

		m_selectedWorldGeo = worldGeo;
		m_selectedWorldIcon = worldGeo.m_worldIcon.GetComponent<WorldIcon>();
		GameMgr.getInstance.m_ilistCurEnemyList = m_selectedWorldIcon.m_list_enemyType;

		string strGeoNameKey = "";
		string strGeoDescKey = "";

		switch(m_selectedWorldGeo.m_geoStatus)
		{
		case WORLD_GEO.GRASS:
			strGeoNameKey = "Geo_Grass_name";
			strGeoDescKey = "Geo_Grass_desc";
			break;

		default:
			Debug.LogError ("Unknown WORLD_GEO");
			break;
		}

		transform.Find("GeoInfo").Find("Name").GetComponent<UILabel>().text = Localization.Get(strGeoNameKey);
		transform.Find("GeoInfo").Find("Desc").GetComponent<UILabel>().text = Localization.Get(strGeoDescKey);

		/////////////////////////////////////////////
		///WORLD ICON Info
		/////////////////////////////////////////////

		string strIconType = "";
		switch(m_selectedWorldIcon.m_iconType)
		{
		case (int)WORLDICON_TYPE.EMPTY:
			strIconType = "Empty";
			break;
		case (int)WORLDICON_TYPE.FARM:
			strIconType = "Farm";
			break;
		case (int)WORLDICON_TYPE.RANCH:
			strIconType = "Ranch";
			break;
		case (int)WORLDICON_TYPE.VILLAGE:
			strIconType = "Village";
			break;
		case (int)WORLDICON_TYPE.CITY:
			strIconType = "City";
			break;
		case (int)WORLDICON_TYPE.CASTLE:
			strIconType = "Castle";
			break;

		default:
			Debug.LogError ("Unknown iconType");
			break;
		}

		int iProsperity = 0;
		if(m_selectedWorldIcon.m_fProsperity < 33f)
			iProsperity = 0;
		else if(m_selectedWorldIcon.m_fProsperity < 66f)
			iProsperity = 1;
		else
			iProsperity = 2;

		int iPopulation = 0;

		switch (m_selectedWorldIcon.m_iconType) {
		case (int)WORLDICON_TYPE.FARM:
			if (m_selectedWorldIcon.m_fPopulation < WorldGenerator.getInstance.m_fFarmPopulationStandard/2f)
				iPopulation = 0;
			else if (m_selectedWorldIcon.m_fPopulation < WorldGenerator.getInstance.m_fFarmPopulationStandard)
				iPopulation = 1;
			else
				iPopulation = 2;
			break;
		case (int)WORLDICON_TYPE.RANCH:
			if (m_selectedWorldIcon.m_fPopulation < WorldGenerator.getInstance.m_fRanchPopulationStandard/2f)
				iPopulation = 0;
			else if (m_selectedWorldIcon.m_fPopulation < WorldGenerator.getInstance.m_fRanchPopulationStandard)
				iPopulation = 1;
			else
				iPopulation = 2;
			break;
		case (int)WORLDICON_TYPE.VILLAGE:
			if (m_selectedWorldIcon.m_fPopulation < WorldGenerator.getInstance.m_fVillagePopulationStandard/2f)
				iPopulation = 0;
			else if (m_selectedWorldIcon.m_fPopulation < WorldGenerator.getInstance.m_fVillagePopulationStandard)
				iPopulation = 1;
			else
				iPopulation = 2;
			break;
		case (int)WORLDICON_TYPE.CITY:
			if (m_selectedWorldIcon.m_fPopulation < WorldGenerator.getInstance.m_fCityPopulationStandard/2f)
				iPopulation = 0;
			else if (m_selectedWorldIcon.m_fPopulation < WorldGenerator.getInstance.m_fCityPopulationStandard)
				iPopulation = 1;
			else
				iPopulation = 2;
			break;
		case (int)WORLDICON_TYPE.CASTLE:
			if (m_selectedWorldIcon.m_fPopulation < WorldGenerator.getInstance.m_fCastlePopulationStandard/2f)
				iPopulation = 0;
			else if (m_selectedWorldIcon.m_fPopulation < WorldGenerator.getInstance.m_fCastlePopulationStandard)
				iPopulation = 1;
			else
				iPopulation = 2;
			break;
		}

		transform.Find("IconInfo").Find("Name").GetComponent<UILabel>().text = Localization.Get(string.Format("Icon_{0}_name", strIconType));
		transform.Find("IconInfo").Find("Desc").GetComponent<UILabel>().text = Localization.Get(string.Format("Icon_{0}_desc_prosperity_{1}", strIconType, iProsperity)) 
																		+ " " + Localization.Get(string.Format("Icon_{0}_desc_population_{1}", strIconType, iPopulation));

		/////////////////////////////////////////////
		///Enemy Info
		/////////////////////////////////////////////

		int iLivestockCount = 0;
		int iCivCount = 0;
		int iMerCount = 0;
		int iKntCount = 0;

		for (int i = 0; i < m_selectedWorldIcon.m_list_enemyType.Count; ++i) {
			switch (m_selectedWorldIcon.m_list_enemyType [i]) {
			case (int)ENEMY_TYPE.LIVESTOCK:
				iLivestockCount += 1;
				break;
			case (int)ENEMY_TYPE.CIVILIAN:
				iCivCount += 1;
				break;
			case (int)ENEMY_TYPE.MERCENARY:
				iMerCount += 1;
				break;
			case (int)ENEMY_TYPE.KNIGHT:
				iKntCount += 1;
				break;
			}
		}
		// TODO : 코어 능력에 맞게 적 상세정찵토록
		string strDesc = string.Format("??? : {0}", iLivestockCount + iCivCount + iMerCount + iKntCount);

		transform.Find ("EnemyInfo").Find ("Desc").GetComponent<UILabel> ().text = strDesc;


		/////////////////////////////////////////////
		///Hunger Info
		/////////////////////////////////////////////

		int iNeedHunger = GameObject.Find("Core").GetComponent<Core_World>().m_iNeedHunger;

		transform.Find ("HungerInfo").Find ("Desc").GetComponent<UILabel> ().text = iNeedHunger.ToString();
	}

}
