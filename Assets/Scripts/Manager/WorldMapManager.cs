using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class WorldMapManager : Singleton<WorldMapManager> {
	
	public int m_KingLocIdx;
	public WORLDTURN_STATE m_worldTurnState;

	// Use this for initialization
	void Start () {
		m_worldTurnState = WORLDTURN_STATE.IDLE;
	}

	public void GenerateWorld()
	{
		StartCoroutine(WorldGenerator.getInstance.GenerateWorldMap ());
	}

	public void Assembly()
	{
		SceneManager.LoadScene ("Battle", LoadSceneMode.Additive);

		Transform WorldTrans = GameObject.Find ("World").transform;
		for (int i = 0; i < 3; ++i) {
			WorldTrans.GetChild (i).gameObject.SetActive (false);
		}

	}
}
