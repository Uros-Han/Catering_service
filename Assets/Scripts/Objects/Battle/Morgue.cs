using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Morgue : MonoBehaviour {

	public bool[] m_bBodyArr; //자리 차지한 시체들 false == empty
//	public int[] m_iMorgueIdxArr;
	public float m_fBodyMoveTime;
	int m_iIdxCount = 18;

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
//				Debug.Log (movePart.name);
				movePart.layer = 5;
				movePart.transform.position = GameObject.Find ("Core").transform.position;
				iTween.MoveTo (movePart, iTween.Hash("x", GetIdxPos(iEmptyIdx).x, "y", GetIdxPos(iEmptyIdx).y, "easetype", "easeInCubic", "time", 0.5f));

				movePart.GetComponent<SpriteRenderer>().sortingLayerName = "DeadBodies";
//				movePart.transform.position = GetIdxPos(iEmptyIdx);
				movePart.transform.localRotation = Quaternion.AngleAxis(0, Vector3.forward);
				m_bBodyArr[iEmptyIdx] = true;
				//movePart.GetComponent<SpriteRenderer>().color = Color.white;
                movePart.GetComponent<SpriteRenderer>().sortingOrder = 0;
//				moveBody.GetComponent<SpriteSheet>().SetSprite(0);
			}

		} else {
			int iIdx = GetIdxFromPos(UICamera.mainCamera.ScreenToWorldPoint(Input.mousePosition));

			movePart.GetComponent<SpriteRenderer>().sortingLayerName = "DeadBodies";
			m_bBodyArr[iIdx] = true;
		}

		StartCoroutine (ChangeParentToMorgue(movePart));
	}

	public void SelectPart(Part part)
	{
		m_SelectedPart = part;
		Transform morguePanel = GameObject.Find ("MorguePanel").transform;

		if (m_SelectedPart == null)
			return;

		morguePanel.GetChild(0).Find ("PartName").GetComponent<UILabel> ().text = part.m_strNameKey;  //TODO : Localize

		string strType = "";
		switch (part.m_partType) {
		case PART_TYPE.ARM:
			strType = "PartType_arm";
			break;

		case PART_TYPE.HEAD:
			strType = "PartType_head";
			break;

		case PART_TYPE.BODY:
			strType = "PartType_body";
			break;

		case PART_TYPE.LEG:
			strType = "PartType_leg";
			break;
		}
		morguePanel.GetChild(0).Find ("PartType").GetComponent<UILabel> ().text = Localization.Get (strType);

		morguePanel.GetChild(0).Find ("PartDesc").GetComponent<UILabel> ().text = "[3D1E43FF]";
		foreach (KeyValuePair<string, float> tmp in part.m_dicStat) {
			float fBuffedStat = 0f;
			for (int i = 0; i < part.m_lstPartBuffed.Count; ++i) {
				fBuffedStat += part.m_lstPartBuffed [i].m_dicStatBuff [tmp.Key];
			}

			if ((tmp.Value != 0 || fBuffedStat != 0)) {
				if (fBuffedStat > 0)
					morguePanel.GetChild(0).Find ("PartDesc").GetComponent<UILabel> ().text += string.Format ("{0} : {1}[50B728FF](+{2})[-]\n", Localization.Get (tmp.Key), tmp.Value, fBuffedStat);
				else if (fBuffedStat < 0)
					morguePanel.GetChild(0).Find ("PartDesc").GetComponent<UILabel> ().text += string.Format ("{0} : {1}[B72848FF](-{2})[-]\n", Localization.Get (tmp.Key), tmp.Value, fBuffedStat);
				else
					morguePanel.GetChild(0).Find ("PartDesc").GetComponent<UILabel> ().text += string.Format ("{0} : {1}", Localization.Get (tmp.Key), tmp.Value + "\n");
			}
		}
		for (int i = 0; i < part.m_lstStrBuff.Count; ++i) {
			string tmpBuff = Localization.Get (part.m_lstStrBuff [i]);
			int iArgument = System.Convert.ToInt32(tmpBuff [1]);

			if (!iArgument.Equals (0)) {
				if (part.m_lstStrBuff [i].Equals ("HeadBuff_0")) {
					tmpBuff = string.Format (tmpBuff, part.m_dicStatBuff["Attack"]);
				}else if (part.m_lstStrBuff [i].Equals ("HeadBuff_1")) {
					tmpBuff = string.Format (tmpBuff, part.m_dicStatBuff["AttackSpeed"]);
				}else if (part.m_lstStrBuff [i].Equals ("HeadBuff_2")) {
					tmpBuff = string.Format (tmpBuff, part.m_dicStatBuff["AttackSpeed"]);
				}
			}

			if (tmpBuff.Contains ("+"))
				morguePanel.GetChild(0).Find ("PartDesc").GetComponent<UILabel> ().text += "[00DA2EFF]" + tmpBuff.Substring (2) + "[-]";
			else if (tmpBuff.Contains ("-"))
				morguePanel.GetChild(0).Find ("PartDesc").GetComponent<UILabel> ().text += "[EC0E0E15]" + tmpBuff.Substring (2) + "[-]";
		}
	}

	public void DeselectPart()
	{
		m_SelectedPart = null;
		Transform morguePanel = GameObject.Find ("MorguePanel").transform;
		
		morguePanel.GetChild(0).Find ("PartName").GetComponent<UILabel> ().text = "";
		morguePanel.GetChild(0).Find ("PartDesc").GetComponent<UILabel> ().text = "";
	}

	IEnumerator ChangeParentToMorgue(GameObject movePart)
	{
		if (movePart.GetComponent<Part> ().m_bAttackAvailable) {
			ObjectFactory.getInstance.Create_PartAnimator (movePart.transform);
		}
			
		movePart.transform.parent = transform;
		movePart.transform.localScale = new Vector3(0.8f, 0.8f, 1f);

		yield return null;
//		movePart.GetComponent<Part> ().AdjustEmissionRate ();

	}

	public void ClearMorgue()
	{
		for (int i = 0; i < m_bBodyArr.Length; ++i) {
			m_bBodyArr [i] = false;
		}
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
