using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameMgr : Singleton<GameMgr> {

	public int m_iHunger;
	public bool m_bAssembleOnly = true;
	public List<int> m_ilistCurEnemyList;

	// Use this for initialization
	void Awake () {
		m_ilistCurEnemyList = new List<int> ();

		DontDestroyOnLoad(gameObject);
		DontDestroyOnLoad (GameObject.Find("Player"));

		ObjectFactory.getInstance.ResourcesLoad ();
		Localization.language = "Korean";
	}

}
