using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DamageUI : MonoBehaviour {
	public float m_fDamage;
	public bool m_bMinus;
	public bool m_bDodge;

	// Use this for initialization
	void Start () {

		if (!m_bDodge) {
			if (m_bMinus) {
				transform.GetChild (0).GetComponent<UILabel> ().text = "-" + m_fDamage;
			} else {
				transform.GetChild (0).GetComponent<UILabel> ().text = "+" + m_fDamage;
				transform.GetChild (0).GetComponent<UILabel> ().color = Color.green;
			}
		} else {
			transform.GetChild (0).GetComponent<UILabel> ().text = Localization.Get("Dodge") + "!";
			transform.GetChild (0).GetComponent<UILabel> ().color = Color.white;
		}

		StartCoroutine (DestroyThis ());
	}

	IEnumerator DestroyThis()
	{
		yield return new WaitForSeconds (1f);

		Destroy (gameObject);
	}

}
