using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MeatButton : MonoBehaviour {

	bool m_bToggled = false;
	UISprite m_buttonSprite;

	void Start()
	{
		m_buttonSprite = GetComponent<UISprite> ();
	}

	public void OnClick()
	{
		if(!m_bToggled){
			m_bToggled = true;
			BattleSceneMgr.getInstance.m_mouseState = MOUSE_STATE.HEAL;
			m_buttonSprite.color = new Color(0,1,50/255f);
			GameObject.Find("Player").BroadcastMessage("HealCheck", SendMessageOptions.DontRequireReceiver);
			if (BattleSceneMgr.getInstance.m_turnState.Equals (TURN_STATE.DAY))
				Time.timeScale = 0.1f;
		}else{
			m_bToggled = false;
			BattleSceneMgr.getInstance.m_mouseState = MOUSE_STATE.NORMAL;
			m_buttonSprite.color = new Color(201/255f, 201/255f, 201/255f);
			Time.timeScale = 1f;
		}
	}
}
