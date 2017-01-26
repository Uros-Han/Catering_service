using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Core : Part {

	public int m_MoveCount = 1;

	// Use this for initialization
	void Start () {
		StartCoroutine (UserControl());

		m_bAttackAvailable = true;
		m_bFriendly = true;
	}

	void OnDestroy()
	{
		StopAllCoroutines ();
	}

	TURN_STATE m_beforeState;
	int m_iCoreIdx;
	IEnumerator UserControl()
	{
		GameMgr gMgr = GameMgr.getInstance;

		while (true) {

			if (gMgr.m_turnState.Equals (TURN_STATE.USER_MOVE)) {

				//Init
				if (m_beforeState != gMgr.m_turnState) {
					//최초 위치기억 
					m_iCoreIdx = GridMgr.getInstance.GetGridIdx (transform.position);

					m_MoveCount = 2;
					GameObject.Find ("CanMove").GetComponent<UILabel> ().text = "MOVE : " + m_MoveCount;
				}

				if (Input.GetKeyDown (KeyCode.W)) {
					if (GetShortestDistance (m_iCoreIdx, GridMgr.getInstance.GetGridIdx (transform.position + new Vector3 (0, GridMgr.getInstance.m_fYsize))) <= m_MoveCount) {
						transform.Translate (new Vector3 (0, GridMgr.getInstance.m_fYsize));
						GetShortestDistance (m_iCoreIdx, GridMgr.getInstance.GetGridIdx (transform.position), true);
					}
				}else if (Input.GetKeyDown (KeyCode.S)) {
					if (GetShortestDistance (m_iCoreIdx, GridMgr.getInstance.GetGridIdx (transform.position - new Vector3 (0, GridMgr.getInstance.m_fYsize))) <= m_MoveCount) {
						transform.Translate (new Vector3 (0, -GridMgr.getInstance.m_fYsize));
						GetShortestDistance (m_iCoreIdx, GridMgr.getInstance.GetGridIdx (transform.position), true);
					}
				}else if (Input.GetKeyDown (KeyCode.A)) {
					if (GetShortestDistance (m_iCoreIdx, GridMgr.getInstance.GetGridIdx (transform.position - new Vector3 (GridMgr.getInstance.m_fXsize, 0))) <= m_MoveCount) {
						transform.Translate (new Vector3 (-GridMgr.getInstance.m_fXsize, 0));
						GetShortestDistance (m_iCoreIdx, GridMgr.getInstance.GetGridIdx (transform.position), true);
					}
				}else if (Input.GetKeyDown (KeyCode.D)) {
					if (GetShortestDistance (m_iCoreIdx, GridMgr.getInstance.GetGridIdx (transform.position + new Vector3 (GridMgr.getInstance.m_fXsize, 0))) <= m_MoveCount) {
						transform.Translate (new Vector3 (GridMgr.getInstance.m_fXsize, 0));
						GetShortestDistance (m_iCoreIdx, GridMgr.getInstance.GetGridIdx (transform.position), true);
					}
				}
			}

			m_beforeState = gMgr.m_turnState;

			yield return null;
		};
	}

	int GetShortestDistance(int iStart, int iEnd, bool bWithLabel = false)
	{
		AStar.getInstance.AStarStart (iStart, iEnd);

		int iDistance = AStar.getInstance.m_BestList.Count;

		if (iStart == iEnd)
			iDistance = 0;

		if(bWithLabel)
			GameObject.Find ("CanMove").GetComponent<UILabel> ().text = "MOVE : " + (m_MoveCount - iDistance);

		return iDistance;
	}


}
