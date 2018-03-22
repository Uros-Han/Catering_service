using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DamageUI : MonoBehaviour {
	public float m_fDamage;
	public bool m_bMinus;
	public bool m_bDodge;
    public float m_fBlockDmg=0;

	// Use this for initialization
	void Start () {

		if (!m_bDodge) {
			if (m_bMinus) {
                transform.GetChild (0).GetComponent<UILabel> ().text = m_fDamage.ToString();
			} else {
                transform.GetChild (0).GetComponent<UILabel> ().text = m_fDamage.ToString();
				transform.GetChild (0).GetComponent<UILabel> ().color = Color.green;
			}
		} else {
			transform.GetChild (0).GetComponent<UILabel> ().text = Localization.Get("Dodge") + "!";
            transform.GetChild(0).GetComponent<UILabel>().effectColor = Color.white;
			transform.GetChild (0).GetComponent<UILabel> ().color = Color.white;
		}


        int iBlkDmg = (int)m_fBlockDmg;
        if (iBlkDmg > 0)
        {
            transform.GetChild(1).gameObject.SetActive(true);
            transform.GetChild(1).Find("DfsCount").GetComponent<UILabel>().text = iBlkDmg.ToString();
        }else
            transform.GetChild(1).gameObject.SetActive(false);

		StartCoroutine (DestroyThis ());
	}

	IEnumerator DestroyThis()
	{
		yield return new WaitForSeconds (1.5f);

		Destroy (gameObject);
	}

}
