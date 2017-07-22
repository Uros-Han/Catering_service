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
			StartCoroutine(Tremble());
			break;

		case AI_STATE.ATTACK:
			StartCoroutine (State_Attack ());
			break;

		case AI_STATE.EATEN:
			StartCoroutine (State_Eaten ());
			break;
		}
	}

	public IEnumerator State_Eaten()
	{
		do{
			yield return null;

		}while(m_AiState == AI_STATE.EATEN);

		SetState (m_AiState);
	}

	protected override IEnumerator State_Move()
	{
		Transform CoreTrans = GameObject.Find ("Core").transform;
		float fMoveSpeed = GetComponent<Unit> ().m_fMoveSpeed;

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
				transform.Translate(new Vector3(-1,0) * fMoveSpeed * Time.deltaTime);

		}while(m_AiState == AI_STATE.MOVE);

		SetState (m_AiState);
	}

	IEnumerator Tremble()
	{
		yield return new WaitForSeconds(Random.Range(0.1f, 0.4f));
		bool bOnGround = true;

		float fJumpPower = 0.25f;
		float fJumpResistance = 0.04f;
		float fCurJumpSpeed = 0f;

		float fOriginYPos = transform.position.y;

		do{
			if(bOnGround)
			{
				bOnGround = false;
				fCurJumpSpeed = fJumpPower;
			}

			transform.Translate(new Vector3(0,1) * fCurJumpSpeed * Time.deltaTime);

			fCurJumpSpeed -= fJumpResistance;

			if(transform.position.y < fOriginYPos)
			{
				transform.position = new Vector3(transform.position.x, fOriginYPos);
				bOnGround = true;
			}

			yield return null;

		}while(m_AiState == AI_STATE.MOVE || transform.position.y > fOriginYPos);
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
			StartCoroutine(Attack(m_target, GetComponent<Unit>().m_fAttackDmg, false));
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
