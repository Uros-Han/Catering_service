using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HungerUI : MonoBehaviour {
	GameMgr gMgr;
	UISlider m_hungerBar;
	UILabel m_hungerCountLabel;
	// Use this for initialization
	void Start () {
		gMgr = GameMgr.getInstance;
		m_hungerBar = transform.Find ("hungerBar").GetComponent<UISlider> ();
		m_hungerCountLabel = transform.Find ("hungerCount").GetComponent<UILabel> ();
	}
	
	// Update is called once per frame
	void Update () {
		m_hungerBar.value = (float)gMgr.m_iHunger/100f;
		m_hungerCountLabel.text = gMgr.m_iHunger.ToString();
	}
}
