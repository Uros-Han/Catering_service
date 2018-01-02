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
		StartCoroutine (ToWorldMap_Coroutine ());
	}

	IEnumerator ToWorldMap_Coroutine()
	{
		//Clean Morgue
		Transform morgueTrans = GameObject.Find ("Morgue").transform;
		for (int i = 0; i < morgueTrans.childCount; ++i) {
			if(morgueTrans.GetChild(i).gameObject.name != "Poop")
			{
				ObjectFactory.getInstance.Create_Poop();
				yield return new WaitForSeconds(Random.Range(0.1f, 0.3f));
			}
		}


		morgueTrans.gameObject.BroadcastMessage("DestroyThis", SendMessageOptions.DontRequireReceiver);
		GameObject.Find("Morgue").GetComponent<Morgue>().ClearMorgue ();
		Transform WorldTrans = GameObject.Find ("World").transform;
		for (int i = 0; i < WorldTrans.childCount; ++i) {
			WorldTrans.GetChild (i).gameObject.SetActive (true);
		}
		UnityEngine.SceneManagement.SceneManager.UnloadSceneAsync("Battle");
	}
}
