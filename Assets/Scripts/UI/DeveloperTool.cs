using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeveloperTool : MonoBehaviour {

	enum DEBUG_MOUSE_STATE { NORMAL, DEBUG, END };
	enum DEBUG_STATE { CREATE_CARAVAN, CREATE_RAIDER, END };

	DEBUG_MOUSE_STATE debugMouseState = DEBUG_MOUSE_STATE.NORMAL;
	DEBUG_STATE curDebug;
	bool bMouseFollowBugOn;

	void Update()
	{
		if (debugMouseState.Equals (DEBUG_MOUSE_STATE.DEBUG)) {
			if (Input.GetKeyDown (KeyCode.Escape)) {
				MouseDebugOn (false);
			}

			if (Input.GetMouseButtonDown (0)) {
				UICamera.selectedObject = GameObject.Find ("MouseFollower").gameObject;

				switch (curDebug) {
				case DEBUG_STATE.CREATE_CARAVAN:
					ObjectFactory.getInstance.Create_Party (GridMgr.getInstance.GetGridIdx (Camera.main.ScreenToWorldPoint (Input.mousePosition)), PARTY_TYPE.CARAVAN);
					break;

				case DEBUG_STATE.CREATE_RAIDER:
					ObjectFactory.getInstance.Create_Party (GridMgr.getInstance.GetGridIdx (Camera.main.ScreenToWorldPoint (Input.mousePosition)), PARTY_TYPE.RAID);
					break;
				}

				MouseDebugOn (false);
			}
		}

		if (bMouseFollowBugOn)
			transform.GetChild (0).transform.position = UICamera.mainCamera.ScreenToWorldPoint(Input.mousePosition);
	}

	void Debug_Open()
	{
		transform.GetChild(2).GetComponent<UIPanel> ().alpha = 1;
	}

	void Debug_Escape()
	{
		transform.GetChild(2).GetComponent<UIPanel> ().alpha = 0;
	}

	void MouseDebugOn(bool bOn, DEBUG_STATE debugState = DEBUG_STATE.END)
	{
		if (bOn) {
			debugMouseState = DEBUG_MOUSE_STATE.DEBUG;
			curDebug = debugState;
			transform.GetChild (0).gameObject.SetActive (true);
			bMouseFollowBugOn = true;
		} else {
			debugMouseState = DEBUG_MOUSE_STATE.NORMAL;
			transform.GetChild (0).gameObject.SetActive (false);
			bMouseFollowBugOn = false;
		}
	}

	void Debug_CreateCaravan()
	{
		Debug_Escape ();
		MouseDebugOn (true, DEBUG_STATE.CREATE_CARAVAN);
	}

	void Debug_CreateRaider()
	{
		Debug_Escape ();
		MouseDebugOn (true, DEBUG_STATE.CREATE_RAIDER);
	}
}
