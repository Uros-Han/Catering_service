using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameMgr : Singleton<GameMgr> {

	public int m_iHunger = 100;
	public bool m_bAssembleOnly = true;
	public List<int> m_ilistCurEnemyList;

	public bool m_bDeveloperMode;

	// Use this for initialization
	void Awake () {
		m_ilistCurEnemyList = new List<int> ();

		DontDestroyOnLoad(gameObject);
		DontDestroyOnLoad (GameObject.Find("Player"));

		ObjectFactory.getInstance.ResourcesLoad ();
		Localization.language = "Korean";
	}

	public IEnumerator ContinueGame_Coroutine()
	{
		Application.LoadLevel ("World");

		yield return null;

		SaveManager.getInstance.LocalLoad ();
	}

	public void ContinueGame()
	{
		StartCoroutine (ContinueGame_Coroutine ());
	}

	public IEnumerator CreateGame_Coroutine()
	{
		Application.LoadLevel ("World");

		yield return null;

		WorldMapManager.getInstance.GenerateWorld ();
	}

	public void CreateGame()
	{
		StartCoroutine (CreateGame_Coroutine ());
	}
}
