using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Com.LuisPedroFonseca.ProCamera2D;

public class Core_World : MonoBehaviour {
	
	public int m_iDestinationIdx;
	List<int> m_listMoveIdx;

	// Use this for initialization
	void Start () {
		m_listMoveIdx = new List<int> ();
		StartCoroutine (Idle ());
	}

	IEnumerator Idle()
	{
		WorldMapManager world = WorldMapManager.getInstance;
		GridMgr grid = GridMgr.getInstance;

		float fMouseTimer = 0f;
		bool bMouseTimerOn = false;
		Vector3 vecMouseClickedPos = Vector3.zero;
		Vector3 mousePosition = Vector3.zero;

		do{
			mousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);

			if(bMouseTimerOn)
				fMouseTimer += Time.deltaTime;

			if(Input.GetMouseButtonDown(0)){
				fMouseTimer = 0f;
				bMouseTimerOn = true;
				vecMouseClickedPos = mousePosition;

			}else if(Input.GetMouseButtonUp(0))
			{
				bMouseTimerOn = false;

				if(fMouseTimer < 0.1f && Vector3.Distance(vecMouseClickedPos, mousePosition) < 0.1f){
					m_listMoveIdx = AStar.getInstance.AStarStart_World(grid.GetGridIdx(GameObject.Find("Core").transform.position), grid.m_iGridIdx);
					m_iDestinationIdx = grid.m_iGridIdx;
					world.m_worldTurnState = WORLDTURN_STATE.MOVE;
				}
			}

			yield return null;

		}while(world.m_worldTurnState.Equals(WORLDTURN_STATE.IDLE));

		StartCoroutine (Move());
	}

	IEnumerator Move()
	{
		WorldMapManager world = WorldMapManager.getInstance;
		GridMgr grid = GridMgr.getInstance;

		if (m_listMoveIdx.Count > 0) {
			ProCamera2D.Instance.AdjustCameraTargetInfluence (ProCamera2D.Instance.CameraTargets [0], 1f, 1f);
			ProCamera2D.Instance.AdjustCameraTargetInfluence (ProCamera2D.Instance.CameraTargets [1], 0f, 0f);
		}

		for(int i = 0; i < m_listMoveIdx.Count; ++i)
		{
			Vector3 destPos = grid.GetPosOfIdx(m_listMoveIdx[i]);
			iTween.MoveTo(gameObject, iTween.Hash("x", destPos.x, "y", destPos.y, "time", 1f, "easetype", "easeInSine"));

			yield return new WaitForSeconds(1f);
		}

		ProCamera2D.Instance.AdjustCameraTargetInfluence (ProCamera2D.Instance.CameraTargets [0], 0f, 0f);
		ProCamera2D.Instance.AdjustCameraTargetInfluence (ProCamera2D.Instance.CameraTargets [1], 1f, 1f);
		GameObject.Find ("PC2DPanTarget").transform.position = GameObject.Find ("Core").transform.position;

		world.m_worldTurnState = WORLDTURN_STATE.IDLE;
		StartCoroutine (Idle());
	}
}
