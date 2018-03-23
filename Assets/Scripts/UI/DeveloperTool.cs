using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeveloperTool : MonoBehaviour {

	enum DEBUG_MOUSE_STATE { NORMAL, DEBUG, END };
	enum DEBUG_STATE { CREATE_CARAVAN, CREATE_RAIDER, CREATE_HERO, END };

	DEBUG_MOUSE_STATE debugMouseState = DEBUG_MOUSE_STATE.NORMAL;
	DEBUG_STATE curDebug;
	bool bMouseFollowBugOn;
	string strCurDebugLabel;

	void Update()
	{
		if (debugMouseState.Equals (DEBUG_MOUSE_STATE.DEBUG)) {
			if (Input.GetKeyDown (KeyCode.Escape)) {
				MouseDebugOn (false);
			}

			if (Input.GetMouseButtonDown (0)) {
				UICamera.selectedObject = GameObject.Find ("MouseFollower").gameObject;

                List<int> enemyList = GameObject.Find("Geo").transform.GetChild(GridMgr.getInstance.GetGridIdx(Camera.main.ScreenToWorldPoint(Input.mousePosition))).GetComponent<WorldGeo>().m_worldIcon.GetComponent<WorldIcon>().m_list_enemyType;
                if (enemyList.Count == 0)
                    return;


				switch (curDebug) {
				case DEBUG_STATE.CREATE_CARAVAN:
					ObjectFactory.getInstance.Create_Party (GridMgr.getInstance.GetGridIdx (Camera.main.ScreenToWorldPoint (Input.mousePosition)), PARTY_TYPE.CARAVAN);
					break;

				case DEBUG_STATE.CREATE_RAIDER:
					ObjectFactory.getInstance.Create_Party (GridMgr.getInstance.GetGridIdx (Camera.main.ScreenToWorldPoint (Input.mousePosition)), PARTY_TYPE.RAID);
					break;

				case DEBUG_STATE.CREATE_HERO:
					ObjectFactory.getInstance.Create_Party (GridMgr.getInstance.GetGridIdx (Camera.main.ScreenToWorldPoint (Input.mousePosition)), PARTY_TYPE.RAID, System.Convert.ToInt32(GameObject.Find("Dev_HeroNum").GetComponent<UILabel>().text));
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
			transform.GetChild (0).GetChild (0).GetComponent<UILabel> ().text = strCurDebugLabel;
			bMouseFollowBugOn = true;
		} else {
			debugMouseState = DEBUG_MOUSE_STATE.NORMAL;
			transform.GetChild (0).gameObject.SetActive (false);
			bMouseFollowBugOn = false;
		}
	}

	public bool m_bFogDisabled = false;
	void Debug_DisableFog()
	{
		if (!m_bFogDisabled) {
			Camera.main.GetComponent<FoW.FogOfWar> ().enabled = false;

			Transform Party = GameObject.Find ("Party").transform;
			for (int j = 0; j < Party.childCount; ++j) {
				Transform civTrans = Party.GetChild (j).transform;

				for (int i = 0; i < civTrans.childCount; ++i) {
					civTrans.GetChild (i).GetComponent<FoW.HideInFog> ().enabled = false;
					civTrans.GetChild (i).GetComponent<SpriteRenderer> ().enabled = true;
				}
			}

			m_bFogDisabled = true;
		} else {
			Camera.main.GetComponent<FoW.FogOfWar> ().enabled = true;

			Transform Party = GameObject.Find ("Party").transform;
			for (int j = 0; j < Party.childCount; ++j) {
				Transform civTrans = Party.GetChild (j).transform;

				for (int i = 0; i < civTrans.childCount; ++i) {
					civTrans.GetChild (i).GetComponent<FoW.HideInFog> ().enabled = true;
					civTrans.GetChild (i).GetComponent<SpriteRenderer> ().enabled = false;
				}
			}

			m_bFogDisabled = false;
		}
	}

	void Debug_CreateCaravan()
	{
		Debug_Escape ();
		strCurDebugLabel = "Create Caravan";
		MouseDebugOn (true, DEBUG_STATE.CREATE_CARAVAN);
	}

	void Debug_CreateRaider()
	{
		Debug_Escape ();
		strCurDebugLabel = "Create Raider";
		MouseDebugOn (true, DEBUG_STATE.CREATE_RAIDER);
	}

	void Debug_CreateHero()
	{
		Debug_Escape ();
		strCurDebugLabel = "Create Hero\n" + (HERO)(System.Convert.ToInt32(GameObject.Find("Dev_HeroNum").GetComponent<UILabel>().text));
		MouseDebugOn (true, DEBUG_STATE.CREATE_HERO);
	}
}
