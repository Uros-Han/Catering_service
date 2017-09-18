using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DamageUI : MonoBehaviour {
	public float m_fDamage;
	public bool m_bMinus;

	// Use this for initialization
	void Start () {
		if (m_bMinus) {
			transform.GetChild (0).GetComponent<UILabel> ().text = "-" + m_fDamage;
		} else {
			transform.GetChild (0).GetComponent<UILabel> ().text = "+" + m_fDamage;
			transform.GetChild (0).GetComponent<UILabel> ().color = Color.green;
		}

		StartCoroutine (DestroyThis ());
	}

	IEnumerator DestroyThis()
	{
		yield return new WaitForSeconds (1f);

		Destroy (gameObject);
	}

}
