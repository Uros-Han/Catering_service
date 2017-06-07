using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Unit : MonoBehaviour {

	public IEnumerator Death()
	{

		Transform FieldTrans = GameObject.Find ("Field").transform;
		Vector3 bodyPos = transform.FindChild ("Body").position;
		Vector3 RandomPos = new Vector3 (Random.Range (-0.1f, 0.1f), Random.Range (-0.1f, 0.1f));
		bodyPos += RandomPos;

		GetComponent<FSM_Enemy> ().StopAllCoroutines ();
		for(int i = 0 ; i < transform.childCount; ++i)
		{
			transform.GetChild(i).GetComponent<Rigidbody2D>().AddForce((transform.GetChild(i).position - bodyPos ) * 10f, ForceMode2D.Impulse);
			transform.GetChild(i).GetComponent<Rigidbody2D>().AddTorque(Random.Range(0f, 30f));
			transform.GetChild(i).GetComponent<SpriteRenderer>().color = new Color(160/255f,160/255f,160/255f);

			StartCoroutine(ChangeParentToField(transform.GetChild(i).gameObject));
		}

		yield return null;
		yield return null;

		Destroy (gameObject);
	}

	IEnumerator ChangeParentToField(GameObject target)
	{
		yield return null;
		target.transform.parent = GameObject.Find ("Field").transform;
		BattleSceneMgr.getInstance.OnField(target);
	}

	void Update()
	{
		if (Input.GetKeyDown(KeyCode.Space)) {
			StartCoroutine(Death());
		}
	}
}
