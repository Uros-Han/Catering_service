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
		StartCoroutine (UserMove (true));
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
}
