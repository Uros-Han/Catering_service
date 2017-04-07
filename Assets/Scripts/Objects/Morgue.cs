using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Morgue : Singleton<Morgue> {
	
	public Vector2[] m_vMorguePosArr;
	public bool[] m_bBodyArr; //자리 차지한 시체들 false == empty
	public int[] m_iMorgueIdxArr;
	public float m_fBodyMoveTime;

	void Start()
	{
		m_vMorguePosArr = new Vector2[]{ new Vector2(-0.48f,-1.28f), new Vector2(-0.32f,-1.28f), new Vector2(-0.16f,-1.28f), new Vector2(0f,-1.28f), new Vector2(1.6f,-1.28f), new Vector2(3.2f,-1.28f), new Vector2(4.8f,-1.2828f),
										new Vector2(-0.48f,-1.44f), new Vector2(-0.32f,-1.44f), new Vector2(-0.16f,-1.44f), new Vector2(0f,-1.44f), new Vector2(1.6f,-1.44f), new Vector2(3.2f,-1.44f), new Vector2(4.8f,-1.44f)};
		m_bBodyArr = new bool[14];
		m_iMorgueIdxArr = new int[]{ 145, 146, 147, 148, 149, 150, 151, 156, 157, 158, 159, 160, 161, 162};
		m_fBodyMoveTime = 0.25f;
	}

	public void AddBody(bool bWithDrag, GameObject moveBody, int iGridIdx = -1)
	{
		if (!bWithDrag) {
			int iEmptyIdx = EmptyMorgueIdxCheck();

			if(iEmptyIdx != -1) // have space
			{
				moveBody.GetComponent<SpriteRenderer>().sortingLayerName = "DeadBodies";
				iTween.MoveTo (moveBody, iTween.Hash ("x", m_vMorguePosArr[iEmptyIdx].x, "y", m_vMorguePosArr[iEmptyIdx].y, "islocal", false, "time", m_fBodyMoveTime, "easetype", "easeInSine"));
				iTween.RotateTo(moveBody, iTween.Hash ("z", 0f, "time", m_fBodyMoveTime));
				m_bBodyArr[iEmptyIdx] = true;
				moveBody.GetComponent<SpriteSheet>().SetSprite(0);
			}

		} else {
			int iIdx = GridIdxToMorgueIdx (iGridIdx);

			moveBody.GetComponent<SpriteRenderer>().sortingLayerName = "DeadBodies";
			m_bBodyArr[iIdx] = true;
		}

		moveBody.transform.parent = transform;
	}

	public void RemoveBody(int iGridIdx)
	{
		int iIdx = GridIdxToMorgueIdx (iGridIdx);

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

	int GridIdxToMorgueIdx(int iGridIdx)
	{
		if (iGridIdx < 156) {
			return iGridIdx - 145;
		} else {
			return iGridIdx - 156 + 7;
		}
	}
}
