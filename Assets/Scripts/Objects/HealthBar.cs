using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HealthBar : MonoBehaviour {

	bool m_bEnemy;
	Transform m_Target;
	UISlider m_slider;

	// Use this for initialization
	void Start () {
		if (!gameObject.name.Equals ("CoreHealthBar"))
			m_Target = GetComponent<UIFollowTarget> ().target;
		else
			m_Target = GameObject.Find ("Core").transform;
		
		m_slider = transform.GetChild(0).GetComponent<UISlider> ();

		if (m_Target.parent.name.Equals ("Enemies"))
			m_bEnemy = true;

		StartCoroutine (Health ());
	}

	IEnumerator Health()
	{
		Part part = null;
		Unit unit = null;

		if (m_bEnemy)
			unit = m_Target.GetComponent<Unit> ();
		else
			part = m_Target.GetComponent<Part> ();

		do{
			if (m_bEnemy)
				m_slider.value = unit.m_fCurHealth / unit.m_fHealth;
			else
				m_slider.value = part.m_fCurHealth / part.m_fHealth;
			
			yield return null;

		}while(m_Target != null);
	}
}
