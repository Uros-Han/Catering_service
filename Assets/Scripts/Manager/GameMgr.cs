using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameMgr : Singleton<GameMgr> {

	public TURN_STATE m_turnState = TURN_STATE.END;

	// Use this for initialization
	void Awake () {

		DontDestroyOnLoad(gameObject);

		ObjectFactory.getInstance.ResourcesLoad ();
	}

}
