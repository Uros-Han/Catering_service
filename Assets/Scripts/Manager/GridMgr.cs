using UnityEngine;
using System.Collections;

public class GridMgr : MonoBehaviour
{

	private static GridMgr instance;

	public static GridMgr getInstance
	{
		get
		{
			if (instance == null)
			{
				instance = FindObjectOfType(typeof(GridMgr)) as GridMgr;
			}

			if (instance == null)
			{
				GameObject obj = new GameObject("GridMgr");
				instance = obj.AddComponent(typeof(GridMgr)) as GridMgr;
			}

			return instance;
		}
	}

	public int m_iGridIdx;

	public int m_iXcount; //  Recommand NOT Even!
	public int m_iYcount; //  Recommand NOT Even!

	public Vector2 m_fStartPos;

	public float m_fXsize;
	public float m_fYsize;

	void Start()
	{
		LineMaking ();
	}

	void Update()
	{
		Picking();
	}

	void LineMaking()
	{
		m_fStartPos = new Vector2 ( -1 * (m_iXcount * m_fXsize) / 2 , (m_iYcount * m_fYsize) / 2 );

		int iTmpCounter = 0;
		for (int i = 0; i < m_iXcount+m_iYcount+2; ++i) {

			if (i == 0 || i == m_iXcount || i == m_iXcount + 1 || i == m_iXcount + m_iYcount + 1) {
				iTmpCounter += 1;
				continue;
			}

			GameObject tmpLinePref = Resources.Load ("Prefabs/Objects/Debug/DebugLine") as GameObject;
			GameObject tmpLine = Instantiate(tmpLinePref) as GameObject;
			tmpLine.transform.parent = GameObject.Find ("Grids").transform;


			float fStartXPos = ((m_iXcount-1)/2) * -1 * m_fXsize - m_fXsize/2;
			float fStartYPos = ((m_iYcount-1)/2) * m_fYsize + m_fYsize * 3/2;

			if(iTmpCounter <= m_iXcount)
				tmpLine.GetComponent<DebugLine>().Init(new Vector3(fStartXPos + (i* m_fXsize), 0),true,m_fXsize,m_iXcount,m_iYcount);
			else
				tmpLine.GetComponent<DebugLine>().Init(new Vector3(0, fStartYPos - ( (i-m_iXcount) * m_fYsize)),false,m_fXsize,m_iXcount,m_iYcount);

//			//바닥라인 (플로어생기는 칸) 초록색으로
//			if(i == m_iXcount+m_iYcount+1 || i == m_iXcount+m_iYcount)
//				tmpLine.GetComponent<SpriteRenderer>().color = Color.green;
//
//			switch(i)
//			{
//			case 25:
//				tmpLine.GetComponent<SpriteRenderer>().color = Color.red;
//				break;
//			case 50:
//				tmpLine.GetComponent<SpriteRenderer>().color = Color.yellow;
//				break;
//			case 75:
//				tmpLine.GetComponent<SpriteRenderer>().color = Color.blue;
//				break;
//			case 100:
//				tmpLine.GetComponent<SpriteRenderer>().color = Color.yellow;
//				break;
//			case 125:
//				tmpLine.GetComponent<SpriteRenderer>().color = Color.red;
//				break;
//			}

			iTmpCounter += 1;
		}

//		GameObject.Find ("GridLimit").GetComponent<BoxCollider2D> ().size = new Vector2 (m_fXsize * m_iXcount, m_fYsize * m_iYcount);
	}

	void Picking()
	{

		Vector2 vPosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);

		//범위 밖 좌표는 -1 리턴
		if (vPosition.x - m_fStartPos.x > m_iXcount * m_fXsize || vPosition.x - m_fStartPos.x < 0 || vPosition.y - m_fStartPos.y < m_iYcount * m_fYsize * -1 || vPosition.y - m_fStartPos.y > 0) {
			m_iGridIdx = -1;
			return;
		}

		m_iGridIdx = (int)(System.Math.Round((vPosition.y - m_fStartPos.y + (m_fYsize / 2)) / m_fYsize) * m_iXcount * -1) + (int)(System.Math.Round((vPosition.x - m_fStartPos.x - (m_fXsize / 2)) / m_fXsize));

	}

	public int GetGridIdx(Vector2 vPosition)
	{
		m_fStartPos = new Vector2 ( -1 * (m_iXcount * m_fXsize) / 2 , (m_iYcount * m_fYsize) / 2 );

		int tmpidx = (int)(System.Math.Round((vPosition.y-m_fStartPos.y + (m_fYsize/2)) / m_fYsize) * m_iXcount * -1)+ (int)(System.Math.Round((vPosition.x - m_fStartPos.x- (m_fXsize/2)) / m_fXsize));
		return tmpidx;
	}

	public Vector3 GetPosOfIdx(int m_iIdx = -1)
	{
		if(m_iIdx == -1) // This Grid
			return new Vector3(((float)(m_iGridIdx % m_iXcount) * m_fXsize) + (m_fXsize/2) + m_fStartPos.x, (float)(m_iGridIdx / m_iXcount) * -1 * m_fXsize - (m_fYsize/2) + m_fStartPos.y);
		else // Know to Want Grid
			return new Vector3(((float)(m_iIdx % m_iXcount) * m_fXsize) + (m_fXsize/2) + m_fStartPos.x, (float)(m_iIdx / m_iXcount) * -1 * m_fXsize - (m_fYsize/2) + m_fStartPos.y);

		return Vector3.zero;
	}

}