using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BattleSceneMgr : MonoBehaviour {

	private static BattleSceneMgr instance;

	public static BattleSceneMgr getInstance
	{
		get
		{
			if (instance == null)
			{
				instance = FindObjectOfType(typeof(BattleSceneMgr)) as BattleSceneMgr;
			}

			if (instance == null)
			{
				GameObject obj = new GameObject("BattleSceneMgr");
				instance = obj.AddComponent(typeof(BattleSceneMgr)) as BattleSceneMgr;
			}

			return instance;
		}
	}

	// Use this for initialization
	void Start () {
		EnemyGenerate ();
		StartCoroutine (UserMove (true));
	}

	void EnemyGenerate()
	{
		LevelGenerator.getInstance.Encount (AREA_STATE.FARM, 2);
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
			GameMgr.getInstance.m_turnState = TURN_STATE.ASSEMBLE;
			GameObject.Find ("Enemies").BroadcastMessage ("Assemble", null, SendMessageOptions.DontRequireReceiver);
			GameObject.Find ("Core").BroadcastMessage ("Assemble", null, SendMessageOptions.DontRequireReceiver);

			GameObject.Find ("StopAssembleButton").GetComponent<UIPanel>().alpha = 1;
//			StartCoroutine(CheckAssembleIsDone());
		} else {

			GameMgr.getInstance.m_turnState = TURN_STATE.ENEMY_MOVE;
			GameObject.Find ("Enemies").BroadcastMessage ("FindNewSeat", null, SendMessageOptions.DontRequireReceiver);

			yield return new WaitForSeconds (1.5f);

			StartCoroutine (EnemyAttackTurn ());
		}
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
			if(!EnemyParent.GetChild(i).GetComponent<Enemy>().m_bDestroied)
				return false;
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
}
