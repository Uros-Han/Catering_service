using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BattleSceneSetter : MonoBehaviour {

	// Use this for initialization
	void Start () {
		GameObject.Find ("Player").GetComponent<Player> ().BattleScene ();
		UnityEngine.SceneManagement.SceneManager.SetActiveScene (UnityEngine.SceneManagement.SceneManager.GetSceneByName("Battle"));
		GridMgr.getInstance.ChgGridInfo ();

		if (GameMgr.getInstance.m_bAssembleOnly)
			StartCoroutine (BattleSceneMgr.getInstance.NightTurn ());
		else {
			StartCoroutine(BattleSceneMgr.getInstance.DayTurn());
		}

	}

	public void ToWorldMap()
	{
		Transform WorldTrans = GameObject.Find ("World").transform;
		for (int i = 0; i < WorldTrans.childCount; ++i) {
			WorldTrans.GetChild (i).gameObject.SetActive (true);
		}
		UnityEngine.SceneManagement.SceneManager.UnloadSceneAsync("Battle");
	}

}
