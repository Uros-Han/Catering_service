using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpriteSheet : MonoBehaviour {

	// Use this for initialization
	void Start () {

		m_bOpenedDir = new bool[4]{false, false, false, false};

		m_sheet_sprite = ObjectFactory.getInstance.m_sheet_pig;
	}

	public bool[] m_bOpenedDir; // Direction (0-Left, 1-Up, 2-Right, 3-Down) 해당 인접 방향에 물체가 존재하면 참, 없으면 거짓
	Sprite[] m_sheet_sprite;

	public void CheckAround(bool bReceiveOnly)
	{
		Transform CoreTrans = GameObject.Find ("Core").transform;

		m_bOpenedDir = new bool[4]{false, false, false, false};

		for (int i= 0; i < CoreTrans.childCount+1; ++i) {
			GridMgr grid = GridMgr.getInstance;
			int iTargetIdx = 0;
			int iThisIdx = grid.GetGridIdx(transform.position);
			GameObject target = null;

			if(i==CoreTrans.childCount)
			{
				iTargetIdx = grid.GetGridIdx(CoreTrans.position);
				target = CoreTrans.gameObject;
			}else{
				iTargetIdx = grid.GetGridIdx(CoreTrans.GetChild(i).position);
				target = CoreTrans.GetChild(i).gameObject;
			}

			//check left
			if(iTargetIdx == iThisIdx - 1)
			{
				m_bOpenedDir[0]  = true;

				if(!bReceiveOnly)
					target.SendMessage("CheckAround", true, SendMessageOptions.DontRequireReceiver);
			}

			//check right
			if(iTargetIdx == iThisIdx + 1)
			{
				m_bOpenedDir[2]  = true;

				if(!bReceiveOnly)
					target.SendMessage("CheckAround", true, SendMessageOptions.DontRequireReceiver);
			}

			//check upward
			if(iTargetIdx == iThisIdx - grid.m_iXcount)
			{
				m_bOpenedDir[1]  = true;

				if(!bReceiveOnly)
					target.SendMessage("CheckAround", true, SendMessageOptions.DontRequireReceiver);
			}

			//check downward
			if(iTargetIdx == iThisIdx + grid.m_iXcount)
			{
				m_bOpenedDir[3]  = true;

				if(!bReceiveOnly)
					target.SendMessage("CheckAround", true, SendMessageOptions.DontRequireReceiver);
			}
		}

		SetSprite ();
	}

	void SetSprite()
	{
		SpriteRenderer sp = GetComponent<SpriteRenderer> ();

		if(!m_bOpenedDir[0] && !m_bOpenedDir[1] && !m_bOpenedDir[2] && !m_bOpenedDir[3]){
			sp.sprite = m_sheet_sprite[0];
		}else if(!m_bOpenedDir[0] && !m_bOpenedDir[1] && !m_bOpenedDir[2] && m_bOpenedDir[3]){
			sp.sprite = m_sheet_sprite[4];
		}else if(!m_bOpenedDir[0] && !m_bOpenedDir[1] && m_bOpenedDir[2] && !m_bOpenedDir[3]){
			sp.sprite = m_sheet_sprite[1];
		}else if(!m_bOpenedDir[0] && !m_bOpenedDir[1] && m_bOpenedDir[2] && m_bOpenedDir[3]){
			sp.sprite = m_sheet_sprite[5];
		}else if(!m_bOpenedDir[0] && m_bOpenedDir[1] && !m_bOpenedDir[2] && !m_bOpenedDir[3]){
			sp.sprite = m_sheet_sprite[12];
		}else if(!m_bOpenedDir[0] && m_bOpenedDir[1] && !m_bOpenedDir[2] && m_bOpenedDir[3]){
			sp.sprite = m_sheet_sprite[8];
		}else if(!m_bOpenedDir[0] && m_bOpenedDir[1] && m_bOpenedDir[2] && !m_bOpenedDir[3]){
			sp.sprite = m_sheet_sprite[13];
		}else if(!m_bOpenedDir[0] && m_bOpenedDir[1] && m_bOpenedDir[2] && m_bOpenedDir[3]){
			sp.sprite = m_sheet_sprite[9];
		}else if(m_bOpenedDir[0] && !m_bOpenedDir[1] && !m_bOpenedDir[2] && !m_bOpenedDir[3]){
			sp.sprite = m_sheet_sprite[3];
		}else if(m_bOpenedDir[0] && !m_bOpenedDir[1] && !m_bOpenedDir[2] && m_bOpenedDir[3]){
			sp.sprite = m_sheet_sprite[7];
		}else if(m_bOpenedDir[0] && !m_bOpenedDir[1] && m_bOpenedDir[2] && !m_bOpenedDir[3]){
			sp.sprite = m_sheet_sprite[2];
		}else if(m_bOpenedDir[0] && !m_bOpenedDir[1] && m_bOpenedDir[2] && m_bOpenedDir[3]){
			sp.sprite = m_sheet_sprite[6];
		}else if(m_bOpenedDir[0] && m_bOpenedDir[1] && !m_bOpenedDir[2] && !m_bOpenedDir[3]){
			sp.sprite = m_sheet_sprite[15];
		}else if(m_bOpenedDir[0] && m_bOpenedDir[1] && !m_bOpenedDir[2] && m_bOpenedDir[3]){
			sp.sprite = m_sheet_sprite[11];
		}else if(m_bOpenedDir[0] && m_bOpenedDir[1] && m_bOpenedDir[2] && !m_bOpenedDir[3]){
			sp.sprite = m_sheet_sprite[14];
		}else if(m_bOpenedDir[0] && m_bOpenedDir[1] && m_bOpenedDir[2] && m_bOpenedDir[3]){
			sp.sprite = m_sheet_sprite[10];
		}
	}
}
