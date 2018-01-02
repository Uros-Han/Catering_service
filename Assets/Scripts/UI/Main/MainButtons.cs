using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainButtons : MonoBehaviour {

	// Use this for initialization
	void Start () {
		if (gameObject.name.Equals ("Continue")) {
			if(!ES3.FileExists("world.txt"))
				gameObject.SetActive(false);
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnClick()
	{
		switch(gameObject.name){
		case "Continue":
			GameMgr.getInstance.ContinueGame ();
			break;

		case "NewGame":
			GameMgr.getInstance.CreateGame ();
			break;

		case "Collection":
			break;

		case "Options":
			break;			
		}
	}

}
