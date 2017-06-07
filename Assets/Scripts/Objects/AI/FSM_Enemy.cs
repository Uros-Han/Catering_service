using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FSM_Enemy : FSM {
	

	// Use this for initialization
	void Start () {
		SetState (AI_STATE.MOVE);
	}

	void SetState(AI_STATE state)
	{
		m_AiState = state;

		switch(state)
		{
		case AI_STATE.MOVE:
			StartCoroutine (State_Move ());
			break;

		case AI_STATE.ATTACK:
			StartCoroutine (State_Attack ());
			break;
		}
	}

	protected override IEnumerator State_Move()
	{
		Transform CoreTrans = GameObject.Find ("Core").transform;

		do{
			yield return null;

			if(Vector3.Distance(CoreTrans.position, transform.position) < 0.5f)
			{
				m_target = CoreTrans.gameObject;
				m_AiState = AI_STATE.ATTACK;
			}
			for(int i=0; i < CoreTrans.childCount; ++i)
			{
				if(Vector3.Distance(CoreTrans.GetChild(i).transform.position, transform.position) < 0.5f)
				{
					m_target = CoreTrans.GetChild(i).gameObject;
					m_AiState = AI_STATE.ATTACK;
				}
			}

			if(m_AiState == AI_STATE.MOVE)
				transform.Translate(new Vector3(-1,0) * 0.005f);

		}while(m_AiState == AI_STATE.MOVE);

		SetState (m_AiState);
	}

	protected override IEnumerator State_Attack()
	{
		GameObject LeftHand = transform.FindChild ("Hand_L").gameObject;

		do{
			yield return null;

			iTween.RotateTo(LeftHand, iTween.Hash("z",-100f,"time",0.8f));
			iTween.MoveTo(LeftHand, iTween.Hash("x", -0.095f, "y", 0.209f, "time", 0.8f, "islocal", true));
			yield return new WaitForSeconds(1.1f);
         	iTween.RotateTo(LeftHand, iTween.Hash("z",0f,"time",0.2f));
			iTween.MoveTo(LeftHand, iTween.Hash("x", -0.129f, "y", 0.08f, "time", 0.2f, "islocal", true));
			yield return new WaitForSeconds(0.2f);
			StartCoroutine(Attack(m_target, false));
			yield return new WaitForSeconds(0.2f);

			if(Vector3.Distance(m_target.transform.position, transform.position) > 0.5f)
			{
				m_AiState = AI_STATE.MOVE;
				m_target = null;
			}

		}while(m_AiState == AI_STATE.ATTACK);

		SetState (m_AiState);
	}
}
