using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : Part {

	public void FindNewSeat()
	{
		if (m_bDestroied)
			return;

		StartCoroutine (Finding ());
	}

	public bool m_bFindedSeat = false;
	IEnumerator Finding()
	{
		m_bFindedSeat = false;

		Transform Core = GameObject.Find ("Core").transform;
		GridMgr grid = GridMgr.getInstance;

		//자기 라인에 상대 파츠 있으면 가만 있음
		for (int i = 0; i < Core.childCount + 1; ++i) {
			GameObject tmpPart;
			
			if (i == Core.childCount) 
				tmpPart = Core.gameObject;
			else
				tmpPart = Core.GetChild (i).gameObject;
			
			if(m_headingDirection.Equals(DIRECTION.LEFT) || m_headingDirection.Equals(DIRECTION.RIGHT) || m_headingDirection.Equals(DIRECTION.EVERYWHERE))
			{
				if(grid.GetGridIdx (transform.position) / grid.m_iXcount == grid.GetGridIdx (tmpPart.transform.position) / grid.m_iXcount){ //가로 일치
					m_bFindedSeat = true;
					break;
				}
			}
			if(m_headingDirection.Equals(DIRECTION.UP) || m_headingDirection.Equals(DIRECTION.DOWN) || m_headingDirection.Equals(DIRECTION.EVERYWHERE))
			{
				if (grid.GetGridIdx (transform.position) % grid.m_iXcount == grid.GetGridIdx (tmpPart.transform.position) % grid.m_iXcount) { //세로 일치
					m_bFindedSeat = true;
					break;
				}
			}
		}

		//내 라인에 상대 파츠 없음

		float fTime = 0f;

		while(!m_bFindedSeat && fTime < 1f)
		{
			int iCoreGrid = grid.GetGridIdx(Core.position);
			int iThisGrid = grid.GetGridIdx(transform.position);
			fTime += Time.deltaTime;

			if(m_headingDirection.Equals(DIRECTION.DOWN) || m_headingDirection.Equals(DIRECTION.UP) || m_headingDirection.Equals(DIRECTION.EVERYWHERE))
			{
				if(iCoreGrid%grid.m_iXcount > iThisGrid%grid.m_iXcount) // core is my right side
				{
					if(isSeatOccupied(iThisGrid + 1)) // Occupied
					{

					}else{ // empty
//						transform.position = new Vector2(transform.position.x + GridMgr.getInstance.m_fYsize , transform.position.y);
						iTween.MoveTo(gameObject, iTween.Hash ("x" , transform.position.x + GridMgr.getInstance.m_fXsize, "islocal", false, "time", 0.25f, "easetype", "easeOutBack"));
						m_bFindedSeat = true;
					}
				}else if(iCoreGrid%grid.m_iXcount < iThisGrid%grid.m_iXcount) // core is my left side
				{
					if(isSeatOccupied(iThisGrid - 1)) // Occupied
					{
					}else{ // empty
//						transform.position = new Vector2(transform.position.x - GridMgr.getInstance.m_fYsize , transform.position.y);
						iTween.MoveTo(gameObject, iTween.Hash ("x" , transform.position.x - GridMgr.getInstance.m_fXsize, "islocal", false, "time", 0.25f, "easetype", "easeOutBack"));
						m_bFindedSeat = true;
						//Done to here below here is OT

					}
				}
			}

			if(m_headingDirection.Equals(DIRECTION.LEFT) || m_headingDirection.Equals(DIRECTION.RIGHT) || m_headingDirection.Equals(DIRECTION.EVERYWHERE))
			{
				if(iCoreGrid/grid.m_iXcount > iThisGrid/grid.m_iXcount) // core is my down side
				{
					if(isSeatOccupied(iThisGrid + grid.m_iXcount)) // Occupied
					{
					}else{ // empty
//						transform.position = new Vector2(transform.position.x, transform.position.y -GridMgr.getInstance.m_fYsize );
						iTween.MoveTo(gameObject, iTween.Hash ("y" , transform.position.y - GridMgr.getInstance.m_fYsize, "islocal", false, "time", 0.25f, "easetype", "easeOutBack"));
						m_bFindedSeat = true;
					}
				}else if(iCoreGrid/grid.m_iXcount < iThisGrid/grid.m_iXcount) // core is my up side
				{
					if(isSeatOccupied(iThisGrid - grid.m_iXcount)) // Occupied
					{
					}else{ // empty
//						transform.position = new Vector2(transform.position.x, transform.position.y + GridMgr.getInstance.m_fYsize );
						iTween.MoveTo(gameObject, iTween.Hash ("y" , transform.position.y + GridMgr.getInstance.m_fYsize, "islocal", false, "time", 0.25f, "easetype", "easeOutBack"));
						m_bFindedSeat = true;
					}
				}
			}

			yield return null;
		};
	}

	bool isSeatOccupied(int iGrid)
	{
		Transform EnemyTrans = GameObject.Find ("Enemies").transform;

		for (int i = 0; i < EnemyTrans.childCount; ++i) {
			if(GridMgr.getInstance.GetGridIdx(EnemyTrans.GetChild(i).position) == iGrid)
			{
				return true;
			}
		}

		return false;
	}

}
