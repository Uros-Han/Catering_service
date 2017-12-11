using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}

	void CameBackFromBattleScene()
	{
		for (int i = 0; i < transform.childCount; ++i) {
			transform.GetChild (i).gameObject.SetActive (false);
		}

		SaveManager.getInstance.LocalSave ();
	}

	public void BattleScene()
	{
		for (int i = 0; i < transform.childCount; ++i) {
			transform.GetChild (i).gameObject.SetActive (true);
		}
	}
}
