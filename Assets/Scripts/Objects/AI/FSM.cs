using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FSM : MonoBehaviour {

	public AI_STATE m_AiState;
	public GameObject m_target;

	public void SetState(AI_STATE state)
	{
		m_AiState = state;
		
		switch(state)
		{
		case AI_STATE.IDLE:
			StartCoroutine (State_Idle ());
			break;

		case AI_STATE.MOVE:
			StartCoroutine (State_Move ());
			break;
			
		case AI_STATE.ATTACK:
			StartCoroutine (State_Attack ());
			break;
		}
	}

	protected virtual IEnumerator State_Idle()
	{
		do{
			yield return null;
			
		}while(m_AiState == AI_STATE.IDLE);
		
		SetState (m_AiState);
	}

	protected virtual IEnumerator State_Move()
	{
		do{
			yield return null;
			
		}while(m_AiState == AI_STATE.MOVE);
		
		SetState (m_AiState);
	}

	protected virtual IEnumerator State_Attack()
	{
		do{
			yield return null;
			
		}while(m_AiState == AI_STATE.ATTACK);
		
		SetState (m_AiState);
	}

	protected IEnumerator Attack(GameObject target, bool bEnemy)
	{
		if (bEnemy) {
			for (int i = 0; i < target.transform.childCount; ++i) {
				target.transform.GetChild (i).GetComponent<SpriteRenderer> ().color = Color.red;
			}
		} else {
			target.GetComponent<SpriteRenderer> ().color = Color.red;
		}

		yield return new WaitForSeconds (0.15f);

		if (bEnemy) {
			for (int i = 0; i < target.transform.childCount; ++i) {
				target.transform.GetChild (i).GetComponent<SpriteRenderer> ().color = Color.white;
			}
		} else {
			target.GetComponent<SpriteRenderer> ().color = Color.white;
		}

	}
}
