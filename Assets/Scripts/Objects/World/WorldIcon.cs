using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class WorldIcon : MonoBehaviour {

	public int m_iconType = 0;
	public int m_iGridIdx = 0;

	bool bIsThisIsland = false;

	public void Init() // Loading 때문에 만듬a
	{
		transform.position = GridMgr.getInstance.GetPosOfIdx(m_iGridIdx);

		switch (m_iconType) {
		case (int)WORLDICON_TYPE.EMPTY:
			break;

		case (int)WORLDICON_TYPE.FARM:
			GetComponent<SpriteRenderer> ().sprite = ObjectFactory.getInstance.m_sheet_worldicon [1];
			break;

		case (int)WORLDICON_TYPE.RANCH:
			GetComponent<SpriteRenderer> ().sprite = ObjectFactory.getInstance.m_sheet_worldicon [2];
			break;

		case (int)WORLDICON_TYPE.VILLAGE:
			GetComponent<SpriteRenderer> ().sprite = ObjectFactory.getInstance.m_sheet_worldicon [3];
			break;

		case (int)WORLDICON_TYPE.CITY:
			GetComponent<SpriteRenderer> ().sprite = ObjectFactory.getInstance.m_sheet_worldicon [4];
			break;

		case (int)WORLDICON_TYPE.CASTLE:
			GetComponent<SpriteRenderer> ().sprite = ObjectFactory.getInstance.m_sheet_worldicon [5];
			break;
		}

		GameObject.Find("Geo").transform.GetChild (m_iGridIdx).GetComponent<WorldGeo> ().m_worldIcon = gameObject;
	}

	void CheckAroundAmIAlone() // 주변타일 검사해서 자신 혼자떨어져 있는지 검사
	{
		GridMgr grid = GridMgr.getInstance;
		int iMyIdx = grid.GetGridIdx (transform.position);

		if (AStar.getInstance.AStarStart_World (iMyIdx, grid.m_iXcount * grid.m_iYcount / 2).Count.Equals (0)) {
			bIsThisIsland = true;
		}
	}

	void DestroyIfIsland()
	{
		if (bIsThisIsland) {
			Destroy (gameObject);
			GameObject.Find ("Geo").transform.GetChild (GridMgr.getInstance.GetGridIdx (transform.position)).GetComponent<WorldGeo> ().m_worldIcon = null;
		}
	}
}
