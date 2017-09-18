using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameMgr : Singleton<GameMgr> {

	// Use this for initialization
	void Awake () {

		DontDestroyOnLoad(gameObject);

		ObjectFactory.getInstance.ResourcesLoad ();
		Localization.language = "Korean";
	}

}
