using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FSM : MonoBehaviour {

	public AI_STATE m_AiState;
	public GameObject m_target;

	public void SetState(AI_STATE state)
	{
		StopAllCoroutines ();

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

		case AI_STATE.DISABLED:
			StartCoroutine (State_Disabled ());
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

	protected IEnumerator Attack(GameObject target, float fDamage, bool bEnemy)
	{
		if(target == null)
			yield break;

		if (bEnemy) { /// Attack Enemy
			
			target.GetComponent<Unit>().m_fCurHealth -= fDamage;
			ObjectFactory.getInstance.Create_DamageUI (target, fDamage, true);
			SoundMgr.getInstance.PlaySfx ("impact_blade");
			SoundMgr.getInstance.PlaySfx ("human_scream");

			for (int i = 0; i < target.transform.childCount; ++i) {
				target.transform.GetChild (i).GetComponent<Part>().AdjustEmissionRate();
			}

			if(target.GetComponent<Unit>().m_fCurHealth <= 0)
			{
				target.GetComponent<Unit> ().m_fCurHealth = 0;
				target.GetComponent<FSM_Enemy> ().SetState (AI_STATE.GROGGY);	
				yield break;
			}
		} else { //Attack Friendly

			Part targetPart = target.GetComponent<Part> ();
			float fDodgePercent = targetPart.m_dicStat ["Dodge"];
			for (int i = 0; i < targetPart.m_lstPartBuffed.Count; ++i) {
				fDodgePercent += targetPart.m_lstPartBuffed [i].m_dicStatBuff ["Dodge"];
			}
			fDodgePercent *= 10f;

			SoundMgr.getInstance.PlaySfx ("impact_blade");

			float fDealedDmg = fDamage - targetPart.m_dicStat["Defense"];

			if (Random.Range (0, 100) < (int)fDodgePercent) { // Dodge!!
				ObjectFactory.getInstance.Create_DamageUI (target, 0, true, true);
			} else {
				if (fDealedDmg > 0) {
					if (targetPart.gameObject.name.Equals ("Core")) {
						GameObject.Find ("Health").GetComponent<TopBarUI> ().ChangeValue (targetPart.m_fCurHealth - fDealedDmg);
					} else {
						targetPart.m_fCurHealth -= fDealedDmg;
					}
					ObjectFactory.getInstance.Create_DamageUI (target, fDamage, true);
				} else {
					ObjectFactory.getInstance.Create_DamageUI (target, 0f, true);
				}
			}

			targetPart.AdjustEmissionRate();
			if(targetPart.m_fCurHealth <= 0)
			{
				targetPart.PartDestroyed();
				yield break;
			}
		}

		yield return new WaitForSeconds (0.15f);

		if (target == null)
			yield break;

		if (bEnemy) {
			for (int i = 0; i < target.transform.childCount; ++i) {
//				target.transform.GetChild (i).GetComponent<SpriteRenderer> ().color = Color.white;
			}
		} else {
//			target.GetComponent<SpriteRenderer> ().color = Color.white;
		}

	}
	
	protected virtual IEnumerator State_Disabled()
	{
		do{
			yield return null;
			
		}while(m_AiState == AI_STATE.DISABLED);
		
		SetState (m_AiState);
	}
}
