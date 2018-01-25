using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainManager : MonoBehaviour {

	void Awake()
	{
		if(GameObject.Find("GameMgr") == null) //if gameMgr doesn't exist, make one.
		{
			GameObject gameMgr = Instantiate(Resources.Load("Prefabs/GameMgr") as GameObject) as GameObject;
			gameMgr.name = gameMgr.name.Replace("(Clone)","");
		}

		SoundMgr.getInstance.SetAudioSources ();
	}
}
