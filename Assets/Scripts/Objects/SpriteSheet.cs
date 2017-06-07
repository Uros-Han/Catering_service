using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpriteSheet : MonoBehaviour {

	// Use this for initialization
	void Start () {

		m_bOpenedDir = new bool[4]{false, false, false, false};

		if(gameObject.name.Contains("Core"))
			m_sheet_sprite = ObjectFactory.getInstance.m_sheet_core;
		else if(gameObject.name.Contains("Cattle"))
			m_sheet_sprite = ObjectFactory.getInstance.m_sheet_cattle[Random.Range(0,4)];
		else if(gameObject.name.Contains("Wolf"))
			m_sheet_sprite = ObjectFactory.getInstance.m_sheet_wolf;
		else if(transform.parent.name.Contains("Farmer"))
			m_sheet_sprite = ObjectFactory.getInstance.m_sheet_farmer_0;

		if(!GetComponent<Part>().m_bEdgePart)
		GetComponent<SpriteRenderer> ().sprite = m_sheet_sprite [0];
	}

	public bool[] m_bOpenedDir; // Direction (0-Left, 1-Up, 2-Right, 3-Down) 해당 인접 방향에 물체가 존재하면 참, 없으면 거짓
	public Sprite[] m_sheet_sprite;

	public void CheckAround(bool bReceiveOnly, int iIdx = -1)
	{
		Transform CoreTrans = GameObject.Find ("Core").transform;

		m_bOpenedDir = new bool[4]{false, false, false, false};

		for (int i= 0; i < CoreTrans.childCount+1; ++i) {
			GridMgr grid = GridMgr.getInstance;
			int iTargetIdx = 0;
			int iThisIdx = 0;
			bool bSeatIsEmpty = false;

			if(iIdx == -1){
				iThisIdx = grid.GetGridIdx(transform.position);
				bSeatIsEmpty = false;
			}else{
				iThisIdx = iIdx;
				bSeatIsEmpty = true;
			}

			GameObject target = null;

			if(i==CoreTrans.childCount)
			{
				iTargetIdx = grid.GetGridIdx(CoreTrans.position);
				target = CoreTrans.gameObject;
			}else{
				iTargetIdx = grid.GetGridIdx(CoreTrans.GetChild(i).position);
				target = CoreTrans.GetChild(i).gameObject;
			}

			if(target == gameObject)
				continue;

			bool bEdgePart = GetComponent<Part>().m_bEdgePart;
			DIRECTION headingDir = GetComponent<Part>().m_headingDirection;
			Part TargetPart = target.GetComponent<Part>();

			//check left
			if(iTargetIdx == iThisIdx - 1)
			{
				if(TargetPart.m_bEdgePart)
					StickToMeEdgePart(target, bSeatIsEmpty, DIRECTION.LEFT);

				if(!(bEdgePart && !headingDir.Equals(DIRECTION.RIGHT)) && !(TargetPart.m_bEdgePart && !TargetPart.m_headingDirection.Equals(DIRECTION.LEFT)))
				{
					m_bOpenedDir[0]  = true;

					if(!bReceiveOnly)
						target.GetComponent<SpriteSheet>().CheckAround(true);
				}
			}

			//check right
			if(iTargetIdx == iThisIdx + 1)
			{
				if(TargetPart.m_bEdgePart)
					StickToMeEdgePart(target, bSeatIsEmpty, DIRECTION.RIGHT);

				if(!(bEdgePart && !headingDir.Equals(DIRECTION.LEFT)) && !(TargetPart.m_bEdgePart && !TargetPart.m_headingDirection.Equals(DIRECTION.RIGHT)))
				{
					m_bOpenedDir[2]  = true;

					if(!bReceiveOnly)
						target.GetComponent<SpriteSheet>().CheckAround(true);
				}
			}

			//check upward
			if(iTargetIdx == iThisIdx - grid.m_iXcount)
			{
				if(TargetPart.m_bEdgePart)
					StickToMeEdgePart(target, bSeatIsEmpty, DIRECTION.UP);

				if(!(bEdgePart && !headingDir.Equals(DIRECTION.DOWN)) && !(TargetPart.m_bEdgePart && !TargetPart.m_headingDirection.Equals(DIRECTION.UP)))
				{
					m_bOpenedDir[1]  = true;

					if(!bReceiveOnly)
						target.GetComponent<SpriteSheet>().CheckAround(true);
				}
			}

			//check downward
			if(iTargetIdx == iThisIdx + grid.m_iXcount)
			{
				if(TargetPart.m_bEdgePart)
					StickToMeEdgePart(target, bSeatIsEmpty, DIRECTION.DOWN);

				if(!(bEdgePart && !headingDir.Equals(DIRECTION.UP)) && !(TargetPart.m_bEdgePart && !TargetPart.m_headingDirection.Equals(DIRECTION.DOWN)))
				{
					m_bOpenedDir[3]  = true;

					if(!bReceiveOnly)
						target.GetComponent<SpriteSheet>().CheckAround(true);
				}
			}
		}

		if(iIdx != -1)
			SetSprite ();
		else
			SetSprite (0);

	}

	public void DestroyThis()
	{
		Transform CoreTrans = GameObject.Find ("Core").transform;

		for (int i= 0; i < CoreTrans.childCount+1; ++i) {
			GridMgr grid = GridMgr.getInstance;
			int iTargetIdx = 0;
			int iThisIdx = grid.GetGridIdx(transform.position);
			bool bSeatIsEmpty = true;
			
			GameObject target = null;
			
			if(i==CoreTrans.childCount)
			{
				iTargetIdx = grid.GetGridIdx(CoreTrans.position);
				target = CoreTrans.gameObject;
			}else{
				iTargetIdx = grid.GetGridIdx(CoreTrans.GetChild(i).position);
				target = CoreTrans.GetChild(i).gameObject;
			}
			
			if(target == gameObject)
				continue;
			
			bool bEdgePart = GetComponent<Part>().m_bEdgePart;
			DIRECTION headingDir = GetComponent<Part>().m_headingDirection;
			Part TargetPart = target.GetComponent<Part>();
			
			//check left
			if(iTargetIdx == iThisIdx - 1)
			{
				
				target.GetComponent<SpriteSheet>().m_bOpenedDir[2]  = false;
				
				target.GetComponent<SpriteSheet>().SetSprite(0);
			}
			
			//check right
			if(iTargetIdx == iThisIdx + 1)
			{
				
				target.GetComponent<SpriteSheet>().m_bOpenedDir[0]  = false;
				
				target.GetComponent<SpriteSheet>().SetSprite(0);
			}
			
			//check upward
			if(iTargetIdx == iThisIdx - grid.m_iXcount)
			{
				
				target.GetComponent<SpriteSheet>().m_bOpenedDir[3]  = false;
				
				target.GetComponent<SpriteSheet>().SetSprite(0);
			}
			
			//check downward
			if(iTargetIdx == iThisIdx + grid.m_iXcount)
			{
				
				target.GetComponent<SpriteSheet>().m_bOpenedDir[1]  = false;
				
				target.GetComponent<SpriteSheet>().SetSprite(0);
			}
		}
	}

	/// <summary>
	/// 만약 홀로 덩그라니 떨어진 엣지 파트라면 자기에게 붙도록 하는 함수
	/// </summary>
	void StickToMeEdgePart(GameObject target, bool StickToSomeOneElse ,DIRECTION dir)
	{
		if (Input.GetMouseButtonDown (0))
			return;

		Part TargetPart = target.GetComponent<Part>();

		bool bAllClosed = true;
		for(int j = 0 ; j < 4; ++j)
		{
			if(target.GetComponent<SpriteSheet>().m_bOpenedDir[j])
			{
				bAllClosed = false;
				break;
			}
		}
		if(bAllClosed)
		{
			if(!StickToSomeOneElse)
				TargetPart.m_headingDirection = dir;
			else{
				TargetPart.m_headingDirection = FindNewStickerDirection(target, TargetPart.m_headingDirection);
				target.GetComponent<SpriteSheet>().CheckAround(false);
			}
		}
	}

	DIRECTION FindNewStickerDirection(GameObject target, DIRECTION beforDir)
	{
		Transform CoreTrans = GameObject.Find ("Core").transform;
		int iTargetIdx = -1;
		GridMgr grid = GridMgr.getInstance;
		int iThisIdx = grid.GetGridIdx(target.transform.position);

		for (int i = 0; i < CoreTrans.childCount + 1; ++i) {

			if(i==CoreTrans.childCount)
			{
				iTargetIdx = grid.GetGridIdx(CoreTrans.position);
			}else{
				iTargetIdx = grid.GetGridIdx(CoreTrans.GetChild(i).position);
			}

			if(iTargetIdx == iThisIdx - 1)
			{
				return DIRECTION.RIGHT;
			}

			if(iTargetIdx == iThisIdx - grid.m_iXcount)
			{
				return DIRECTION.DOWN;
			}

			if(iTargetIdx == iThisIdx + 1)
			{
				return DIRECTION.LEFT;
			}

			if(iTargetIdx == iThisIdx + grid.m_iXcount)
			{
				return DIRECTION.UP;
			}
		}

		return beforDir;
	}

	public void SetSprite(int iIdx = -1)
	{
		if (GetComponent<Part> ().m_bEdgePart)
			return;

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

		if(iIdx == -1)
			sp.sprite = m_sheet_sprite[0];
	}
}
