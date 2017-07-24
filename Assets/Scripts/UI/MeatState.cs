using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MeatState : MonoBehaviour {

	UILabel m_label;

	// Use this for initialization
	void Start () {
		m_label = GetComponent<UILabel> ();
	}
	
	// Update is called once per frame
	void Update () {
		m_label.text = BattleSceneMgr.getInstance.m_iMeat.ToString();
	}
}
