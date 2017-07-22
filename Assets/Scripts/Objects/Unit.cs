using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Unit : MonoBehaviour {

	public float m_fHealth;
	public float m_fAttackDmg;
	public float m_fMoveSpeed;

	void Start()
	{
		StartCoroutine (CheckUnitEaten ());
	}

	public void Death()
	{

		Transform FieldTrans = GameObject.Find ("Field").transform;
		Vector3 bodyPos = transform.FindChild ("Body").position;
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

	IEnumerator CheckUnitEaten()
	{
		bool bEaten = false;
		Vector2 mousePosition = Vector2.zero;
		BoxCollider2D collider2D = GetComponent<BoxCollider2D> ();
		Core core = GameObject.Find ("Core").GetComponent<Core> ();

		while (!bEaten) {
			mousePosition = Camera.main.ScreenToWorldPoint (Input.mousePosition);
			if (Input.GetMouseButtonDown (0) && collider2D.OverlapPoint (mousePosition) && core.m_EatenObject == null) {
				bEaten = true;
				core.m_EatenObject = gameObject;

				StartCoroutine(GameObject.Find("Core").GetComponent<Core>().Eat(gameObject));
			}

			yield return null;
		}
	}

	public IEnumerator DestroyThis()
	{
		yield return null;
		yield return null;

		BattleSceneMgr.getInstance.EnemyEliminatedCheck ();
		Destroy (gameObject);
	}
}
