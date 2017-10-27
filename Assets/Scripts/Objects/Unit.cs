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

	void Start()
	{
		StartCoroutine (CoreTangleCheck ());
		m_fCurHealth = m_fHealth;
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
			transform.GetChild(i).GetComponent<SpriteRenderer>().color = Color.white;
			transform.GetChild(i).GetComponent<SpriteRenderer>().sprite = ObjectFactory.getInstance.m_sprite_meat;

			transform.GetChild(i).GetComponent<Rigidbody2D>().AddForce((transform.GetChild(i).position - bodyPos ) * 10f, ForceMode2D.Impulse);
			transform.GetChild(i).GetComponent<Rigidbody2D>().AddTorque(Random.Range(0f, 30f));
			transform.GetChild(i).GetComponent<SpriteRenderer>().color = new Color(160/255f,160/255f,160/255f);

			StartCoroutine(ChangeParentToField(transform.GetChild(i).gameObject));
		}

		StartCoroutine (DestroyThis ());
	}

	public IEnumerator Groggy(){
		m_bGroggy = true;

		for (int i = 0; i < transform.childCount; ++i) {
			transform.GetChild (i).GetComponent<SpriteRenderer> ().color = new Color(128/255f, 171/255f, 255/255f);
		}
		GetComponent<FSM_Enemy> ().m_AiState = AI_STATE.DISABLED;

		float fGroggyTime = 2f;
		yield return new WaitForSeconds (fGroggyTime);

		if (GetComponent<FSM_Enemy> ().m_AiState == AI_STATE.EATEN)
			yield break;

		Death ();

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

			if (m_bGroggy && tangled.m_bTangledReady && Input.GetMouseButton (0) && collider2D.OverlapPoint (mousePosition) && core.m_EatenObject == null) { //Eatten by core
				GetComponent<FSM_Enemy> ().m_AiState = AI_STATE.EATEN;

				m_bEaten = true;
				core.m_EatenObject = gameObject;

				StartCoroutine(GameObject.Find("Core").GetComponent<Core>().Eat(gameObject));
				tangled.TangledAttack(transform);

			} else if (!m_bGroggy && tangled.m_bTangledReady && Input.GetMouseButton (0) && collider2D.OverlapPoint (mousePosition)) { // Hit by core

				tangled.TangledAttack(transform);
				m_fCurHealth -= GameObject.Find("Core").GetComponent<Core>().m_fAttackDmg;
				ObjectFactory.getInstance.Create_DamageUI (gameObject, GameObject.Find("Core").GetComponent<Core>().m_fAttackDmg, true);

				if (m_fCurHealth <= 0) {
					m_fCurHealth = 0;
					StartCoroutine (Groggy ());
				}
			}

			yield return null;
		}
	}

	public IEnumerator DestroyThis()
	{
		yield return null;
		yield return null;

		BattleSceneMgr.getInstance.EnemyEliminatedCheck ();
		Destroy (GetComponent<FSM_Enemy> ().m_objHealthBar);
		Destroy (gameObject);
	}
}
