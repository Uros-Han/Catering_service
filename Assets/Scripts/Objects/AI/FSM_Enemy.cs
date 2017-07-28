using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FSM_Enemy : FSM {

	List<GameObject> m_AttackAvailableParts;

	float fBornPosX = 0;

	// Use this for initialization
	void Start () {
		SetState (AI_STATE.MOVE);

		m_AttackAvailableParts = new List<GameObject> ();

		//Find AttackAvailable Part
		for(int i =0 ; i < transform.childCount; ++i)
		{
			if(transform.GetChild(i).GetComponent<Part>().m_bAttackAvailable)
				m_AttackAvailableParts.Add(transform.GetChild(i).gameObject);
		}

		fBornPosX = transform.position.x;
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
			for(int i = 0 ; i < m_AttackAvailableParts.Count; ++i)
				StartCoroutine(AttackablePart(m_AttackAvailableParts[i], i));

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
		Transform PlayerTrans = GameObject.Find ("Player").transform;
		float fMoveSpeed = GetComponent<Unit> ().m_fMoveSpeed;

		do{
			yield return null;

			if(m_AiState == AI_STATE.MOVE)
				transform.Translate(new Vector3(-1,0) * fMoveSpeed * Time.deltaTime);

			if(transform.position.x < -fBornPosX) //Run Away
			{
				BattleSceneMgr.getInstance.EnemyEliminatedCheck ();
				Destroy (gameObject);
			}

			if(m_AttackAvailableParts.Count.Equals(0))
				continue;

			//// TODO : Attack logic modify

			for(int i=0; i < PlayerTrans.childCount; ++i)
			{
				if(Vector3.Distance(PlayerTrans.GetChild(i).transform.position, transform.position) < 0.5f)
				{
					m_target = PlayerTrans.GetChild(i).gameObject;
					m_AiState = AI_STATE.ATTACK;
				}
			}
			//////////////////////////////////

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
		do{
			yield return null;

			if(Vector3.Distance(m_target.transform.position, transform.position) > 0.5f)
			{
				m_AiState = AI_STATE.MOVE;
				m_target = null;
			}

		}while(m_AiState == AI_STATE.ATTACK);

		SetState (m_AiState);
	}

	IEnumerator AttackablePart(GameObject AttackPart, int iCount)
	{
		yield return new WaitForSeconds (iCount * 0.5f);

		Part targetPart = m_target.GetComponent<Part> ();
		Quaternion originRotate = AttackPart.transform.localRotation;
		Vector3 originPos = AttackPart.transform.localPosition;

		while(m_AiState == AI_STATE.ATTACK){

			iTween.RotateTo(AttackPart, iTween.Hash("z",-100f,"time",0.8f, "islocal", true));
			iTween.MoveTo(AttackPart, iTween.Hash("x", -0.095f, "y", 0.209f, "time", 0.8f, "islocal", true));
			yield return new WaitForSeconds(1.1f);

			if(targetPart.m_bDestroied)
			{
				AttackPart.transform.localRotation = originRotate;
				AttackPart.transform.localPosition = originPos;
				continue;
			}
			iTween.RotateTo(AttackPart, iTween.Hash("z",0f,"time",0.2f, "islocal", true));
			iTween.MoveTo(AttackPart, iTween.Hash("x", -0.129f, "y", 0.08f, "time", 0.2f, "islocal", true));
			yield return new WaitForSeconds(0.2f);
			if(targetPart.m_bDestroied)
			{
				AttackPart.transform.localRotation = originRotate;
				AttackPart.transform.localPosition = originPos;
				continue;
			}

			StartCoroutine(Attack(m_target, GetComponent<Unit>().m_fAttackDmg, false));
			yield return new WaitForSeconds(0.2f);

		};
	}
}
