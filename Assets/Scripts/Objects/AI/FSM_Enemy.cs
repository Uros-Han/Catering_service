using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FSM_Enemy : FSM {

	public GameObject m_objHealthBar;

	List<GameObject> m_AttackAvailableParts;

	float fBornPosX = 0;

	// Use this for initialization
	void Start () {
		SetState (AI_STATE.MOVE);

		m_AttackAvailableParts = new List<GameObject> ();

		//Find AttackAvailable Part
		for (int i =0; i < transform.childCount; ++i) {
			if (transform.GetChild (i).GetComponent<Part> ().m_bAttackAvailable)
				m_AttackAvailableParts.Add (transform.GetChild (i).gameObject);
		}

		fBornPosX = transform.position.x;
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

		case AI_STATE.ATTACK:
			for(int i = 0 ; i < m_AttackAvailableParts.Count; ++i)
				StartCoroutine(AttackablePart(m_AttackAvailableParts[i], i));

			StartCoroutine (State_Attack ());
			break;

		case AI_STATE.EATEN:
			StartCoroutine (State_Eaten ());
			break;

		case AI_STATE.GROGGY:
			StartCoroutine (State_Groggy ());
			break;

		case AI_STATE.PANIC:
			StartCoroutine (State_Panic ());
			break;

		case AI_STATE.DISABLED:
			StartCoroutine (State_Disabled ());
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
		Transform coreTrans = GameObject.Find ("Player").transform.GetChild(0);
		Transform PlayerTrans = GameObject.Find ("Player").transform;
		float fMoveSpeed = GetComponent<Unit> ().m_fMoveSpeed;
		Unit thisUnit = GetComponent<Unit> ();

		do{
			yield return null;

			if(m_AiState == AI_STATE.MOVE)
			{
				if(thisUnit.m_bCatched){
					m_AiState = AI_STATE.PANIC;
					break;
				}

				if(coreTrans.position.x < transform.position.x)
					transform.Translate(new Vector3(-1,0) * fMoveSpeed * Time.deltaTime);
				else
					transform.Translate(new Vector3(1,0) * fMoveSpeed * Time.deltaTime);
			}

//			if((!m_bBornAtLeft && transform.position.x < -fBornPosX) || (m_bBornAtLeft && transform.position.x > -fBornPosX)) //Run Away
//			{
//				BattleSceneMgr.getInstance.EnemyEliminatedCheck ();
//				Destroy (m_objHealthBar);
//				Destroy (gameObject);
//			}

			if(m_AttackAvailableParts.Count.Equals(0))
				continue;

			//// TODO : Attack logic modify

			for(int i=0; i < PlayerTrans.childCount; ++i)
			{
				if((PlayerTrans.GetChild(i).gameObject.name.Equals("Body") || PlayerTrans.GetChild(i).gameObject.name.Equals("Core")) && Vector3.Distance(PlayerTrans.GetChild(i).transform.position, transform.position) < 0.5f)
				{
					m_target = PlayerTrans.GetChild(i).gameObject;
					m_AiState = AI_STATE.ATTACK;
				}
			}

			if(!m_AiState.Equals(AI_STATE.ATTACK)){
				for(int i=0; i < PlayerTrans.childCount; ++i)
				{
					if(Vector3.Distance(PlayerTrans.GetChild(i).transform.position, transform.position) < 0.3f)
					{
						m_target = PlayerTrans.GetChild(i).gameObject;
						m_AiState = AI_STATE.ATTACK;
					}
				}
			}
			//////////////////////////////////

		}while(m_AiState == AI_STATE.MOVE);

		SetState (m_AiState);
	}

	public IEnumerator State_Groggy(){
		GetComponent<Unit>().m_bGroggy = true;

		for (int i = 0; i < transform.childCount; ++i) {
			transform.GetChild (i).GetComponent<SpriteRenderer> ().color = new Color(128/255f, 171/255f, 255/255f);
		}
		GetComponent<FSM_Enemy> ().m_AiState = AI_STATE.DISABLED;

		float fGroggyTime = 2f;
		yield return new WaitForSeconds (fGroggyTime);

		if (GetComponent<FSM_Enemy> ().m_AiState == AI_STATE.EATEN)
			yield break;

		GetComponent<Unit>().Death ();

	}

	public IEnumerator State_Panic(){
		
		do {
			
			yield return null;

		} while(m_AiState == AI_STATE.PANIC);

		SetState (m_AiState);
	}

	public IEnumerator State_Disabled(){

		do {

			yield return null;

		} while(m_AiState == AI_STATE.DISABLED);

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
		Unit thisUnit = GetComponent<Unit> ();

		do{
			yield return null;

			if(thisUnit.m_bCatched)
			{
				m_AiState = AI_STATE.PANIC;
				break;
			}

			if(m_target == null)
			{
				m_AiState = AI_STATE.MOVE;
				break;
			}

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

		Part attackPart = AttackPart.GetComponent<Part>();
		float fDamage = attackPart.m_dicStat ["Attack"];
		float fAttackSpeed = attackPart.m_dicStat ["AttackSpeed"];
		fAttackSpeed = 10f - fAttackSpeed;
		if (fAttackSpeed < 1)
			fAttackSpeed = 1;

		Animator anim = null;
		if (attackPart.m_weaponType == WEAPON_TYPE.BOW) {
			anim = AttackPart.GetComponent<Animator> ();
			anim.SetFloat ("AttackSpeed", fAttackSpeed);
			if (AttackPart.GetComponent<SpriteRenderer>().flipX)
				anim.SetBool ("HeadingRight", true);
		}

		while(m_AiState == AI_STATE.ATTACK){
			if (attackPart.m_weaponType == WEAPON_TYPE.BOW) {

				anim.SetBool ("LooseBow", false);
				anim.SetBool ("Draw_Bow", true);

				float fTimer = 0f;

				do{
					fTimer += Time.deltaTime;
					yield return null;
					
				}while(fTimer < 10f / fAttackSpeed);

				anim.SetBool ("LooseBow", true);
				yield return new WaitForSeconds (0.25f);

			} else {
				if (GetComponent<Unit>().m_bFlipped)
					iTween.RotateTo (AttackPart, iTween.Hash ("z", -100f, "time", fAttackSpeed * 0.2f, "islocal", true));
				else
					iTween.RotateTo (AttackPart, iTween.Hash ("z", 100f, "time", fAttackSpeed * 0.2f, "islocal", true));
			
				iTween.MoveTo (AttackPart, iTween.Hash ("x", -0.005f, "y", 0.206f, "time", fAttackSpeed * 0.2f, "islocal", true));
				yield return new WaitForSeconds ((fAttackSpeed * 0.2f) + (fAttackSpeed * 0.1f));

				if (targetPart.m_bDestroied) {
					AttackPart.transform.localRotation = originRotate;
					AttackPart.transform.localPosition = originPos;
					continue;
				}
				iTween.RotateTo (AttackPart, iTween.Hash ("z", 0f, "time", fAttackSpeed * 0.02f, "islocal", true));
				iTween.MoveTo (AttackPart, iTween.Hash ("x", originPos.x, "y", originPos.y, "time", fAttackSpeed * 0.02f, "islocal", true));

				if (transform.Find ("Hand_L") == null) {
					SoundMgr.getInstance.PlaySfx ("weapon_twohand");
				} else {
					SoundMgr.getInstance.PlaySfx ("weapon_onehand");
				}

				yield return new WaitForSeconds (fAttackSpeed * 0.02f);
				if (targetPart.m_bDestroied) {
					AttackPart.transform.localRotation = originRotate;
					AttackPart.transform.localPosition = originPos;
					continue;
				}

				StartCoroutine (Attack (m_target, fDamage, false));
				yield return new WaitForSeconds (fAttackSpeed * 0.1f);
			}
		};

		if (attackPart.m_weaponType == WEAPON_TYPE.BOW) {
			anim.SetBool ("Draw_Bow", false);
		}
	}

}
