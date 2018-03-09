using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Projectile : MonoBehaviour {

	public GameObject m_objTarget;
	public float m_fSpeed;
	public float m_fDamage;

	bool m_bMissed = false;
	Vector3 m_vecMissPos;

	// Use this for initialization
	void Start () {
		m_fSpeed = 1f;

		if (transform.position.x < m_objTarget.transform.position.x)
			GetComponent<SpriteRenderer> ().flipX = true;
		
		StartCoroutine (Flying ());
	}

	void CalculateHitPos()
	{
		//TODO : Accuracy stat
		if(Random.Range(0f,100f) < 30f){ // Missed
			m_bMissed = true;
			m_vecMissPos = Vector3.Normalize(new Vector3 (Random.Range(-1f, 1f), Random.Range(-1f, 1f))) * 0.1f;
		}
	}

	Vector3 GetNormalVector(Vector3 progressVec) //법선 벡터
	{
		if (progressVec.x < 0f)
			progressVec = new Vector3 (-progressVec.x, progressVec.y);
		else
			progressVec = new Vector3 (progressVec.x, -progressVec.y);

		return Vector3.Normalize( new Vector3 (-progressVec.y, progressVec.x));
	}


	IEnumerator Flying()
	{
		CalculateHitPos ();

		Vector3 originPos = transform.position;
		bool bTrailOn = false;
		float fNormalHeight = 0.1f;
		float fTime = 0f;

		do{
			if(!bTrailOn && fTime > 0f)
			{
				bTrailOn = true;
				GetComponent<TrailRenderer> ().time = 0.5f;
			}

			if(!m_bMissed)
				transform.position = BezierCurve(fTime, originPos, GetNormalVector((m_objTarget.transform.position - originPos)/2f) * fNormalHeight , m_objTarget.transform.position);
			else
				transform.position = BezierCurve(fTime, originPos, GetNormalVector((m_objTarget.transform.position + m_vecMissPos - originPos)/2f) * fNormalHeight , m_objTarget.transform.position + m_vecMissPos);
			
			fTime += Time.deltaTime * m_fSpeed;
			
			yield return null;
		}while(fTime < 1f);

		//Hit Enemy
		Destroy(gameObject);

	}

	Vector3 BezierCurve( float t, Vector3 p0 , Vector3 p1 ) {
		return ( ( 1 - t  ) * p0 ) + ( ( t  ) * p1 );
	}

	Vector3 BezierCurve( float t, Vector3 p0 , Vector3 p1 , Vector3 p2 ) {
		Vector3 pa = BezierCurve( t , p0, p1 );
		Vector3 pb = BezierCurve( t , p1, p2 );
		return BezierCurve( t , pa , pb );
	}
}
