using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MessageButtonManager : MonoBehaviour {

	// Use this for initialization
	void Start () {
		DontDestroyOnLoad (gameObject);
	}

	void HungerCheckerEnforcement()
	{
		GameObject.Find ("Core").GetComponent<Core_World> ().MoveOrder ();
		Destroy (GameObject.Find ("MessageBox(Clone)").gameObject);
	}
	
	void DestroyMessageBox()
	{
		Destroy (GameObject.Find ("MessageBox(Clone)").gameObject);
	}
}
