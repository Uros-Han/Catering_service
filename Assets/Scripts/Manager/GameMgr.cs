using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameMgr : MonoBehaviour {

	private static GameMgr instance;

	public static GameMgr getInstance
	{
		get
		{
			if (instance == null)
			{
				instance = FindObjectOfType(typeof(GameMgr)) as GameMgr;
			}

			if (instance == null)
			{
				GameObject obj = new GameObject("GameMgr");
				instance = obj.AddComponent(typeof(GameMgr)) as GameMgr;
			}

			return instance;
		}
	}

	public TURN_STATE m_turnState = TURN_STATE.END;

	// Use this for initialization
	void Awake () {
		if (instance == null)
			instance = this;

		else if (instance != this)
			Destroy(gameObject);

		DontDestroyOnLoad(gameObject);

		ObjectFactory.getInstance.ResourcesLoad ();
	}

	void OnDestroy()
	{
		instance = null;
	}
}
