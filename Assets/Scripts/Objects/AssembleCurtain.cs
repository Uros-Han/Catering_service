using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AssembleCurtain : MonoBehaviour {

	void CurtainOn()
	{
		StartCoroutine (Curtain (true));
	}

	void CurtainOff()
	{
		StartCoroutine (Curtain (false));
	}

	IEnumerator Curtain(bool bOn)
	{
		SpriteRenderer m_sprite;

		m_sprite = GetComponent<SpriteRenderer> ();
		float fTime = 0.5f;
		float fValue = 0f;
		float fResult = 0f;

		if (bOn) {
			fValue = 0f;

			do {
				fResult = Mathf.Lerp (0, 1, fValue / fTime);
				fValue += Time.deltaTime;
				m_sprite.color = new Color(m_sprite.color.r,m_sprite.color.g,m_sprite.color.b, fResult);
				yield return null;
			} while(fResult != 1);
		} else {
			fValue = fTime;

			do {
				fResult = Mathf.Lerp (0, 1, fValue / fTime);
				fValue -= Time.deltaTime;
				m_sprite.color = new Color(m_sprite.color.r,m_sprite.color.g,m_sprite.color.b, fResult);
				yield return null;
			} while(fResult != 0);
		}
	}
}
