using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Unit : MonoBehaviour {

	public float m_fHealth;
	public float m_fCurHealth;

	public float m_fAttackDmg;
	public float m_fMoveSpeed;
	public ENEMY_TYPE m_enemyType;

	public bool m_bEaten = false;
	public bool m_bGroggy = false;
	public bool m_bCatched = false;
	public bool m_bFlipped = false;

	void Start()
	{
		if(!Application.loadedLevelName.Equals("Main"))
			StartCoroutine (CoreTangleCheck ());
		m_fCurHealth = m_fHealth;

		StartCoroutine (FlipCheck ());
	}

	public void Death()
	{
		if (GetComponent<FSM_Enemy> ().m_AiState == AI_STATE.EATEN)
			return;
		
		Transform FieldTrans = GameObject.Find ("Field").transform;
		Vector3 bodyPos = transform.position;
		Vector3 RandomPos = new Vector3 (Random.Range (-0.1f, 0.1f), Random.Range (-0.1f, 0.1f));
		bodyPos += RandomPos;

		GetComponent<FSM_Enemy> ().StopAllCoroutines ();
		for(int i = 0 ; i < transform.childCount; ++i)
		{
			if (transform.GetChild (i).GetComponent<Animator> () != null)
				transform.GetChild (i).GetComponent<Animator> ().enabled = false;
			
			transform.GetChild(i).GetComponent<SpriteRenderer>().color = Color.white;
			transform.GetChild(i).GetComponent<SpriteRenderer>().sprite = ObjectFactory.getInstance.m_sprite_meat;

			transform.GetChild(i).GetComponent<Rigidbody2D>().AddForce((transform.GetChild(i).position - bodyPos ) * 10f, ForceMode2D.Impulse);
			transform.GetChild(i).GetComponent<Rigidbody2D>().AddTorque(Random.Range(0f, 30f));
			transform.GetChild(i).GetComponent<SpriteRenderer>().color = new Color(160/255f,160/255f,160/255f);

			StartCoroutine(ChangeParentToField(transform.GetChild(i).gameObject));
		}

		StartCoroutine (DestroyThis ());
	}

	IEnumerator FlipCheck()
	{
		Transform coreTrans = GameObject.Find ("Player").transform.GetChild(0);

		do {
			if (!m_bFlipped && coreTrans.position.x > transform.position.x) {
				yield return StartCoroutine(SpriteFlip());
			} else if(m_bFlipped && coreTrans.position.x < transform.position.x){
				yield return StartCoroutine(SpriteFlip());
			}

			yield return null;

		} while(true);
	}

	IEnumerator ChangeParentToField(GameObject target)
	{
		yield return null;
		target.transform.parent = GameObject.Find ("Field").transform;
		BattleSceneMgr.getInstance.OnField(target);
	}

	void Update()
	{
		if (Input.GetKeyDown (KeyCode.Space)) {
			Death ();
		}
	}

	IEnumerator CoreTangleCheck()
	{
		Vector2 mousePosition = Vector2.zero;
		CircleCollider2D collider2D = GetComponent<CircleCollider2D> ();
		Core core = GameObject.Find ("Core").GetComponent<Core> ();
		Tangled tangled = GameObject.Find ("Tangled").GetComponent<Tangled> ();
		BattleSceneMgr battleScene = BattleSceneMgr.getInstance;

		while (!m_bEaten) {
			mousePosition = Camera.main.ScreenToWorldPoint (Input.mousePosition);
			transform.localRotation = Quaternion.AngleAxis (0, Vector3.forward);

			if (battleScene.m_mouseState.Equals (MOUSE_STATE.HEAL)) {
				yield return null;
				continue;
			}

			if (tangled.m_bTangledReady && Input.GetMouseButton (0) && collider2D.OverlapPoint (mousePosition)) {
				tangled.TangledDrag(transform);
			}

//			if (m_bGroggy && tangled.m_bTangledReady && Input.GetMouseButton (0) && collider2D.OverlapPoint (mousePosition) && core.m_EatenObject == null) { //Eatten by core
//
//				GetComponent<FSM_Enemy> ().m_AiState = AI_STATE.EATEN;
//
//				m_bEaten = true;
//				core.m_EatenObject = gameObject;
//
//				StartCoroutine(GameObject.Find("Core").GetComponent<Core>().Eat(gameObject));
//				tangled.TangledAttack(transform);
//
//			} else if (!m_bGroggy && tangled.m_bTangledReady && Input.GetMouseButton (0) && collider2D.OverlapPoint (mousePosition)) { // Hit by core
//
//				tangled.TangledAttack(transform);
//				m_fCurHealth -= GameObject.Find("Core").GetComponent<Core>().m_fAttackDmg;
//
//				SoundMgr.getInstance.PlaySfx ("impact_blade");
//				SoundMgr.getInstance.PlaySfx ("human_scream");
//
//				ObjectFactory.getInstance.Create_DamageUI (gameObject, GameObject.Find("Core").GetComponent<Core>().m_fAttackDmg, true);
//
//				if (m_fCurHealth <= 0) {
//					m_fCurHealth = 0;
//					GetComponent<FSM_Enemy> ().SetState (AI_STATE.GROGGY);
//				}
//			}

			yield return null;
		}
	}

	IEnumerator SpriteFlip(){


		if (!m_bFlipped) {
			transform.localScale = new Vector3 (-1, 1, 1);
			//			for (int i = 0; i < transform.childCount; ++i) {
			//				transform.GetChild (i).localPosition = new Vector3 (-transform.GetChild (i).localPosition.x, transform.GetChild (i).localPosition.y);
			//				transform.GetChild (i).localRotation = Quaternion.AngleAxis (-transform.GetChild (i).localRotation.z, Vector3.forward);
			//				transform.GetChild (i).GetComponent<SpriteRenderer> ().flipX = true;
			//			}
			//
			//			for (int i = 0; i < m_AttackAvailableParts.Count; ++i) {
			//				Part attackPart = m_AttackAvailableParts [i].GetComponent<Part> ();
			//				if (attackPart.m_weaponType == WEAPON_TYPE.BOW) {
			//					attackPart.GetComponent<Animator> ().SetBool ("HeadingRight", true);
			//				}
			//			}
			m_bFlipped = true;
		} else {
			transform.localScale = new Vector3 (1, 1, 1);
			//			for (int i = 0; i < transform.childCount; ++i) {
			//				transform.GetChild (i).localPosition = new Vector3 (-transform.GetChild (i).localPosition.x, transform.GetChild (i).localPosition.y);
			//				transform.GetChild (i).localRotation = Quaternion.AngleAxis (-transform.GetChild (i).localRotation.z, Vector3.forward);
			//				transform.GetChild (i).GetComponent<SpriteRenderer> ().flipX = false;
			//			}
			//
			//			for (int i = 0; i < m_AttackAvailableParts.Count; ++i) {
			//				Part attackPart = m_AttackAvailableParts [i].GetComponent<Part> ();
			//				if (attackPart.m_weaponType == WEAPON_TYPE.BOW) {
			//					attackPart.GetComponent<Animator> ().SetBool ("HeadingRight", false);
			//				}
			//			}
			m_bFlipped = false;
		}

		yield return null;

	}

	public IEnumerator DestroyThis(float fDelay = 0.01f)
	{
		transform.parent = GameObject.Find ("Field").transform;
		Destroy (GetComponent<FSM_Enemy> ().m_objHealthBar);

		yield return new WaitForSeconds (fDelay);

		BattleSceneMgr.getInstance.EnemyEliminatedCheck ();
		Destroy (gameObject);
	}
}
