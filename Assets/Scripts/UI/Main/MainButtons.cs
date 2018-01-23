using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainButtons : MonoBehaviour {

	// Use this for initialization
	void Start () {
		if (gameObject.name.Equals ("Continue")) {
			if (!ES3.FileExists ("world.txt"))
				gameObject.SetActive (false);
		} else if (gameObject.name.Equals ("DevleoperMode")) {
			if (!GameMgr.getInstance.m_bDeveloperMode)
				transform.GetChild (0).GetComponent<UILabel> ().text = "끔";
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnClick()
	{
		switch(gameObject.name){
		case "Continue":
			GameMgr.getInstance.ContinueGame ();
			break;

		case "NewGame":
			GameMgr.getInstance.CreateGame ();
			break;

		case "Collection":
			break;

		case "Options":
			SwitchPanel (transform.parent.GetComponent<TweenAlpha> (), GameObject.Find ("OptionPanel").GetComponent<TweenAlpha> ());
			break;		

		case "DevleoperMode":
			if (!GameMgr.getInstance.m_bDeveloperMode) {
				transform.GetChild (0).GetComponent<UILabel> ().text = "켬";
				GameMgr.getInstance.m_bDeveloperMode = true;
			} else {
				transform.GetChild (0).GetComponent<UILabel> ().text = "끔";
				GameMgr.getInstance.m_bDeveloperMode = false;
			}
			break;

		case "Back":
			SwitchPanel (transform.parent.GetComponent<TweenAlpha> (), GameObject.Find ("MainPanel").GetComponent<TweenAlpha> ());
			break;		
		}
	}


	void SwitchPanel(TweenAlpha offPanel, TweenAlpha onPanel)
	{
		offPanel.from = 1;
		offPanel.to = 0;
		offPanel.ResetToBeginning ();
		offPanel.Play ();

		onPanel.from = 0;
		onPanel.to = 1;
		onPanel.ResetToBeginning ();
		onPanel.Play ();
	}
}
