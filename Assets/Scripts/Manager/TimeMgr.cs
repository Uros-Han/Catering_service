using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TimeMgr : Singleton<TimeMgr> {

	public float m_fHour;
	public float m_fMinute;

	// Use this for initialization
	void Start () {
		
	}

	public IEnumerator Play()
	{
		GameObject.Find ("Party").BroadcastMessage ("Idling", SendMessageOptions.DontRequireReceiver);
		GameObject.Find ("Party").BroadcastMessage ("MoveOrder", SendMessageOptions.DontRequireReceiver);
		GameObject.Find ("PartyManager").GetComponent<PartyManager>().CalculateDepolying();


		float fValue = 0f;
		float fTime = 1f;

		float fStart = m_fHour;
		float fTarget = m_fHour + 6f;

		do{
			yield return null;

			fValue += (Time.unscaledDeltaTime / fTime);

			if(fValue > 1f)
				fValue = 1f;

			m_fHour = Mathf.Lerp(fStart, fTarget, Mathf.SmoothStep(0.0f, 1.0f, Mathf.SmoothStep(0.0f, 1.0f, fValue)));
			m_fMinute = (m_fHour - (int)m_fHour) * 60f;

			if(m_fHour >= 24f)
				m_fHour -= 24f;

			if(m_fMinute >= 60f)
				m_fMinute -= 60f;

		}while(fValue != 1);
	}


}
