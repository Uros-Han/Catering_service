using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FSM_Freindly : FSM {


	// Use this for initialization
	void Start () {
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
					if(Vector3.Distance(EnemyTrans.GetChild(i).transform.position, transform.position) < 0.5f && EnemyTrans.GetChild(i).gameObject.activeInHierarchy)
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
		do{
			yield return null;
			
			iTween.RotateTo(gameObject, iTween.Hash("z",-100f,"time",0.8f));
			yield return new WaitForSeconds(1.1f);
			iTween.RotateTo(gameObject, iTween.Hash("z",0f,"time",0.2f));
			yield return new WaitForSeconds(0.2f);
			StartCoroutine(Attack(m_target, GetComponent<Part>().m_fAttackDmg, true));
			yield return new WaitForSeconds(0.2f); //Delay

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
