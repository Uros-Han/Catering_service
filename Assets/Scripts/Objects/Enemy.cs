using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : Part {

	// Use this for initialization
	void Start () {
		
	}

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
						transform.Translate(new Vector3(GridMgr.getInstance.m_fXsize, 0));
						m_bFindedSeat = true;
					}
				}else if(iCoreGrid%grid.m_iXcount < iThisGrid%grid.m_iXcount) // core is my left side
				{
					if(isSeatOccupied(iThisGrid - 1)) // Occupied
					{
					}else{ // empty
						transform.Translate(new Vector3(-GridMgr.getInstance.m_fXsize, 0));
						m_bFindedSeat = true;
					}
				}
			}

			if(m_headingDirection.Equals(DIRECTION.LEFT) || m_headingDirection.Equals(DIRECTION.RIGHT) || m_headingDirection.Equals(DIRECTION.EVERYWHERE))
			{
				if(iCoreGrid/grid.m_iXcount > iThisGrid/grid.m_iXcount) // core is my right side
				{
					if(isSeatOccupied(iThisGrid + 1)) // Occupied
					{
					}else{ // empty
						transform.Translate(new Vector3(0, -GridMgr.getInstance.m_fYsize));
						m_bFindedSeat = true;
					}
				}else if(iCoreGrid/grid.m_iXcount < iThisGrid/grid.m_iXcount) // core is my left side
				{
					if(isSeatOccupied(iThisGrid - 1)) // Occupied
					{
					}else{ // empty
						transform.Translate(new Vector3(0, GridMgr.getInstance.m_fYsize));
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

	IEnumerator Assemble()
	{
		Vector2 mousePosition = Vector2.zero;
		BoxCollider2D collider2D = GetComponent<BoxCollider2D> ();
		Vector3 OriginPos = transform.position;

		Core core = GameObject.Find ("Core").GetComponent<Core> ();
		core.CalculateStickableSeat ();
		bool bFollowCursor = false;

		GridMgr grid = GridMgr.getInstance;

		do{
			mousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
			if(Input.GetMouseButtonDown(0) && collider2D.OverlapPoint(mousePosition))
			{
				bFollowCursor = true;
			}

			if(bFollowCursor && Input.GetMouseButton(0)) //클릭시 따라다니게
			{
				transform.position = mousePosition;

				for(int i = 0 ; i < core.m_StickAvailableSeat.Count; ++i)
				{
					if(core.m_StickAvailableSeat[i].Equals(grid.GetGridIdx(transform.position)))
					{
						transform.position = grid.GetPosOfIdx(core.m_StickAvailableSeat[i]);
					}
				}
			}

			if(bFollowCursor && Input.GetMouseButtonUp(0))//클릭 뗏을때
			{
				bool bToOrigin = true;

				for(int i = 0 ; i < core.m_StickAvailableSeat.Count; ++i)
				{
					if(core.m_StickAvailableSeat[i].Equals(grid.GetGridIdx(transform.position))) // Stick!!!!!
					{
						transform.position = grid.GetPosOfIdx(core.m_StickAvailableSeat[i]);
						bToOrigin = false;
						transform.parent = GameObject.Find("Core").transform;
						GetComponent<SpriteRenderer>().color = transform.parent.GetComponent<Core>().m_colorLine;
						Destroy(GetComponent<Enemy>());
					}
				}

				if(bToOrigin)
				{
					transform.position = OriginPos;
				}

				core.CalculateStickableSeat ();

				bFollowCursor = false;
			}

			yield return null;
		}while(true);
	}
	
}
