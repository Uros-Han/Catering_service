using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Morgue : Singleton<Morgue> {

	public bool[] m_bBodyArr; //자리 차지한 시체들 false == empty
//	public int[] m_iMorgueIdxArr;
	public float m_fBodyMoveTime;
	int m_iIdxCount = 24;
	public Part m_SelectedPart;

	void Start()
	{
		m_bBodyArr = new bool[m_iIdxCount];
//		m_iMorgueIdxArr = new int[]{ 145, 146, 147, 148, 149, 150, 151, 156, 157, 158, 159, 160, 161, 162};
		m_fBodyMoveTime = 0.25f;
	}

	public void AddBody(bool bWithDrag, GameObject movePart, int iGridIdx = -1)
	{
		if (!bWithDrag) {
			int iEmptyIdx = EmptyMorgueIdxCheck();

			if(iEmptyIdx != -1) // have space
			{
				movePart.GetComponent<SpriteRenderer>().sortingLayerName = "DeadBodies";
				movePart.transform.position = GetIdxPos(iEmptyIdx);
				movePart.transform.localRotation = Quaternion.AngleAxis(0, Vector3.forward);
				m_bBodyArr[iEmptyIdx] = true;
				movePart.GetComponent<SpriteRenderer>().color = Color.white;
//				moveBody.GetComponent<SpriteSheet>().SetSprite(0);
			}

		} else {
			int iIdx = GetIdxFromPos(Camera.main.ScreenToWorldPoint(Input.mousePosition));

			movePart.GetComponent<SpriteRenderer>().sortingLayerName = "DeadBodies";
			m_bBodyArr[iIdx] = true;
		}

		StartCoroutine (ChangeParentToMorgue(movePart));
	}

	public void SelectPart(Part part)
	{
		m_SelectedPart = part;
		Transform morguePanel = GameObject.Find ("MorguePanel").transform;

		morguePanel.Find ("PartName").GetComponent<UILabel> ().text = part.m_strNameKey;  //TODO : Localize
	}

	public void DeselectPart()
	{
		m_SelectedPart = null;
		Transform morguePanel = GameObject.Find ("MorguePanel").transform;
		
		morguePanel.Find ("PartName").GetComponent<UILabel> ().text = "";
	}

	IEnumerator ChangeParentToMorgue(GameObject movePart)
	{
		yield return null;

		movePart.transform.parent = transform;
		movePart.transform.localScale = new Vector3(0.8f, 0.8f, 1f);
	}

	public void RemoveBody(Vector3 vPos)
	{
		int iIdx = GetIdxFromPos (vPos);

		m_bBodyArr [iIdx] = false;
	}

	int EmptyMorgueIdxCheck() // check empty idx in morgue
	{
		for(int i = 0; i < m_bBodyArr.Length; ++i)
		{
			if(!m_bBodyArr[i])
			{
				return i;
			}
		}

		return -1;
	}
//
//	int GridIdxToMorgueIdx(int iGridIdx)
//	{
//		if (iGridIdx < 156) {
//			return iGridIdx - 145;
//		} else {
//			return iGridIdx - 156 + 7;
//		}
//	}

	public Vector3 GetIdxPos(int iIdx)
	{
		return new Vector3 (transform.position.x - 0.4f + ((iIdx%6) * 0.16f), transform.position.y + 0.48f - ((iIdx/6) * 0.16f));
	}

	public int GetIdxFromPos(Vector3 vPosition)
	{
		vPosition -= transform.position;
		Vector2 m_fStartPos = new Vector2 ( -0.48f, 0.56f );
		float m_fYsize = 0.16f;
		float m_fXsize = 0.16f;
		int m_iXcount = 6;
		int m_iYcount = 4;

		int tmpidx = (int)(System.Math.Round((vPosition.y-m_fStartPos.y + (m_fYsize/2)) / m_fYsize) * m_iXcount * -1)+ (int)(System.Math.Round((vPosition.x - m_fStartPos.x- (m_fXsize/2)) / m_fXsize));

		if (tmpidx < 0 || tmpidx >= m_iIdxCount)
			tmpidx = -1;

		return tmpidx;
	}
}
