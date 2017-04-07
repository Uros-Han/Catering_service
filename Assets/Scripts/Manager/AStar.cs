using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public enum DIR {SEQU, DAEGAK};

public class AStar : Singleton<AStar>
{

	private int m_iStartIndex = 0;
	private int m_iEndIndex = 0;
//	private List<GameObject> m_ListTile;

	private List<Node> m_OpenList;
	private List<Node> m_CloseList;
	public List<int> m_BestList;

	private int m_iTileCountX;
	private int m_iTileCountY;

//	float fClosestNodeInDest_GCost;
//	int iClosestNodeInDest_Idx;

//	float fStartGCost;

	public int Compare(Node pDest, Node pSour)
	{
		return pDest.fFCost.CompareTo(pSour.fFCost);

	}


	public List<int> GetBestList()
	{
		return m_BestList;
	}





	public void AStarStart(int iStart, int iEnd)
	{

//		List<GameObject> ListTile = GameObject.Find("DebugTile").GetComponent<Background>().m_ListTile;
//
//		if (ListTile[iEnd].GetComponent<Tile>().m_iOption == (int)TILE_OPTION.IN_STRUCT || ListTile[iEnd].GetComponent<Tile>().m_iOption == (int)TILE_OPTION.BUILD)
//		{
//			float fAngle = Calculate.GetAngle(ListTile[iStart].transform.position, ListTile[iEnd].transform.position);
//
//			// Debug.Log(fAngle);
//
//			iEnd = Calculate.CalculateTileAngle(iEnd, fAngle, ListTile);
//			//m_BestList.Clear();
//			//m_BestList = null;
//			//return;
//		}

//		if (iStart == iEnd)
//		{
//			if (m_BestList == null)
//				m_BestList = new List<int>();
//
//			m_BestList.Clear();
//			m_BestList.Add(iEnd);
//			return;
//		}

//		if (ListTile[iEnd].GetComponent<Tile>().m_iOption == (int)TILE_OPTION.BLOCK)
//		{
//			float fAngle = Calculate.GetAngle(ListTile[iStart].transform.position, ListTile[iEnd].transform.position);
//			iEnd = Calculate.CalculateTileAngle(iEnd, fAngle, ListTile);
//		}

		if (iStart == iEnd)
		{
			if (m_BestList == null)
				m_BestList = new List<int>();

			m_BestList.Clear();
			m_BestList.Add(iEnd);
			return;
		}


		if (m_OpenList == null)
			m_OpenList = new List<Node>();
		if (m_CloseList == null)
			m_CloseList = new List<Node>();
		if (m_BestList == null)
			m_BestList = new List<int>();


		ClearNode();

		m_iStartIndex = iStart;
		m_iEndIndex = iEnd;
//		m_ListTile = ListTile;

		m_iTileCountX = GridMgr.getInstance.m_iXcount;
		m_iTileCountY = GridMgr.getInstance.m_iYcount;

		MakeBestList();

		if (m_BestList.Count == 0) // 길막힘
		{
			//ResourceMgr.GetInstance().CreateSystemMsg(xmlLoader.GetInstance().TextLoad(XML_INDEX.SYSTEM_MSG, "CantReach"));
			//m_BestList.Clear();
			//m_BestList = null;

			//float fClosestNodeInDest_GCost = m_CloseList[1].fGCost;
			//int iClosestNodeInDest_Idx = 1;

			//for (int i = iClosestNodeInDest_Idx; i < m_CloseList.Count; ++i)
			//{
			//    if (fClosestNodeInDest_GCost > m_CloseList[i].fGCost)
			//    {
			//        fClosestNodeInDest_GCost = m_CloseList[i].fGCost;
			//        iClosestNodeInDest_Idx = i;
			//    }
			//}

//			m_iEndIndex = iClosestNodeInDest_Idx;

			if (m_iEndIndex == m_iStartIndex)
			{
				if (m_BestList == null)
					m_BestList = new List<int>();

				m_BestList.Clear();
				m_BestList.Add(m_iEndIndex);
				return;
			}

			ClearNode();

			MakeBestList();
		}
	}


	void ClearNode()
	{
		m_OpenList.Clear();
		m_CloseList.Clear();
		m_BestList.Clear();
	}

	bool CheckList(int iIndex)
	{
		for (int i = 0; i < m_OpenList.Count; ++i)
		{
			if (m_OpenList[i].iIndex == iIndex)
				return false;
		}

		for (int i = 0; i < m_CloseList.Count; ++i)
		{
			if (m_CloseList[i].iIndex == iIndex)
				return false;
		}
		return true;
	}

	void MakeBestList()
	{

		Node ParentNode = null;

		ParentNode = MakeParent();

//		fStartGCost = ParentNode.fGCost + 0.3f;

		Node objNode = null;

//		fClosestNodeInDest_GCost = ParentNode.fGCost;
//		iClosestNodeInDest_Idx = m_iStartIndex;

		while (true)
		{

			// 위
			if (ParentNode.iIndex >= m_iTileCountX
//				&& m_ListTile[ParentNode.iIndex - m_iTileCountX].GetComponent<Tile>().m_iOption != (int)TILE_OPTION.BLOCK
//				&& m_ListTile[ParentNode.iIndex - m_iTileCountX].GetComponent<Tile>().m_iOption != (int)TILE_OPTION.BUILD
				&& CheckList(ParentNode.iIndex - m_iTileCountX))
			{
				objNode = CreateNode(ParentNode, ParentNode.iIndex - m_iTileCountX, (int)DIR.SEQU);
//				if (objNode.fGCost < fStartGCost)
					m_OpenList.Add(objNode);

			}
//			// 오위
//			if (ParentNode.iIndex >= m_iTileCountX
//				&& (ParentNode.iIndex + 1) % m_iTileCountX != 0
//				&& m_ListTile[ParentNode.iIndex - m_iTileCountX + 1].GetComponent<Tile>().m_iOption != (int)TILE_OPTION.BLOCK
//				&& m_ListTile[ParentNode.iIndex - m_iTileCountX + 1].GetComponent<Tile>().m_iOption != (int)TILE_OPTION.BUILD
//				&& CheckList(ParentNode.iIndex - m_iTileCountX + 1))
//			{
//				objNode = CreateNode(ParentNode, ParentNode.iIndex - m_iTileCountX + 1, (int)DIR.DAEGAK);
//				if (objNode.fGCost < fStartGCost)
//					m_OpenList.Add(objNode);
//
//			}

			// 오
			if ((ParentNode.iIndex + 1) % m_iTileCountX != 0
//				&& m_ListTile[ParentNode.iIndex + 1].GetComponent<Tile>().m_iOption != (int)TILE_OPTION.BLOCK
//				&& m_ListTile[ParentNode.iIndex + 1].GetComponent<Tile>().m_iOption != (int)TILE_OPTION.BUILD
				&& CheckList(ParentNode.iIndex + 1))
			{
				objNode = CreateNode(ParentNode, ParentNode.iIndex + 1, (int)DIR.SEQU);
//				if (objNode.fGCost < fStartGCost)
					m_OpenList.Add(objNode);

			}

//			// 오아
//			if (ParentNode.iIndex < m_iTileCountX * m_iTileCountY - m_iTileCountX
//				&& (ParentNode.iIndex + 1) % m_iTileCountX != 0
//				&& m_ListTile[ParentNode.iIndex + 1 + m_iTileCountX].GetComponent<Tile>().m_iOption != (int)TILE_OPTION.BLOCK
//				&& m_ListTile[ParentNode.iIndex + 1 + m_iTileCountX].GetComponent<Tile>().m_iOption != (int)TILE_OPTION.BUILD
//				&& CheckList(ParentNode.iIndex + 1 + m_iTileCountX))
//			{
//				objNode = CreateNode(ParentNode, ParentNode.iIndex + m_iTileCountX + 1, (int)DIR.DAEGAK);
//				if (objNode.fGCost < fStartGCost)
//					m_OpenList.Add(objNode);
//
//			}

			// 아
			if (ParentNode.iIndex < m_iTileCountX * m_iTileCountY - m_iTileCountX
//				&& m_ListTile[ParentNode.iIndex + m_iTileCountX].GetComponent<Tile>().m_iOption != (int)TILE_OPTION.BLOCK
//				&& m_ListTile[ParentNode.iIndex + m_iTileCountX].GetComponent<Tile>().m_iOption != (int)TILE_OPTION.BUILD
				&& CheckList(ParentNode.iIndex + m_iTileCountX))
			{
				objNode = CreateNode(ParentNode, ParentNode.iIndex + m_iTileCountX, (int)DIR.SEQU);
//				if (objNode.fGCost < fStartGCost)
					m_OpenList.Add(objNode);

			}

//			// 왼아
//			if (ParentNode.iIndex % m_iTileCountX != 0
//				&& ParentNode.iIndex < m_iTileCountX * m_iTileCountY - m_iTileCountX
//				&& m_ListTile[ParentNode.iIndex + m_iTileCountX - 1].GetComponent<Tile>().m_iOption != (int)TILE_OPTION.BLOCK
//				&& m_ListTile[ParentNode.iIndex + m_iTileCountX - 1].GetComponent<Tile>().m_iOption != (int)TILE_OPTION.BUILD
//				&& CheckList(ParentNode.iIndex + m_iTileCountX - 1))
//			{
//				objNode = CreateNode(ParentNode, ParentNode.iIndex + m_iTileCountX - 1, (int)DIR.DAEGAK);
//				if (objNode.fGCost < fStartGCost)
//					m_OpenList.Add(objNode);
//
//			}

			// 왼
			if (ParentNode.iIndex % m_iTileCountX != 0
//				&& m_ListTile[ParentNode.iIndex - 1].GetComponent<Tile>().m_iOption != (int)TILE_OPTION.BLOCK
//				&& m_ListTile[ParentNode.iIndex - 1].GetComponent<Tile>().m_iOption != (int)TILE_OPTION.BUILD
				&& CheckList(ParentNode.iIndex - 1))
			{
				objNode = CreateNode(ParentNode, ParentNode.iIndex - 1, (int)DIR.SEQU);
//				if (objNode.fGCost < fStartGCost)
					m_OpenList.Add(objNode);

			}

//			// 왼위
//			if (ParentNode.iIndex >= m_iTileCountX
//				&& ParentNode.iIndex % m_iTileCountX != 0
//				&& m_ListTile[ParentNode.iIndex - 1 - m_iTileCountX].GetComponent<Tile>().m_iOption != (int)TILE_OPTION.BLOCK
//				&& m_ListTile[ParentNode.iIndex - 1 - m_iTileCountX].GetComponent<Tile>().m_iOption != (int)TILE_OPTION.BUILD
//				&& CheckList(ParentNode.iIndex - 1 - m_iTileCountX))
//			{
//				objNode = CreateNode(ParentNode, ParentNode.iIndex - m_iTileCountX - 1, (int)DIR.DAEGAK);
//				if (objNode.fGCost < fStartGCost)
//					m_OpenList.Add(objNode);
//
//			}

			if (m_OpenList.Count == 0)
				break;

			m_OpenList.Sort(Compare);

			ParentNode = m_OpenList[0];

			m_CloseList.Add(ParentNode);

//			if (fClosestNodeInDest_GCost == m_CloseList[m_CloseList.Count - 1].fGCost)
//			{
//				if (GetDisCost(m_CloseList[m_CloseList.Count - 1].iIndex, m_iStartIndex) < GetDisCost(iClosestNodeInDest_Idx, m_iStartIndex))
//				{
//					fClosestNodeInDest_GCost = m_CloseList[m_CloseList.Count - 1].fGCost;
//					iClosestNodeInDest_Idx = m_CloseList[m_CloseList.Count - 1].iIndex;
//				}
//			}else if (fClosestNodeInDest_GCost > m_CloseList[m_CloseList.Count - 1].fGCost)
//			{
//				fClosestNodeInDest_GCost = m_CloseList[m_CloseList.Count - 1].fGCost;
//				iClosestNodeInDest_Idx = m_CloseList[m_CloseList.Count - 1].iIndex;
//			}

			m_OpenList.Remove(m_OpenList[0]);


			if (ParentNode.iIndex == m_iEndIndex)
			{
				while (true)
				{
					if (ParentNode.ParentNode == null)
						break;
					m_BestList.Insert(0, ParentNode.iIndex);
					ParentNode = ParentNode.ParentNode;
				}
				break;
			}
		}
	}

	Node CreateNode(Node pParent, int iIndex, int iDir)
	{
		Node pNode = new Node();
		pNode.ParentNode = pParent;
		pNode.iIndex = iIndex;

		float fCost = 0.0f;

		if (iDir % 2 == 0)
			fCost = 0.1f;
		else
			fCost = 0.14f;

		pNode.fGCost = fCost;
		pNode.fHCost = GetDisCost(m_iEndIndex, iIndex);
		pNode.fFCost = pNode.fGCost + pNode.fHCost;

		return pNode;
	}

	float GetDisCost(int iDestIndex, int iIndex)
	{
		float fWidth = GridMgr.getInstance.GetPosOfIdx(iIndex).x - GridMgr.getInstance.GetPosOfIdx(iDestIndex).x;
		float fHeight = GridMgr.getInstance.GetPosOfIdx(iIndex).y - GridMgr.getInstance.GetPosOfIdx(iDestIndex).y;
		float fDistance = Mathf.Sqrt(fWidth * fWidth + fHeight * fHeight);
		return fDistance;
	}


	Node MakeParent()
	{
		Node objNode = new Node();

		objNode.iIndex = m_iStartIndex;
		objNode.ParentNode = null;
		objNode.fGCost = 0;
		objNode.fHCost = GetDisCost(m_iEndIndex, m_iStartIndex);
		objNode.fFCost = objNode.fGCost + objNode.fHCost;


		m_CloseList.Add(objNode);

		return objNode;
	}

	public class Node
	{
		public float fGCost;
		public float fHCost;
		public float fFCost;
		public Node ParentNode;
		public int iIndex;
	}

	//////////////////////////////// 여기부턴 Core 위치 찾기위해 만든 A*
	public List<Part> m_listPart;
	void InitPartList()
	{
		if(m_listPart == null)
			m_listPart = new List<Part> ();

		m_listPart.Clear ();

		Transform CoreTrans = GameObject.Find ("Core").transform;
		GridMgr grid = GridMgr.getInstance;


		for (int i = 0; i < CoreTrans.childCount + 1; ++i) {
			if(i == CoreTrans.childCount)
			{
				m_listPart.Add(CoreTrans.GetComponent<Part>());
			}else{
				m_listPart.Add(CoreTrans.GetChild(i).GetComponent<Part>());
			}
		}
	}

	bool IdxIsEmpty(int iIdx)
	{
		for (int i = 0; i < m_listPart.Count; ++i) {
			if(!m_listPart[i].m_bEdgePart && m_listPart[i].m_iGridIdx == iIdx)
			{
				return false;
			}
		}

		return true;
	}

	bool EdgeDirCheck(int iIdx, DIRECTION dir)
	{
		for (int i = 0; i < m_listPart.Count; ++i) {
			if(m_listPart[i].m_iGridIdx == iIdx)
			{
				if(m_listPart[i].m_bEdgePart)
				{
					if( 3 - (int)m_listPart[i].m_headingDirection == (int)dir )
					{
						return true;
					}else
						return false;
				}
			}
		}

		return true;
	}

	void MakeBestList_FindCore()
	{
		
		Node ParentNode = null;
		
		ParentNode = MakeParent();
		
//		fStartGCost = ParentNode.fGCost + 0.3f;
		
		Node objNode = null;
		
//		fClosestNodeInDest_GCost = ParentNode.fGCost;
//		iClosestNodeInDest_Idx = m_iStartIndex;
		InitPartList ();

		while (true)
		{
			
			// 위
			if (ParentNode.iIndex >= m_iTileCountX
			    && !IdxIsEmpty(ParentNode.iIndex - m_iTileCountX)
			    && EdgeDirCheck(ParentNode.iIndex, DIRECTION.UP)
			    && CheckList(ParentNode.iIndex - m_iTileCountX))
			{
				objNode = CreateNode(ParentNode, ParentNode.iIndex - m_iTileCountX, (int)DIR.SEQU);
//				if (objNode.fGCost < fStartGCost)
					m_OpenList.Add(objNode);
				
			}
			
			// 오
			if ((ParentNode.iIndex + 1) % m_iTileCountX != 0
			    && !IdxIsEmpty(ParentNode.iIndex + 1)
			    && EdgeDirCheck(ParentNode.iIndex, DIRECTION.RIGHT)
			    && CheckList(ParentNode.iIndex + 1))
			{
				objNode = CreateNode(ParentNode, ParentNode.iIndex + 1, (int)DIR.SEQU);
//				if (objNode.fGCost < fStartGCost)
					m_OpenList.Add(objNode);
				
			}
			
			// 아
			if (ParentNode.iIndex < m_iTileCountX * m_iTileCountY - m_iTileCountX
			    && !IdxIsEmpty(ParentNode.iIndex + m_iTileCountX)
			    && EdgeDirCheck(ParentNode.iIndex, DIRECTION.DOWN)
			    && CheckList(ParentNode.iIndex + m_iTileCountX))
			{
				objNode = CreateNode(ParentNode, ParentNode.iIndex + m_iTileCountX, (int)DIR.SEQU);
//				if (objNode.fGCost < fStartGCost)
					m_OpenList.Add(objNode);
				
			}
			
			// 왼
			if (ParentNode.iIndex % m_iTileCountX != 0
			    && !IdxIsEmpty(ParentNode.iIndex - 1)
			    && EdgeDirCheck(ParentNode.iIndex, DIRECTION.LEFT)
			    && CheckList(ParentNode.iIndex - 1))
			{
				objNode = CreateNode(ParentNode, ParentNode.iIndex - 1, (int)DIR.SEQU);
//				if (objNode.fGCost < fStartGCost)
					m_OpenList.Add(objNode);
				
			}
			
			if (m_OpenList.Count == 0)
				break;
			
			m_OpenList.Sort(Compare);
			
			ParentNode = m_OpenList[0];
			
			m_CloseList.Add(ParentNode);
			
//			if (fClosestNodeInDest_GCost == m_CloseList[m_CloseList.Count - 1].fGCost)
//			{
//				if (GetDisCost(m_CloseList[m_CloseList.Count - 1].iIndex, m_iStartIndex) < GetDisCost(iClosestNodeInDest_Idx, m_iStartIndex))
//				{
//					fClosestNodeInDest_GCost = m_CloseList[m_CloseList.Count - 1].fGCost;
//					iClosestNodeInDest_Idx = m_CloseList[m_CloseList.Count - 1].iIndex;
//				}
//			}else if (fClosestNodeInDest_GCost > m_CloseList[m_CloseList.Count - 1].fGCost)
//			{
//				fClosestNodeInDest_GCost = m_CloseList[m_CloseList.Count - 1].fGCost;
//				iClosestNodeInDest_Idx = m_CloseList[m_CloseList.Count - 1].iIndex;
//			}
			
			m_OpenList.Remove(m_OpenList[0]);
			
			
			if (ParentNode.iIndex == m_iEndIndex)
			{
				while (true)
				{
					if (ParentNode.ParentNode == null)
						break;
					m_BestList.Insert(0, ParentNode.iIndex);
					ParentNode = ParentNode.ParentNode;
				}
				break;
			}
		}
	}

	public bool AStarStart_CoreFind(int iStart, int iEnd)
	{
		
		if (iStart == iEnd)
		{
			if (m_BestList == null)
				m_BestList = new List<int>();
			
			m_BestList.Clear();
			m_BestList.Add(iEnd);
			return true;
		}
		
		
		if (m_OpenList == null)
			m_OpenList = new List<Node>();
		if (m_CloseList == null)
			m_CloseList = new List<Node>();
		if (m_BestList == null)
			m_BestList = new List<int>();
		
		ClearNode();
		
		m_iStartIndex = iStart;
		m_iEndIndex = iEnd;
		
		m_iTileCountX = GridMgr.getInstance.m_iXcount;
		m_iTileCountY = GridMgr.getInstance.m_iYcount;
		
		MakeBestList_FindCore();
		
		if (m_BestList.Count == 0) // 길막힘
		{
			return false;
		}

		return true;
	}
}