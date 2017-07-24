using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainButtons : MonoBehaviour {

	// Use this for initialization
	void Start () {
		if (gameObject.name.Equals ("Continue")) {
			if(!FileSystem.SaveFileExistCheck("SaveData"))
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
			break;

		case "NewGame":
			Application.LoadLevel("Battle");
			break;

		case "Collection":
			break;

		case "Options":
			break;			
		}
	}
}
