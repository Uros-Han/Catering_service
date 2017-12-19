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
		m_selectedWorldGeo = worldGeo;
		m_selectedWorldIcon = worldGeo.m_worldIcon.GetComponent<WorldIcon>();

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

		string strIconType = "";
		switch(m_selectedWorldIcon.m_iconType)
		{
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

		transform.Find("IconInfo").Find("Name").GetComponent<UILabel>().text = Localization.Get(string.Format("Icon_{0}_name", strIconType));
		transform.Find("IconInfo").Find("Desc").GetComponent<UILabel>().text = Localization.Get(string.Format("Icon_{0}_desc_prosperity_{1}", strIconType, iProsperity)) 
																		+ " " + Localization.Get(string.Format("Icon_{0}_desc_population_{1}", strIconType, iPopulation));
	}

}
