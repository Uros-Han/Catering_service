using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Com.LuisPedroFonseca.ProCamera2D;

public class CameraScript : MonoBehaviour {

	// Use this for initialization
	void Start () {
		ProCamera2D.Instance.AddCameraTarget (GameObject.Find ("Player").transform, 0, 0, 0);
	}

}
