using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SaveManager : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}

	public void LocalSave()
	{
		SaveWorld ();
	}

	public void LocalLoad()
	{
		LoadWorld ();
	}

	void SaveWorld()
	{
		ES3.Save<Vector3> ("corePos", GameObject.Find ("Core").transform.position, "world.es3");

		Transform geoTrans = GameObject.Find ("Geo").transform;
		List<int> objGeoList = new List<int> ();
		for (int i = 0; i < geoTrans.childCount; ++i) {
			objGeoList.Add ((int)geoTrans.GetChild (i).GetComponent<WorldGeo>().m_geoStatus);
		}
		ES3.Save<List<int>> ("geoList", objGeoList, "world.es3");

		int iIconCount = 0;
		Transform iconTrans = GameObject.Find ("WorldIcons").transform;
		List<WorldIcon> objIconList = new List<WorldIcon> ();
		for (int i = 0; i < iconTrans.childCount; ++i) {
			objIconList.Add (iconTrans.GetChild (i).gameObject.GetComponent<WorldIcon>());
			iIconCount += 1;
		}
		ES3.Save <List<WorldIcon>> ("iconList", objIconList, "world.es3");
		ES3.Save <int> ("iconCount", iIconCount, "world.es3");
	}

	void LoadWorld()
	{
		ObjectFactory objFac = ObjectFactory.getInstance;
		GridMgr gridMgr = GridMgr.getInstance;

		GameObject.Find ("Core").transform.position = ES3.Load<Vector3>("corePos", "world.es3");

		List<int> iGeoList = new List<int> ();
		iGeoList = ES3.Load<List<int>>("geoList", "world.es3");
		for (int i = 0; i < iGeoList.Count; ++i) {
			objFac.Create_WorldGeo(gridMgr.GetPosOfIdx(i) ,iGeoList[i]);
		}

		List<WorldIcon> iconList = new List<WorldIcon> ();
		int iCount = ES3.Load <int> ("iconCount", "world.es3");
		for (int i = 0; i < iCount; ++i) {
			GameObject obj = objFac.Create_WorldIcon (Vector3.zero);
			iconList.Add (obj.GetComponent<WorldIcon>());
		}
		ES3.LoadInto<List<WorldIcon>>("iconList", "world.es3", iconList);
		for (int i = 0; i < iconList.Count; ++i) {
			iconList [i].Init ();
		}
	}
}
