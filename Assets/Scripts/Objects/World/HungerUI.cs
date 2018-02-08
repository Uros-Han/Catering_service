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

	public void IncreaseHunger(int iTargetHunger)
	{
		iTween.ValueTo (gameObject, iTween.Hash ("from", gMgr.m_iHunger,"to", iTargetHunger, "Time", 0.5f, "onupdate", "TweenHunger", "easetype", "easeInSine"));
	}

	void TweenHunger(int newVal)
	{
		gMgr.m_iHunger = newVal;
	}
	
	// Update is called once per frame
	void Update () {
		m_hungerBar.value = (float)gMgr.m_iHunger/100f;
		m_hungerCountLabel.text = gMgr.m_iHunger.ToString();
	}
}
