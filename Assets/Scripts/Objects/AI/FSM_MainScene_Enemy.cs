using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FSM_MainScene_Enemy : FSM {

	// Use this for initialization
	void Start () {
		SetState (AI_STATE.MOVE);
	}

	public void SetState(AI_STATE state)
	{
		m_AiState = state;

		StopAllCoroutines ();

		switch(state)
		{
		case AI_STATE.MOVE:
			StartCoroutine (State_Move ());
			StartCoroutine(Tremble());
			break;

		case AI_STATE.EATEN:
			StartCoroutine (State_Eaten ());
			break;

		case AI_STATE.PANIC:
			StartCoroutine (State_Panic ());
			break;

		case AI_STATE.DISABLED:
			StartCoroutine (State_Disabled ());
			break;

		}
	}

	protected override IEnumerator State_Move()
	{
		Transform coreTrans = GameObject.Find ("Player").transform.GetChild(0);
		Transform PlayerTrans = GameObject.Find ("Player").transform;
		float fMoveSpeed = GetComponent<Unit> ().m_fMoveSpeed;

		Unit thisUnit = GetComponent<Unit> ();

		do{
			yield return null;

			Vector3 CoreDirVec = Vector3.Normalize (coreTrans.position - transform.position);

			if(m_AiState == AI_STATE.MOVE)
			{
				if(thisUnit.m_bCatched){
					m_AiState = AI_STATE.PANIC;
					break;
				}

				transform.Translate(CoreDirVec * fMoveSpeed * Time.deltaTime);
			}



		}while(m_AiState == AI_STATE.MOVE);

		SetState (m_AiState);
	}

	public IEnumerator State_Panic(){

		do {

			yield return null;

		} while(m_AiState == AI_STATE.PANIC);

		SetState (m_AiState);
	}

	public IEnumerator State_Eaten()
	{
		do{
			yield return null;

		}while(m_AiState == AI_STATE.EATEN);

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

			if(fCurJumpSpeed < -fJumpPower)
			{
				bOnGround = true;
			}

			yield return null;

		}while(m_AiState == AI_STATE.MOVE);
	}
}
