using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : Part {

	// Use this for initialization
	void Start () {
		
	}

	public void FindNewSeat()
	{
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
			
			if(m_headingDirection.Equals(DIRECTION.LEFT) || m_headingDirection.Equals(DIRECTION.RIGHT))
			{
				if(grid.GetGridIdx (transform.position) / grid.m_iXcount == grid.GetGridIdx (tmpPart.transform.position) / grid.m_iXcount){ //가로 일치
					m_bFindedSeat = true;
					break;
				}
			}else if(m_headingDirection.Equals(DIRECTION.UP) || m_headingDirection.Equals(DIRECTION.DOWN))
			{
				if (grid.GetGridIdx (transform.position) % grid.m_iXcount == grid.GetGridIdx (tmpPart.transform.position) % grid.m_iXcount) { //세로 일치
					m_bFindedSeat = true;
					break;
				}
			}
		}

		//내 라인에 상대 파츠 없음
		while(!m_bFindedSeat)
		{
			int iCoreGrid = grid.GetGridIdx(Core.position);
			int iThisGrid = grid.GetGridIdx(transform.position);

			if(iCoreGrid%grid.m_iXcount > iThisGrid) // core is my right side
			{
				if(isSeatOccupied(iThisGrid + 1)) // Occupied
				{

				}else{ // empty
					transform.Translate(new Vector3(GridMgr.getInstance.m_fXsize, 0));
					m_bFindedSeat = true;
				}
			}else if(iCoreGrid%grid.m_iXcount < iThisGrid) // core is my left side
			{
				if(isSeatOccupied(iThisGrid - 1)) // Occupied
				{
					
				}else{ // empty
					transform.Translate(new Vector3(-GridMgr.getInstance.m_fXsize, 0));
					m_bFindedSeat = true;
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
