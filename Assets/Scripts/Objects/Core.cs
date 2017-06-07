using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Core : Part {

	public int m_MoveCount = 1;
	public bool[] m_bControl;

	// Use this for initialization
	void Start () {
		StartCoroutine (UserControl());

		m_bAttackAvailable = true;
		m_StickAvailableSeat = new List<int> ();

		m_bControl = new bool[4];
	}

	void OnDestroy()
	{
		StopAllCoroutines ();
	}

	TURN_STATE m_beforeState;
	int m_iCoreIdx;
	public List<int> m_StickAvailableSeat;
	
	IEnumerator UserControl()
	{
		GameMgr gMgr = GameMgr.getInstance;

		while (true) {

			if(Input.GetKey(KeyCode.A))
			{
				transform.Translate(new Vector3(-1,0) * 0.005f);
			}else if(Input.GetKey(KeyCode.D))
			{
				transform.Translate(new Vector3(1,0) * 0.005f);
			}

			yield return null;
		};
	}

	void MoveEnemies(DIRECTION dir1, string strDir, float fDistance)
	{
		Transform EnemyTrans = GameObject.Find ("Enemies").transform;

		for (int i = 0; i < EnemyTrans.childCount; ++i) {
			if(3-(int)dir1 == (int)EnemyTrans.GetChild(i).GetComponent<Part>().m_headingDirection)
			{
//				EnemyTrans.GetChild(i).Translate(translateVal);
				if(strDir.Equals("x"))
					iTween.MoveTo(EnemyTrans.GetChild(i).gameObject, iTween.Hash(strDir , EnemyTrans.GetChild(i).position.x +fDistance, "islocal", false, "time", 0.25f, "easetype", "easeOutBack"));
				else
					iTween.MoveTo(EnemyTrans.GetChild(i).gameObject, iTween.Hash(strDir , EnemyTrans.GetChild(i).position.y +fDistance, "islocal", false, "time", 0.25f, "easetype", "easeOutBack"));
			}
		}

	}

	void MoveGridIdx()
	{
		GridMgr grid = GridMgr.getInstance;

		for (int i = 0; i < transform.childCount; ++i) {
			transform.GetChild(i).GetComponent<Part>().m_iGridIdx = grid.GetGridIdx(transform.GetChild(i).position);
		}

		m_iGridIdx = GridMgr.getInstance.GetGridIdx (transform.position);
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

	public void CalculateStickableSeat(bool bDragPart)
	{
		m_StickAvailableSeat.Clear ();
		List<int> TakenSeat = new List<int> ();
		
		int iPartGrid = 0;
		bool bEdgePart = false;
		GridMgr grid = GridMgr.getInstance;
		TakenSeat.Add (grid.GetGridIdx(transform.position));
		
		for (int i = 0; i < transform.childCount + 1; ++i) {
			bEdgePart = false;

			if(i == transform.childCount){
				iPartGrid = grid.GetGridIdx(transform.position);
			}else{
				iPartGrid = grid.GetGridIdx(transform.GetChild(i).position);
				bEdgePart = transform.GetChild(i).GetComponent<Part>().m_bEdgePart;
			}
			TakenSeat.Add(iPartGrid);

			///check A* CoreSide
			
			int iStart = iPartGrid;
			int iEnd = GridMgr.getInstance.GetGridIdx (transform.position);
			
			if (AStar.getInstance.AStarStart_CoreFind (iStart, iEnd) && !bEdgePart) { //코어 쪽 붙은애들에만 붙을수있음

				if(!m_StickAvailableSeat.Contains(iPartGrid-1))
					m_StickAvailableSeat.Add(iPartGrid-1);
				if(!m_StickAvailableSeat.Contains(iPartGrid+1))
					m_StickAvailableSeat.Add(iPartGrid+1);
				if(!m_StickAvailableSeat.Contains(iPartGrid-GridMgr.getInstance.m_iXcount))
					m_StickAvailableSeat.Add(iPartGrid-GridMgr.getInstance.m_iXcount);
				if(!m_StickAvailableSeat.Contains(iPartGrid+GridMgr.getInstance.m_iXcount))
					m_StickAvailableSeat.Add(iPartGrid+GridMgr.getInstance.m_iXcount);
			}

			for(int j = 0; j< TakenSeat.Count; ++j)
			{
				m_StickAvailableSeat.Remove(TakenSeat[j]);
			}

			
		}

		if (!bDragPart) {
			Transform StickableDot = GameObject.Find ("StickableDots").transform;

			for (int i = 0; i < StickableDot.childCount; ++i) {
				Destroy (StickableDot.GetChild (i).gameObject);
			}
		} else {
			for(int i = 0; i < m_StickAvailableSeat.Count; ++i)
			{
				ObjectFactory.getInstance.Create_StickableDot(m_StickAvailableSeat[i]);
			}
		}
	}
}
