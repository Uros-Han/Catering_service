using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TimeMgr : Singleton<TimeMgr> {

	public float m_fHour;
	public float m_fMinute;

	Light m_sunLight;

	// Use this for initialization
	void Start () {
		m_sunLight = GameObject.Find ("Light").GetComponent<Light> ();

		m_fHour = 6;

		InitLight ();
	}

	void InitLight()
	{
		switch ((int)m_fHour) {
		case 0:
			m_sunLight.color = Color.white;
			m_sunLight.intensity = 0f;
			break;

		case 6:
			m_sunLight.color = Color.white;
			m_sunLight.intensity = 0.75f;
			break;

		case 12:
			m_sunLight.color = Color.white;
			m_sunLight.intensity = 1.2f;
			break;

		case 18:
			m_sunLight.color = new Color (255 / 255f, 168 / 255f, 0 / 255f);
			m_sunLight.intensity = 1f;
			break;
		}
	}

	public IEnumerator Play()
	{
		GameObject.Find ("Party").BroadcastMessage ("Idling", SendMessageOptions.DontRequireReceiver);
		GameObject.Find ("Party").BroadcastMessage ("MoveOrder", SendMessageOptions.DontRequireReceiver);

		float fValue = 0f;
		float fTime = 1f;

		float fStart = m_fHour;
		float fTarget = m_fHour + 6f;

		Color colorStart = m_sunLight.color;
		Color colorTarget = Color.white;
		float fIntensityStart = m_sunLight.intensity;
		float fIntensityTarget = 0f;
	
		switch ((int)fTarget) {
		case 6:
			colorTarget = Color.white;
			fIntensityTarget = 0.75f;
			break;

		case 12:
			colorTarget = Color.white;
			fIntensityTarget = 1.2f;
			break;

		case 18:
			colorTarget = new Color (255 / 255f, 168 / 255f, 0 / 255f);
			fIntensityTarget = 1f;
			break;

		case 24:
			colorTarget = Color.white;
			fIntensityTarget = 0f;
			break;
		}

		do{
			yield return null;

			fValue += (Time.unscaledDeltaTime / fTime);

			if(fValue > 1f)
				fValue = 1f;

			float fSmoothStep = Mathf.SmoothStep(0.0f, 1.0f, Mathf.SmoothStep(0.0f, 1.0f, fValue));
			m_fHour = Mathf.Lerp(fStart, fTarget, fSmoothStep);
			m_sunLight.color = Color.Lerp(colorStart, colorTarget, fSmoothStep);
			m_sunLight.intensity = Mathf.Lerp(fIntensityStart, fIntensityTarget, fSmoothStep);

			m_fMinute = (m_fHour - (int)m_fHour) * 60f;

			if(m_fHour >= 24f)
			{
				m_fHour -= 24f;
			}

			if(m_fMinute >= 60f)
				m_fMinute -= 60f;

		}while(fValue != 1);

		if (fTarget == 24f)
			GameMgr.getInstance.m_iDay += 1;

		yield return new WaitForSeconds (0.1f);

		do{
			yield return null;
		}while(Application.loadedLevelName.Equals("Battle"));

		yield return new WaitForSeconds (0.25f);

		GameObject.Find ("PartyManager").GetComponent<PartyManager>().CalculateDepolying();
	}


}
