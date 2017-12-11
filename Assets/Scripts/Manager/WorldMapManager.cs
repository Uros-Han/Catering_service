using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class WorldMapManager : Singleton<WorldMapManager> {
	
	public int m_KingLocIdx;
	public WORLDTURN_STATE m_worldTurnState;

	bool m_bToBattleScene = false;

	// Use this for initialization
	void Start () {
		m_worldTurnState = WORLDTURN_STATE.IDLE;
		GridMgr.getInstance.ChgGridInfo ();
	}

	void OnEnable()
	{
		if (m_bToBattleScene) {	
			GameObject.Find ("World").BroadcastMessage ("CameBackFromBattleScene");
			GameObject.Find ("Player").SendMessage ("CameBackFromBattleScene");
			m_bToBattleScene = false;

			SceneManager.SetActiveScene (SceneManager.GetSceneByName("World"));
			GridMgr.getInstance.ChgGridInfo ();
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


}
