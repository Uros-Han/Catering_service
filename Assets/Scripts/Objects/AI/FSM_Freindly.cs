using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FSM_Freindly : FSM {


	// Use this for initialization
	void OnEnable () {
		SetState (AI_STATE.IDLE);
	}

	protected override IEnumerator State_Idle()
	{
		Transform EnemyTrans = GameObject.Find("Enemies").transform;
		bool bAttackAble = GetComponent<Part> ().m_bAttackAvailable;

		do{
			yield return null;

			if(bAttackAble){
				for(int i =0 ; i < EnemyTrans.childCount; ++i)
				{
					if(Vector3.Distance(EnemyTrans.GetChild(i).transform.position, transform.position) < 0.5f && EnemyTrans.GetChild(i).gameObject.activeInHierarchy && EnemyTrans.GetChild(i).gameObject.GetComponent<Unit>().m_fCurHealth > 0)
					{
						m_target = EnemyTrans.GetChild(i).gameObject;
						m_AiState = AI_STATE.ATTACK;
					}
				}
			}
			
		}while(m_AiState == AI_STATE.IDLE);
		
		SetState (m_AiState);
	}
	
	protected override IEnumerator State_Attack()
	{
		Unit targetUnit = m_target.GetComponent<Unit> ();
		Part attackPart = GetComponent<Part> ();

		float fDmg = attackPart.m_dicStat["Attack"];
		for(int i = 0 ; i < attackPart.m_lstPartBuffed.Count; ++i)
		{
			fDmg += attackPart.m_lstPartBuffed[i].m_dicStatBuff["Attack"];
		}

		float fAttackSpeed = attackPart.m_dicStat["AttackSpeed"];
		for(int i = 0 ; i < attackPart.m_lstPartBuffed.Count; ++i)
		{
			fAttackSpeed += attackPart.m_lstPartBuffed[i].m_dicStatBuff["AttackSpeed"];
		}
		fAttackSpeed = 10f - fAttackSpeed;
		if (fAttackSpeed < 1)
			fAttackSpeed = 1;

		do{
			yield return null;

			if(m_target == null || !m_target.activeInHierarchy)
			{
				m_AiState = AI_STATE.IDLE;
				m_target = null;
				break;
			}
			
			iTween.RotateTo(gameObject, iTween.Hash("z",-100f,"time", fAttackSpeed * 0.2f));
			yield return new WaitForSeconds((fAttackSpeed * 0.2f) + (fAttackSpeed * 0.1f));
			iTween.RotateTo(gameObject, iTween.Hash("z",0f,"time", fAttackSpeed * 0.02f));

			SoundMgr.getInstance.PlaySfx ("weapon_twohand");

			yield return new WaitForSeconds(fAttackSpeed * 0.02f);
			StartCoroutine(Attack(m_target, fDmg, true));
			yield return new WaitForSeconds(fAttackSpeed * 0.1f); //Delay

			if(targetUnit.m_fCurHealth <= 0)
			{
				m_AiState = AI_STATE.IDLE;
				m_target = null;
				break;
			}

			if(m_target == null || !m_target.activeInHierarchy)
			{
				m_AiState = AI_STATE.IDLE;
				m_target = null;
				break;
			}

			if(Vector3.Distance(m_target.transform.position, transform.position) > 0.5f)
			{
				m_AiState = AI_STATE.IDLE;
				m_target = null;
			}
			
		}while(m_AiState == AI_STATE.ATTACK);
		
		SetState (m_AiState);
	}
}
