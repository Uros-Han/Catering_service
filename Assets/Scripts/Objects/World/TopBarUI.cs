using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TopBarUI : MonoBehaviour {
	GameMgr gMgr;
	UISlider m_bar;
	UILabel m_countLabel;

	bool m_bHealthBar;
	Core core;

	// Use this for initialization
	void Start () {

		if (gameObject.name.Equals ("Health"))
			m_bHealthBar = true;

		core = GameObject.Find ("Player").transform.GetChild (0).GetComponent<Core> ();

		gMgr = GameMgr.getInstance;
		m_bar = transform.Find ("bar").GetComponent<UISlider> ();
		m_countLabel = transform.Find ("count").GetComponent<UILabel> ();
	}

	public void ChangeValue(float fTargetValue)
	{
		if(m_bHealthBar)
			iTween.ValueTo (gameObject, iTween.Hash ("from", core.m_fCurHealth, "to", fTargetValue, "Time", 0.5f, "onupdate", "TweenHunger", "easetype", "easeInSine"));
		else
			iTween.ValueTo (gameObject, iTween.Hash ("from", gMgr.m_iHunger,"to", (int)fTargetValue, "Time", 0.5f, "onupdate", "TweenHunger", "easetype", "easeInSine"));
	}

	void TweenHunger(int newVal)
	{
		if(m_bHealthBar)
			core.m_fCurHealth = newVal;
		else
			gMgr.m_iHunger = newVal;
	}
	
	// Update is called once per frame
	void Update () {

		if (m_bHealthBar) {
			m_bar.value = core.m_fCurHealth / 100f;
			m_countLabel.text = ((int)core.m_fCurHealth).ToString ();
		} else {
			m_bar.value = (float)gMgr.m_iHunger / 100f;
			m_countLabel.text = gMgr.m_iHunger.ToString ();
		}
	}
}
