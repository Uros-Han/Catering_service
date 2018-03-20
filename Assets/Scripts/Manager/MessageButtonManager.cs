﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MessageButtonManager : MonoBehaviour {

	void HungerCheckerEnforcement()
	{
		GameObject.Find ("Core").GetComponent<Core_World> ().MoveOrder ();
		Destroy (GameObject.Find ("MessageBox(Clone)").gameObject);
	}

	void HungerCheckerWait()
	{
		GameObject.Find ("WorldMapManager").GetComponent<WorldMapManager> ().Wait ();
		Destroy (GameObject.Find ("MessageBox(Clone)").gameObject);
	}
	
	void DestroyMessageBox()
	{
		Destroy (GameObject.Find ("MessageBox(Clone)").gameObject);
	}

	void GameOver()
	{
		Application.LoadLevel ("Main");
	}
}
