using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WorldIcon : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}

	bool bIsThisIsland = false;

	void CheckAroundAmIAlone() // 주변타일 검사해서 자신 혼자떨어져 있는지 검사
	{
		GridMgr grid = GridMgr.getInstance;
		int iMyIdx = grid.GetGridIdx (transform.position);

//		List<int> iAroundIdxList = new List<int> ();
//
//		iAroundIdxList.Add (iMyIdx + grid.m_iXcount);
//		iAroundIdxList.Add (iMyIdx - grid.m_iXcount);
//		iAroundIdxList.Add (iMyIdx + 1);
//		iAroundIdxList.Add (iMyIdx - 1);
//		iAroundIdxList.Add (iMyIdx - grid.m_iXcount - 1);
//		iAroundIdxList.Add (iMyIdx - grid.m_iXcount + 1);
//		iAroundIdxList.Add (iMyIdx + grid.m_iXcount - 1);
//		iAroundIdxList.Add (iMyIdx + grid.m_iXcount + 1);

		if (AStar.getInstance.AStarStart_World (iMyIdx, grid.m_iXcount * grid.m_iYcount / 2).Count.Equals (0)) {
			bIsThisIsland = true;
		}


//		if (grid.FindObjAsList (iAroundIdxList, transform.parent).Count < 1) {
//			Destroy (gameObject);
//		}
	}

	void DestroyIfIsland()
	{
		if (bIsThisIsland) {
			Destroy (gameObject);
			GameObject.Find ("Geo").transform.GetChild (GridMgr.getInstance.GetGridIdx (transform.position)).GetComponent<WorldGeo> ().m_worldIcon = null;
		}
	}
}
