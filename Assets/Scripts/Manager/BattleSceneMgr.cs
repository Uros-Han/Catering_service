using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Com.LuisPedroFonseca.ProCamera2D;

public class BattleSceneMgr : Singleton<BattleSceneMgr> {


	// Use this for initialization
	void Start () {
		EnemyGenerate ();
		StartCoroutine (UserMove (true));
	}

	void EnemyGenerate()
	{
//		LevelGenerator.getInstance.Encount (AREA_STATE.FARM, 2);
	}
	
	IEnumerator UserMove(bool isBattleFirst = false)
	{
		if (isBattleFirst)
			yield return new WaitForSeconds (1f);
		else
			yield return null;

		GameMgr.getInstance.m_turnState = TURN_STATE.USER_MOVE;

		GameObject.Find ("EndTurnButton").GetComponent<UIButton> ().enabled = true;
		GameObject.Find ("EndTurnButton").GetComponent<UIButtonScale> ().enabled = true;
	}

	public void EndUserMoveTurn()
	{
		if (GameMgr.getInstance.m_turnState != TURN_STATE.USER_MOVE)
			return;
		
		GameMgr.getInstance.m_turnState = TURN_STATE.USER_ATTACK;

		GameObject.Find ("EndTurnButton").GetComponent<UIButton> ().enabled = false;
		GameObject.Find ("EndTurnButton").GetComponent<UIButtonScale> ().enabled = false;

		GameObject.Find ("Core").BroadcastMessage ("Attack", null ,SendMessageOptions.DontRequireReceiver);
		StartCoroutine (EnemyMoveTurn ());
	}

	IEnumerator EnemyMoveTurn()
	{
		yield return new WaitForSeconds (1.5f);

		if (EnemyEliminatedCheck ()) {
			GameObject.Find("AssembleCurtains").BroadcastMessage("CurtainOn");
			yield return new WaitForSeconds(Morgue.getInstance.m_fBodyMoveTime + 0.25f);
			iTween.ValueTo(Camera.main.gameObject, iTween.Hash ("from", Camera.main.orthographicSize, "to", 1f, "time", 1f, "easetype", "easeInOutBack", "onupdate", "UpdateOrthographicCameraSize",
			                                                    "onupdatetarget", gameObject));
			yield return new WaitForSeconds(1f);
			iTween.MoveTo (GameObject.Find ("Morgue"), iTween.Hash ("y" , -0.72f, "islocal", false, "time", 0.35f, "easetype", "easeOutBack"));

			yield return new WaitForSeconds(0.4f);

			GameMgr.getInstance.m_turnState = TURN_STATE.ASSEMBLE;
			GameObject.Find ("Morgue").BroadcastMessage ("Assemble", null, SendMessageOptions.DontRequireReceiver);
			GameObject.Find ("Core").BroadcastMessage ("Assemble", null, SendMessageOptions.DontRequireReceiver);
//			GameObject.Find ("Core").transform.position = new Vector2(0,0);

			GameObject.Find ("StopAssembleButton").GetComponent<UIPanel>().alpha = 1;
//			StartCoroutine(CheckAssembleIsDone());
		} else {

			GameMgr.getInstance.m_turnState = TURN_STATE.ENEMY_MOVE;
			GameObject.Find ("Enemies").BroadcastMessage ("FindNewSeat", null, SendMessageOptions.DontRequireReceiver);

			yield return new WaitForSeconds (1.5f);

			StartCoroutine (EnemyAttackTurn ());
		}
	}
	
	void UpdateOrthographicCameraSize (float size) {
		Camera.main.orthographicSize = size;
	}

	IEnumerator EnemyAttackTurn()
	{
		GameMgr.getInstance.m_turnState = TURN_STATE.ENEMY_ATTACK;

		GameObject.Find ("Enemies").BroadcastMessage ("Attack", null ,SendMessageOptions.DontRequireReceiver);

		yield return new WaitForSeconds (1.5f);

		StartCoroutine (UserMove ());
	}

	bool EnemyEliminatedCheck()
	{
		Transform EnemyParent = GameObject.Find ("Enemies").transform;

		for (int i = 0; i < EnemyParent.childCount; ++i) {
//			if(!EnemyParent.GetChild(i).GetComponent<Enemy>().m_bDestroied)
//				return false;
		}

		return true;
	}

//	IEnumerator CheckAssembleIsDone()
//	{
//		bool bAssembleIsDone = false;
//		Transform EnemyTrans = GameObject.Find ("Enemies").transform;
//
//		do {
//			if(EnemyTrans.childCount.Equals(0))
//				bAssembleIsDone = true;
//
//			yield return null;
//		} while(!bAssembleIsDone);
//
//		yield return new WaitForSeconds (1.5f);
//
//		EnemyGenerate ();
//		GameObject.Find("Core").BroadcastMessage("StopAssemble");
//		StartCoroutine (UserMove (true));
//	}

	public void StopAssemble()
	{
		StartCoroutine (StopAssemble_Coroutine ());
	}

	IEnumerator StopAssemble_Coroutine()
	{
		iTween.MoveTo (GameObject.Find ("Morgue"), iTween.Hash ("y" , -1.36f, "islocal", false, "time", 0.35f, "easetype", "easeOutBack"));
		yield return new WaitForSeconds(0.4f);

		iTween.ValueTo(Camera.main.gameObject, iTween.Hash ("from", Camera.main.orthographicSize, "to", 1.57f, "time", 1f, "easetype", "easeInOutBack", "onupdate", "UpdateOrthographicCameraSize",
		                                                    "onupdatetarget", gameObject));
		GameObject.Find("AssembleCurtains").BroadcastMessage("CurtainOff");
		yield return new WaitForSeconds(1f);

		GameObject.Find ("StopAssembleButton").GetComponent<UIPanel> ().alpha = 0;
		
		EnemyGenerate ();
		GameObject.Find("Core").BroadcastMessage("StopAssemble");

		StartCoroutine (UserMove (true));
	}

	public void StartAssembleAfter(GameObject obj)
	{
		StartCoroutine (StartWhosAssemble (obj));
	}

	IEnumerator StartWhosAssemble(GameObject obj)
	{
		yield return new WaitForSeconds(0.1f);

		if(obj.GetComponent<Part> ().AssembleRoutine == null)
			obj.GetComponent<Part> ().AssembleRoutine = StartCoroutine (obj.GetComponent<Part> ().Assemble ());
	}

	public void PartDestroied()
	{
		StartCoroutine (PartDestroied_Coroutine());
	}

	IEnumerator PartDestroied_Coroutine()
	{
		yield return null;
		yield return null;

//		GameObject.Find("Core").BroadcastMessage("AmI_InCoreSide");
		GameObject.Find("Core").BroadcastMessage("DestroyPart_WhenPathBreaked");
	}

	public void OnField(GameObject target)
	{
		StartCoroutine (target.GetComponent<Part>().OnField());
	}

	bool bMorgueOn = false;
	public void ToggleMorge()
	{
		Transform morgueTrans = GameObject.Find("Morgue").transform;
		float fMovedCamXPos = Camera.main.transform.position.x + 1.7f;
		float fOringXPos = 0f;
		GameObject grids = GameObject.Find("Grids").gameObject;

		if (!bMorgueOn) {
			GameObject.Find ("Core").transform.position = new Vector3(0,0);
			GameObject.Find ("Core").GetComponent<Part>().m_iGridIdx = GridMgr.getInstance.GetGridIdx(new Vector2(0,0));

			GameObject.Find ("Morgue").BroadcastMessage ("Assemble", null, SendMessageOptions.DontRequireReceiver);
			GameObject.Find ("Core").BroadcastMessage ("Assemble", null, SendMessageOptions.DontRequireReceiver);

			StartCoroutine(GameObject.Find("glass").GetComponent<Glass>().ToggleColor(true));
	
			for(int i = 0 ; i < grids.transform.childCount; ++i)
			{
				grids.transform.GetChild(i).gameObject.SetActive(true);
				StartCoroutine(grids.transform.GetChild(i).GetComponent<DebugLine>().AlphToggle(true));
			}
			StartCoroutine(CamOffset_XChg(true));
			iTween.MoveTo (morgueTrans.gameObject, iTween.Hash ("x",  0.5f, "time", 0.25f, "easetype", "easeInSine", "islocal", true));
			bMorgueOn = true;
		} else {
			StartCoroutine(GameObject.Find("glass").GetComponent<Glass>().ToggleColor(false));
			
			for(int i = 0 ; i < grids.transform.childCount; ++i)
			{
				grids.transform.GetChild(i).gameObject.SetActive(true);
				StartCoroutine(grids.transform.GetChild(i).GetComponent<DebugLine>().AlphToggle(false));
			}
			StartCoroutine(CamOffset_XChg(false));
			iTween.MoveTo (morgueTrans.gameObject, iTween.Hash ("x", 1.5f, "time", 0.25f, "easetype", "easeInSine","islocal", true));
			bMorgueOn = false;
		}
	}

	IEnumerator CamOffset_XChg(bool bMorgueOn)
	{
		if(bMorgueOn)
		{
			do{
				ProCamera2D.Instance.OffsetX += 0.04f;
				yield return null;
			}while(ProCamera2D.Instance.OffsetX < 0.5f);

			ProCamera2D.Instance.OffsetX = 0.5f;
		}else{
			do{
				ProCamera2D.Instance.OffsetX -= 0.04f;
				yield return null;
			}while(ProCamera2D.Instance.OffsetX > 0f);

			ProCamera2D.Instance.OffsetX = 0f;
		}
	}
}
