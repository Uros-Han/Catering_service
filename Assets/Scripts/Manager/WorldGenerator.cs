using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WorldGenerator : Singleton<WorldGenerator> {
	GridMgr grid;
	Transform m_geoTrans;

	public float m_fFarmPopulationStandard = 50f;
	public float m_fRanchPopulationStandard = 50f;
	public float m_fVillagePopulationStandard = 100f;
	public float m_fCityPopulationStandard = 150f;
	public float m_fCastlePopulationStandard = 250f;

	float[] m_fTypeCost; // Cost per type

	void Awake()
	{
		m_fTypeCost = new float[(int)ENEMY_TYPE.END - 1];

		m_fTypeCost[(int)ENEMY_TYPE.LIVESTOCK] = 10f;
		m_fTypeCost[(int)ENEMY_TYPE.CIVILIAN] = 10f;
		m_fTypeCost[(int)ENEMY_TYPE.MERCENARY] = 10f;
		m_fTypeCost[(int)ENEMY_TYPE.KNIGHT] = 10f;
	}

	// Use this for initialization
	void Start () {
		grid = GridMgr.getInstance;
		m_geoTrans = GameObject.Find ("Geo").transform;
	}

	public IEnumerator GenerateWorldMap()
	{
		GameObject.Find ("WorldTool").GetComponent<UIPanel> ().alpha = 0f;
		GameObject.Find ("LoadingBar").GetComponent<UIPanel> ().alpha = 1f;

		LoadingProgress (0.01f, "Instantiate");
		yield return new WaitForSeconds (0.3f);

		int iCityNum = 20;
		int iCastleNum = 10;

		ObjectFactory objFac = ObjectFactory.getInstance;
		List<int> idxList = new List<int> ();

		//지형생성
		for(int i = 0 ; i < grid.m_iXcount * grid.m_iYcount; ++i){
			objFac.Create_WorldGeo (grid.GetPosOfIdx(i));
			if (i % 100 == 0) {
				float fProgress = (((float)i / ((float)grid.m_iXcount * (float)grid.m_iYcount)) * 0.3f);
				LoadingProgress (fProgress, string.Format ("Create Geometry ({0}/{1})", i, grid.m_iXcount * grid.m_iYcount));
				yield return new WaitForSeconds (0.001f);
			}
		}

		//아이콘 생성
		for (int i = 0; i < grid.m_iXcount * grid.m_iYcount; ++i) {
			// idx -> x, y
			int x = i % grid.m_iXcount;
			int y = i / grid.m_iXcount;

			//x normalize 클수록 중심으로부터 멀다 
			if (x > grid.m_iXcount / 2)
				x -= grid.m_iXcount/2;
			else
				x = grid.m_iXcount/2 - x;

			//y normalize 클수록 중심으로부터 멀다 
			if (y > grid.m_iYcount / 2)
				y -= grid.m_iYcount/2;
			else
				y = grid.m_iYcount/2 - y;

			float fChance = 1 - (((float)x + (float)y) / ((float)(grid.m_iXcount / 2f) + (float)(grid.m_iYcount / 2f)));

			if (GenerateNormalRandom(0.5f, 0.1f) < fChance)
				idxList.Add (i);
		}

		if (!idxList.Contains (grid.m_iXcount * grid.m_iYcount / 2))
			idxList.Add (grid.m_iXcount * grid.m_iYcount / 2);

		for (int i = 0; i < iCastleNum; ++i) {
//			int iRandomIdx = idxList[(int)GenerateNormalRandom(idxList.Count/2f, 10f)];
			int iRandomIdx = idxList[Random.Range (0, idxList.Count)];

			GameObject objIcon = objFac.Create_WorldIcon (grid.GetPosOfIdx (iRandomIdx), (int)WORLDICON_TYPE.CASTLE);
//			m_geoTrans.GetChild (iRandomIdx).GetComponent<WorldGeo> ().m_worldIcon = objIcon;
			idxList.Remove (iRandomIdx);
		}

		LoadingProgress (0.3f, "Castle Instantiate");
		yield return new WaitForSeconds(0.1f);

		for (int i = 0; i < iCityNum; ++i) {
			int iRandomIdx = idxList[Random.Range (0, idxList.Count)];

			GameObject objIcon = objFac.Create_WorldIcon (grid.GetPosOfIdx (iRandomIdx), (int)WORLDICON_TYPE.CITY);
//			m_geoTrans.GetChild (iRandomIdx).GetComponent<WorldGeo> ().m_worldIcon = objIcon;
			idxList.Remove (iRandomIdx);
		}

		LoadingProgress (0.4f, "City Instantiate");
		yield return new WaitForSeconds(0.1f);

		for (int i = 0; i < idxList.Count; ++i) {
			int iRandom = Random.Range (0, 100);
			GameObject objIcon = null;

			if (iRandom < 33)
				objIcon = objFac.Create_WorldIcon (grid.GetPosOfIdx (idxList [i]), (int)WORLDICON_TYPE.FARM);
			else if (iRandom < 66)
				objIcon = objFac.Create_WorldIcon (grid.GetPosOfIdx (idxList [i]), (int)WORLDICON_TYPE.RANCH);
			else if (iRandom < 88) {
				objIcon = objFac.Create_WorldIcon (grid.GetPosOfIdx (idxList [i]), (int)WORLDICON_TYPE.VILLAGE);
			}else
				objIcon = objFac.Create_WorldIcon (grid.GetPosOfIdx (idxList[i]), (int)WORLDICON_TYPE.EMPTY);

//			m_geoTrans.GetChild (idxList[i]).GetComponent<WorldGeo> ().m_worldIcon = objIcon;
		}

		LoadingProgress (0.5f, "Icons Instantiate");
		yield return new WaitForSeconds(0.1f);

//		GameObject.Find ("WorldIcons").BroadcastMessage ("CheckAroundAmIAlone");

		Transform icons = GameObject.Find ("WorldIcons").transform;
		for (int i = 0; i < icons.childCount; ++i) {
			icons.GetChild (i).SendMessage ("CheckAroundAmIAlone");
			if (i % 10 == 0) {
				float fProgress = 0.5f + ((float)i / (float)icons.childCount * 0.2f);
				LoadingProgress (fProgress, string.Format ("Check Unreachable Islands ({0}/{1})", i, icons.childCount));
				yield return new WaitForSeconds (0.001f);
			}
		}

		LoadingProgress (0.7f, "Destorying Unreachable Islands");
		icons.BroadcastMessage("DestroyIfIsland");
		yield return new WaitForSeconds (0.5f);

		LoadingProgress (0.8f, "Pumping Ocean");
		FloodFill (0,0,WORLD_GEO.WATER);
		FloodFill (grid.m_iXcount-1,0,WORLD_GEO.WATER);
		FloodFill (0,grid.m_iYcount-1,WORLD_GEO.WATER);
		FloodFill (grid.m_iXcount-1,grid.m_iYcount-1,WORLD_GEO.WATER);
		yield return new WaitForSeconds (0.5f);

		CorePositioning ();

		for(int i =0; i < icons.childCount; ++i)
		{
			int iIdx = grid.GetGridIdx (icons.GetChild (i).position);
			WorldIcon icon = icons.GetChild (i).GetComponent<WorldIcon> ();
			SetWorldPropertyAndPopulation (iIdx, icon, (WORLDICON_TYPE)icon.m_iconType);
			if (i % 100 == 0) {
				float fProgress = 0.8f + ((float)i / (float)icons.childCount * 0.1f);
				LoadingProgress (fProgress, string.Format ("Set World Property & Population ({0}/{1})", i, icons.childCount));
				yield return new WaitForSeconds (0.001f);
			}
		}


		LoadingProgress (1f , "Done");
		yield return new WaitForSeconds (1f);
		GameObject.Find ("LoadingBar").GetComponent<UIPanel> ().alpha = 0f;
		GameObject.Find ("WorldTool").GetComponent<UIPanel> ().alpha = 0f;

		SaveManager.getInstance.LocalSave ();
	}

	float GenerateNormalRandom(float mean, float stdDev) //평균, 표준편차
	{
		float rand1 = Random.Range(0.0f, 1.0f);
		float rand2 = Random.Range(0.0f, 1.0f);

		float randStdNormal = Mathf.Sqrt(-2.0f * Mathf.Log(rand1)) * Mathf.Sin(2.0f * Mathf.PI * rand2); //random normal(0,1)
		float randNormal = mean + stdDev * randStdNormal; //random normal(mean,stdDev^2)

		return randNormal;
	}

	void CorePositioning()
	{
		bool bPosioningDone = false;
		int iX = GridMgr.getInstance.m_iXcount;
		int iY = GridMgr.getInstance.m_iYcount;
		int iCoreGrid = 0;

		do {
			int iX_Random = Random.Range (15, iX - 15);
			int iY_Random = Random.Range (15, iY - 15);
			int iRandomGrid = (iX * iY_Random) + iX_Random;
			iCoreGrid = iRandomGrid;

			WorldGeo RandomGeo = GameObject.Find ("Geo").transform.GetChild (iCoreGrid).GetComponent<WorldGeo> ();
			if(!RandomGeo.m_geoStatus.Equals (WORLD_GEO.WATER))
				bPosioningDone = true;

		} while(!bPosioningDone);

		GameObject.Find ("Core").transform.position = GridMgr.getInstance.GetPosOfIdx (iCoreGrid);

		GameObject coreIcon = GameObject.Find ("Geo").transform.GetChild (iCoreGrid).GetComponent<WorldGeo> ().m_worldIcon;
		if (!coreIcon.GetComponent<WorldIcon> ().m_iconType.Equals (WORLDICON_TYPE.EMPTY)) {
			Destroy (coreIcon);
			ObjectFactory.getInstance.Create_WorldIcon (grid.GetPosOfIdx (iCoreGrid), (int)WORLDICON_TYPE.EMPTY);
		}

		GameObject.Find ("PC2DPanTarget").transform.position = GameObject.Find ("Core").transform.position;
		Com.LuisPedroFonseca.ProCamera2D.ProCamera2D.Instance.MoveCameraInstantlyToPosition (GameObject.Find ("Core").transform.position);
		GameObject.Find ("Core").GetComponent<FoW.FogOfWarUnit> ().enabled = true;

		GameMgr.getInstance.m_iHunger = 100;
	}

	public void LoadingProgress(float fProgress, string strLabel){
		GameObject.Find ("progress").GetComponent<UISlider> ().value = fProgress;
		GameObject.Find ("ProgressLabel").GetComponent<UILabel> ().text = strLabel;
	}

	public List<int> DeployEnemyList(float fPopulation, WORLDICON_TYPE world_type) //번영도와 인구수에 맞는 적을 리스트로 뽑아준다. (번영도는 적 생성시 적용)
	{
		List<int> list_enemyType = new List<int> ();

		bool bHeroContained = false;
		float fRandom = 0f;

		while(fPopulation > 0)
		{
			switch (world_type) {
			case WORLDICON_TYPE.FARM:
				list_enemyType.Add ((int)ENEMY_TYPE.CIVILIAN);
				fPopulation -= m_fTypeCost [(int)ENEMY_TYPE.CIVILIAN];
				break;
			case WORLDICON_TYPE.RANCH:
				fRandom = Random.Range (0f, 100f);

				if (fRandom < 70) {
					list_enemyType.Add ((int)ENEMY_TYPE.LIVESTOCK);
					fPopulation -= m_fTypeCost [(int)ENEMY_TYPE.LIVESTOCK];
				} else {
					list_enemyType.Add ((int)ENEMY_TYPE.CIVILIAN);
					fPopulation -= m_fTypeCost [(int)ENEMY_TYPE.CIVILIAN];
				}
				break;
			case WORLDICON_TYPE.VILLAGE:
				fRandom = Random.Range (0f, 100f);

				if (fRandom < 70) {
					list_enemyType.Add ((int)ENEMY_TYPE.MERCENARY);
					fPopulation -= m_fTypeCost [(int)ENEMY_TYPE.MERCENARY];
				} else {
					list_enemyType.Add ((int)ENEMY_TYPE.CIVILIAN);
					fPopulation -= m_fTypeCost [(int)ENEMY_TYPE.CIVILIAN];
				}
				break;
			case WORLDICON_TYPE.CITY:
				fRandom = Random.Range (0f, 100f);

				if (fRandom < 50) {
					list_enemyType.Add ((int)ENEMY_TYPE.KNIGHT);
					fPopulation -= m_fTypeCost [(int)ENEMY_TYPE.KNIGHT];
				} else if (fRandom < 80) {
					list_enemyType.Add ((int)ENEMY_TYPE.MERCENARY);
					fPopulation -= m_fTypeCost [(int)ENEMY_TYPE.MERCENARY];
				} else {
					list_enemyType.Add ((int)ENEMY_TYPE.CIVILIAN);
					fPopulation -= m_fTypeCost [(int)ENEMY_TYPE.CIVILIAN];
				}
				break;
			case WORLDICON_TYPE.CASTLE:
				list_enemyType.Add ((int)ENEMY_TYPE.KNIGHT);
				fPopulation -= m_fTypeCost [(int)ENEMY_TYPE.KNIGHT];
				break;
			}
		}

		return list_enemyType;
	}

	void SetWorldPropertyAndPopulation(int iGridIdx, WorldIcon worldIcon, WORLDICON_TYPE type)
	{
		if (type.Equals (WORLDICON_TYPE.EMPTY)) {
			worldIcon.m_fProsperity = 0f;
			worldIcon.m_fPopulation = 0f;
			return;
		}

		worldIcon.m_iGridIdx = iGridIdx;

		int iDistanceWithCore = AStar.getInstance.AStarStart_World (iGridIdx, GridMgr.getInstance.GetGridIdx (GameObject.Find ("Core").transform.position)).Count;

		if (iDistanceWithCore < 3) {
			worldIcon.m_fProsperity = GenerateNormalRandom (20f, 10f);
			worldIcon.m_fPopulation = GenerateNormalRandom (20f, 10f);
		}else{
			worldIcon.m_fProsperity = Random.Range (40, 80f);
			switch(type)
			{
			case WORLDICON_TYPE.FARM:
				worldIcon.m_fPopulation = GenerateNormalRandom (m_fFarmPopulationStandard, 10f);
				break;
			case WORLDICON_TYPE.RANCH:
				worldIcon.m_fPopulation = GenerateNormalRandom (m_fRanchPopulationStandard, 10f);
				break;
			case WORLDICON_TYPE.VILLAGE:
				worldIcon.m_fPopulation = GenerateNormalRandom (m_fVillagePopulationStandard, 50f);
				break;
			case WORLDICON_TYPE.CITY:
				worldIcon.m_fPopulation = GenerateNormalRandom (m_fCityPopulationStandard, 50f);
				break;
			case WORLDICON_TYPE.CASTLE:
				worldIcon.m_fPopulation = GenerateNormalRandom (m_fCastlePopulationStandard, 50f);
				break;

			default:
				Debug.LogError ("Fuck you unknown wordld icon type");
				break;
			}
		}

		worldIcon.m_list_enemyType = DeployEnemyList (worldIcon.m_fPopulation, type);
	}
		
	void FloodFill(int iX, int iY, WORLD_GEO geoTarget)
	{
		if ((iX < 0) || (iX >= grid.m_iXcount))
			return;
		if ((iY < 0) || (iY >= grid.m_iYcount))
			return;

		if (m_geoTrans.GetChild (iY * grid.m_iXcount + iX).GetComponent<WorldGeo> ().m_worldIcon != null)
			return;

		if (!m_geoTrans.GetChild (iY * grid.m_iXcount + iX).GetComponent<WorldGeo> ().m_geoStatus.Equals (geoTarget)) {
			m_geoTrans.GetChild (iY * grid.m_iXcount + iX).GetComponent<WorldGeo> ().m_geoStatus = geoTarget;
			m_geoTrans.GetChild (iY * grid.m_iXcount + iX).GetComponent<SpriteRenderer>().sprite = ObjectFactory.getInstance.m_sheet_worldGeo[(int)geoTarget];

			FloodFill (iX+1, iY, geoTarget);
			FloodFill (iX, iY+1, geoTarget);
			FloodFill (iX-1, iY, geoTarget);
			FloodFill (iX, iY-1, geoTarget);
		}
	}
}
