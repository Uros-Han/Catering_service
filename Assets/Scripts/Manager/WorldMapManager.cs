using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class WorldMapManager : Singleton<WorldMapManager> {
	
	public int m_KingLocIdx;
	public WORLDTURN_STATE m_worldTurnState;

	bool m_bToBattleScene = false;
	public List<int> m_iPollutedIdxList;

	public List<int> m_iListVillage;
	public List<int> m_iListCity;
	public List<int> m_iListCastle;

	// Use this for initialization
	void Start () {
		m_worldTurnState = WORLDTURN_STATE.IDLE;
		GridMgr.getInstance.ChgGridInfo ();

		m_iPollutedIdxList = new List<int> ();

		m_iListVillage = new List<int> ();
		m_iListCity = new List<int> ();
		m_iListCastle = new List<int> ();
	}

	void OnEnable()
	{
		if (m_bToBattleScene) {	
			SceneManager.SetActiveScene (SceneManager.GetSceneByName("World"));
			GridMgr.getInstance.ChgGridInfo ();

			GameObject.Find ("World").BroadcastMessage ("CameBackFromBattleScene");
			GameObject.Find ("Player").SendMessage ("CameBackFromBattleScene");
			m_bToBattleScene = false;
			BattleSceneMgr.getInstance.m_turnState = TURN_STATE.DAY;

			if (!GameMgr.getInstance.m_bAssembleOnly) { // 지역점령 
				int iPollutedIdx = GridMgr.getInstance.GetGridIdx(GameObject.Find("Core").transform.position);
				ObjectFactory.getInstance.Create_Polluted(iPollutedIdx);
				m_iPollutedIdxList.Add (iPollutedIdx);

				WorldIcon pollutedIcon = GameObject.Find ("Geo").transform.GetChild (iPollutedIdx).GetComponent<WorldGeo> ().m_worldIcon.GetComponent<WorldIcon>();

				GameMgr.getInstance.m_iReward += (int)pollutedIcon.m_fPopulation * 10;

				pollutedIcon.m_fPopulation = 0f;
				pollutedIcon.m_fProsperity = 0f;
				pollutedIcon.m_iRaided += 1;
				pollutedIcon.m_list_enemyType.Clear ();
			}

			SaveManager.getInstance.LocalSave ();
		}
	}

	public void GenerateWorld()
	{
		StartCoroutine(WorldGenerator.getInstance.GenerateWorldMap ());
	}

	public void Assembly()
	{
		GameMgr.getInstance.m_bAssembleOnly = true;
		SceneToBattle ();
	}

	public void EncountEnemy()
	{
		GameMgr.getInstance.m_bAssembleOnly = false;
		SceneToBattle ();
	}

	public void SceneToBattle()
	{
		SceneManager.LoadScene ("Battle", LoadSceneMode.Additive);

		Transform WorldTrans = GameObject.Find ("World").transform;
		for (int i = 0; i < 3; ++i) {
			WorldTrans.GetChild (i).gameObject.SetActive (false);
		}

		m_bToBattleScene = true;
	}

	public void Pollute(List<int> iPollutedList)
	{
		for (int i = 0; i < iPollutedList.Count; ++i) {
			ObjectFactory.getInstance.Create_Polluted (iPollutedList [i]);
		}
	}

	public void Wait()
	{
		StartCoroutine (TimeMgr.getInstance.Play ());

		GameMgr.getInstance.m_iHunger -= 30;

		if (GameMgr.getInstance.m_iHunger <= 0) {
			GameMgr.getInstance.m_iHunger = 100;
			//TODO: Eat Part
		}

		GameObject.Find ("Core").GetComponent<Core_World> ().CheckLocationBreak ();
	}

}
