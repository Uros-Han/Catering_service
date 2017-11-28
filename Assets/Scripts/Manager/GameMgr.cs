using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameMgr : Singleton<GameMgr> {

	public int m_iHunger;
	public bool m_bAssembleOnly = true;


	// Use this for initialization
	void Awake () {

		DontDestroyOnLoad(gameObject);

		ObjectFactory.getInstance.ResourcesLoad ();
		Localization.language = "Korean";
	}

}
