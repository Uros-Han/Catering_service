using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class GridMgr : Singleton<GridMgr>
{
	[Header("Current Scene Grid Info")]
	public int m_iGridIdx;

	public int m_iXcount; //  Recommand NOT Even!
	public int m_iYcount; //  Recommand NOT Even! && 정사각형이 되도록 X와Y 수가 같을것

	private Vector2 m_fStartPos;

	public float m_fXsize;
	public float m_fYsize;

	[Header("World Grid Info")]
	public int m_iWorldXcount;
	public int m_iWorldYcount;
	private Vector2 m_fWorldStartPos;
	public float m_fXWorldSize;
	public float m_fYWorldSize;

	[Header("Battle Grid Info")]
	public int m_iBattleXcount;
	public int m_iBattleYcount;
	private Vector2 m_fBattleStartPos;
	public float m_fXBattleSize;
	public float m_fYBattleSize;

	void Start()
	{
		m_fBattleStartPos = new Vector2 ( -1 * (m_iBattleXcount * m_fXBattleSize) / 2 , (m_iBattleYcount * m_fYBattleSize) / 2 );
		m_fWorldStartPos = new Vector2 ( -1 * (m_iWorldXcount * m_fXWorldSize) / 2 , (m_iWorldYcount * m_fYWorldSize) / 2 );
	}

	void Update()
	{
		Picking();
	}

	bool m_bWorldGrid = false;

	public void ChgGridInfo()
	{
		if (UnityEngine.SceneManagement.SceneManager.GetActiveScene ().name.Equals ("World")) {
			m_iXcount = m_iWorldXcount;
			m_iYcount = m_iWorldYcount;
			m_fXsize = m_fXWorldSize;
			m_fYsize = m_fYWorldSize;
			m_bWorldGrid = true;
		} else {
			m_iXcount = m_iBattleXcount;
			m_iYcount = m_iBattleYcount;
			m_fXsize = m_fXBattleSize;
			m_fYsize = m_fYBattleSize;
			m_bWorldGrid = false;
		}

		m_fStartPos = new Vector2 ( -1 * (m_iXcount * m_fXsize) / 2 , (m_iYcount * m_fYsize) / 2 );

		if (m_bWorldGrid) {
			if(GameObject.Find ("Grids").transform.childCount.Equals (0))
				LineMaking ();
		}else {
			if (BattleSceneMgr.getInstance.m_transformGridParent == null)
				LineMaking ();
		}
			
	}

	void LineMaking()
	{
		m_fStartPos = new Vector2 ( -1 * (m_iXcount * m_fXsize) / 2 , (m_iYcount * m_fYsize) / 2 );

		GameObject tmpLinePref = Resources.Load ("Prefabs/Objects/Debug/DebugLine") as GameObject;
		Transform gridParent;

		if (!m_bWorldGrid) {
			GameObject grid = new GameObject ();
			grid.name = "Grids";
			gridParent = grid.transform;
			DontDestroyOnLoad (grid);
			BattleSceneMgr.getInstance.m_transformGridParent = gridParent;
		} else
			gridParent = GameObject.Find ("Grids").transform;

		int iTmpCounter = 0;
		for (int i = 0; i < m_iXcount+m_iYcount+2; ++i) {

			if (i == 0 || i == m_iXcount || i == m_iXcount + 1 || i == m_iXcount + m_iYcount + 1) {
				iTmpCounter += 1;
				continue;
			}

			GameObject tmpLine = Instantiate(tmpLinePref) as GameObject;
			tmpLine.transform.parent = gridParent;


			float fStartXPos = ((m_iXcount-1)/2) * -1 * m_fXsize - m_fXsize/2;
			float fStartYPos = ((m_iYcount-1)/2) * m_fYsize + m_fYsize * 3/2;

			if(iTmpCounter <= m_iXcount)
				tmpLine.GetComponent<DebugLine>().Init(new Vector3(fStartXPos + (i* m_fXsize), 0),true,m_fYsize,m_iXcount,m_iYcount);
			else
				tmpLine.GetComponent<DebugLine>().Init(new Vector3(0, fStartYPos - ( (i-m_iXcount) * m_fYsize)),false,m_fXsize,m_iXcount,m_iYcount);

			iTmpCounter += 1;
		}

		if(!m_bWorldGrid)
			BattleSceneMgr.getInstance.m_transformGridParent.gameObject.SetActive(false);


//		GameObject.Find ("GridLimit").GetComponent<BoxCollider2D> ().size = new Vector2 (m_fXsize * m_iXcount, m_fYsize * m_iYcount);
	}

	void Picking()
	{
		if (Camera.main == null)
			return;
		
		Vector2 vPosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);

		//범위 밖 좌표는 -1 리턴
		if (vPosition.x - m_fStartPos.x > m_iXcount * m_fXsize || vPosition.x - m_fStartPos.x < 0 || vPosition.y - m_fStartPos.y < m_iYcount * m_fYsize * -1 || vPosition.y - m_fStartPos.y > 0) {
			m_iGridIdx = -1;
			return;
		}

		m_iGridIdx = (int)(System.Math.Round((vPosition.y - m_fStartPos.y + (m_fYsize / 2)) / m_fYsize) * m_iXcount * -1) + (int)(System.Math.Round((vPosition.x - m_fStartPos.x - (m_fXsize / 2)) / m_fXsize));

	}

	public int GetGridIdx(Vector2 vPosition, GRID_STATE gridState = GRID_STATE.END)
	{
		int tmpidx;

		if (gridState == GRID_STATE.END) {
			tmpidx = (int)(System.Math.Round ((vPosition.y - m_fStartPos.y + (m_fYsize / 2)) / m_fYsize) * m_iXcount * -1) + (int)(System.Math.Round ((vPosition.x - m_fStartPos.x - (m_fXsize / 2)) / m_fXsize));
		}else if(gridState == GRID_STATE.BATTLE)
			tmpidx = (int)(System.Math.Round((vPosition.y-m_fBattleStartPos.y + (m_fYBattleSize/2)) / m_fYBattleSize) * m_iBattleXcount * -1)+ (int)(System.Math.Round((vPosition.x - m_fBattleStartPos.x- (m_fXBattleSize/2)) / m_fXBattleSize));
		else
			tmpidx = (int)(System.Math.Round((vPosition.y-m_fWorldStartPos.y + (m_fYWorldSize/2)) / m_fYWorldSize) * m_iWorldXcount * -1)+ (int)(System.Math.Round((vPosition.x - m_fWorldStartPos.x- (m_fXWorldSize/2)) / m_fXWorldSize));

		return tmpidx;
	}

	public Vector3 GetPosOfIdx(int m_iIdx = -1, GRID_STATE gridState = GRID_STATE.END)
	{
		if (gridState == GRID_STATE.END) {
			if (m_iIdx == -1) // This Grid
			return new Vector3 (((float)(m_iGridIdx % m_iXcount) * m_fXsize) + (m_fXsize / 2) + m_fStartPos.x, (float)(m_iGridIdx / m_iXcount) * -1 * m_fXsize - (m_fYsize / 2) + m_fStartPos.y);
			else // Know to Want Grid
			return new Vector3 (((float)(m_iIdx % m_iXcount) * m_fXsize) + (m_fXsize / 2) + m_fStartPos.x, (float)(m_iIdx / m_iXcount) * -1 * m_fXsize - (m_fYsize / 2) + m_fStartPos.y);
		} else if (gridState == GRID_STATE.BATTLE) {
			if(m_iIdx == -1) // This Grid
				return new Vector3(((float)(m_iGridIdx % m_iBattleXcount) * m_fXBattleSize) + (m_fXBattleSize/2) + m_fBattleStartPos.x, (float)(m_iGridIdx / m_iBattleXcount) * -1 * m_fXBattleSize - (m_fYBattleSize/2) + m_fBattleStartPos.y);
			else // Know to Want Grid
				return new Vector3(((float)(m_iIdx % m_iBattleXcount) * m_fXBattleSize) + (m_fXBattleSize/2) + m_fBattleStartPos.x, (float)(m_iIdx / m_iBattleXcount) * -1 * m_fXBattleSize - (m_fYBattleSize/2) + m_fBattleStartPos.y);
		} else {
			if(m_iIdx == -1) // This Grid
				return new Vector3(((float)(m_iGridIdx % m_iWorldXcount) * m_fXWorldSize) + (m_fXWorldSize/2) + m_fWorldStartPos.x, (float)(m_iGridIdx / m_iWorldXcount) * -1 * m_fXWorldSize - (m_fYWorldSize/2) + m_fWorldStartPos.y);
			else // Know to Want Grid
				return new Vector3(((float)(m_iIdx % m_iWorldXcount) * m_fXWorldSize) + (m_fXWorldSize/2) + m_fWorldStartPos.x, (float)(m_iIdx / m_iWorldXcount) * -1 * m_fXWorldSize - (m_fYWorldSize/2) + m_fWorldStartPos.y);
		}
		return Vector3.zero;
	}

	public int GetWidthOrHeightOfMonster() //return bigger int of Width or Height
	{

		int iLeftestIdx = m_iXcount - 1;
		int iRightestIdx = 0;

		int iBottomIdx = 0;
		int iTopIdx = m_iYcount - 1;

		Transform player = GameObject.Find ("Player").transform;

		for (int i = 0; i < player.childCount; ++i) {
			int idx = GetGridIdx(player.GetChild(i).position);

			if(idx % m_iXcount < iLeftestIdx)
				iLeftestIdx = idx % m_iXcount;

			if(idx % m_iXcount > iRightestIdx)
				iRightestIdx = idx % m_iXcount;

			if (idx / m_iYcount < iTopIdx)
				iTopIdx = idx / m_iYcount;
			
			if (idx / m_iYcount > iBottomIdx)
				iBottomIdx = idx / m_iYcount;
		}

		int iWidth = iRightestIdx - iLeftestIdx + 1;
		int iHeight = iBottomIdx - iTopIdx + 1;

		if (iWidth > iHeight)
			return iWidth;
		else
			return iHeight;
	}

	public List<GameObject> listObjectsOfIdxs(List<int> listIdx)
	{
		Transform PlayerTrans = GameObject.Find ("Player").transform;
		List<GameObject> listObj = new List<GameObject> ();

		for (int i = 0; i < PlayerTrans.childCount; ++i) {
			for (int j = 0; j < listIdx.Count; ++j) {
				if (PlayerTrans.GetChild (i).GetComponent<Part> ().m_iGridIdx.Equals (listIdx [j])) {
					listObj.Add (PlayerTrans.GetChild (i).gameObject);
				}
			}
		}

		return listObj;
	}
		
	public List<GameObject> FindObjAsList(List<int> iIdx, Transform parent)
	{
		List<GameObject> ObjList = new List<GameObject> ();

		for (int i = 0; i < parent.childCount; ++i) {
			int iFountIdx = -1;

			for(int j = 0; j < iIdx.Count; ++j)
			{
				if (iIdx [j].Equals (GetGridIdx (parent.GetChild (i).position))) {
					iFountIdx = j;
					ObjList.Add (parent.GetChild (i).gameObject);
				}
			}

			if(iFountIdx != -1)
				iIdx.RemoveAt (iFountIdx);

			if (iIdx.Count.Equals (0))
				break;
		}

		return ObjList;
	}

	public GameObject FindObj(int iIdx, Transform parent, GRID_STATE gridState = GRID_STATE.END)
	{
		GameObject Obj = null;
		if (gridState == GRID_STATE.END) {
			for (int i = 0; i < parent.childCount; ++i) {
				if (iIdx.Equals (GetGridIdx (parent.GetChild (i).position))) {
					Obj = parent.GetChild (i).gameObject;
					break;
				}
			}
		} else if (gridState == GRID_STATE.BATTLE) {
			for (int i = 0; i < parent.childCount; ++i) {
				if (iIdx.Equals (GetGridIdx (parent.GetChild (i).position, GRID_STATE.BATTLE))) {
					Obj = parent.GetChild (i).gameObject;
					break;
				}
			}
		} else {
			for (int i = 0; i < parent.childCount; ++i) {
				if (iIdx.Equals (GetGridIdx (parent.GetChild (i).position, GRID_STATE.WORLD))) {
					Obj = parent.GetChild (i).gameObject;
					break;
				}
			}
		}

		return Obj;
	}
}