using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PartAnimator : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}

	void Weapon_Attack()
	{
		transform.parent.parent.GetComponent<Part> ().Weapon_Attack ();
	}
}
