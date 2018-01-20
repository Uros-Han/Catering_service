using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TimeUI : MonoBehaviour {

	UILabel label;

	// Use this for initialization
	void Start () {
		label = transform.GetChild (2).GetComponent<UILabel> ();
	}
	
	// Update is called once per frame
	void Update () {
		label.text = string.Format("{0} : {1:00}", (int)TimeMgr.getInstance.m_fHour, (int)TimeMgr.getInstance.m_fMinute);
	}
}
