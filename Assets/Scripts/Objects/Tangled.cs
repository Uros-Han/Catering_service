using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tangled : MonoBehaviour {

	List<Vector3> m_listCurve;
	Vector3 m_vecBeforeP1;

	float m_fTangledPointX;
	float m_fTangledPointY;


	public float m_fTangledDelay;
	public bool m_bTangledReady;

	public Vector3 m_vecTangledEdge;

	// Use this for initialization
	void Start () {
		m_fTangledDelay = 1f;
		m_bTangledReady = true;

		m_listCurve = new List<Vector3> ();
		StartCoroutine (TangledPoint ());
	}
	 
	// Update is called once per frame
//	void Update () {
//		Vector3 mousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
//		mousePosition = new Vector3 (mousePosition.x, mousePosition.y, 0);
//
//		Vector3 m_vecP1 = new Vector3 (m_fTangledPointX, m_fTangledPointY);
//
//		m_listCurve.Clear ();
//		for (int i=0; i<transform.childCount; ++i) {
//			Destroy(transform.GetChild(i).gameObject);
//		}
//
//		for (int i=0; i<5; ++i) {
//			m_listCurve.Add(BezierCurve(i * 0.25f, Vector3.zero, m_vecP1, mousePosition));
//		}
//
//		for (int i=0; i<4; ++i) {
//			DrawLine(m_listCurve[i], m_listCurve[i+1], new Color(80/255f, 25/255f, 100/255f));
//		}
//
//		m_vecBeforeP1 = m_vecP1;
//	}

	IEnumerator TangledAttackDelay()
	{
		m_bTangledReady = false;
		yield return new WaitForSeconds (m_fTangledDelay);

		m_bTangledReady = true;
	}

	public void TangledAttack(Transform target)
	{
		StartCoroutine (TangledAttackDelay());
		StartCoroutine(TangledToTarget (target));
	}

	IEnumerator TangledToTarget(Transform targetTrans)
	{
		float fTime = 0f;
		Vector3 target;
		do{
			target = targetTrans.position;
			Vector3 m_vecP1 = new Vector3 (m_fTangledPointX, m_fTangledPointY);

			m_listCurve.Clear ();
			for (int i=0; i<transform.childCount; ++i) {
				Destroy(transform.GetChild(i).gameObject);
			}

			for (int i=0; i<5; ++i) {
				if(fTime < m_fTangledDelay/2f)
					m_listCurve.Add(BezierCurve(i * (fTime/2f), Vector3.zero, m_vecP1, target));
				else
					m_listCurve.Add(BezierCurve(i * ((m_fTangledDelay-fTime)/2f), Vector3.zero, m_vecP1, target));

				if(i == 4)
				{
					if(fTime < m_fTangledDelay/2f)
						m_vecTangledEdge = BezierCurve(i * (fTime/2f), Vector3.zero, m_vecP1, target);
					else
						m_vecTangledEdge = BezierCurve(i * ((m_fTangledDelay-fTime)/2f), Vector3.zero, m_vecP1, target);
				}
			}

			for (int i=0; i<4; ++i) {
				if(i == 3)
					DrawLine(m_listCurve[i], m_listCurve[i+1], new Color(80/255f, 25/255f, 100/255f), true);
				else
					DrawLine(m_listCurve[i], m_listCurve[i+1], new Color(80/255f, 25/255f, 100/255f));
			}

			m_vecBeforeP1 = m_vecP1;
			fTime += Time.deltaTime;
			yield return null;
		}while(fTime < 1f);
	}

	IEnumerator TangledPoint()
	{

		do {
			iTween.ValueTo (gameObject, iTween.Hash ("from", m_fTangledPointX, "to", Random.Range(-1f,1f), "Time", 1f, "onupdate", "TweenValueX"));
			iTween.ValueTo (gameObject, iTween.Hash ("from", m_fTangledPointY, "to", Random.Range(-1f,1f), "Time", 1f, "onupdate", "TweenValueY"));

			yield return new WaitForSeconds(0.5f);
		} while(true);
	}

	void TweenValueX(float newVal)
	{
		m_fTangledPointX = newVal;
	}

	void TweenValueY(float newVal)
	{
		m_fTangledPointY = newVal;
	}

	Vector3 BezierCurve( float t, Vector3 p0 , Vector3 p1 ) {
		return ( ( 1 - t  ) * p0 ) + ( ( t  ) * p1 );
	}
	
	Vector3 BezierCurve( float t, Vector3 p0 , Vector3 p1 , Vector3 p2 ) {
		Vector3 pa = BezierCurve( t , p0, p1 );
		Vector3 pb = BezierCurve( t , p1, p2 );
		return BezierCurve( t , pa , pb );
	}

	void DrawLine(Vector3 start, Vector3 end, Color color, bool bEdge = false)
	{
		GameObject myLine = new GameObject();
		myLine.transform.position = start;
		myLine.AddComponent<LineRenderer>();
		myLine.transform.parent = transform;
		LineRenderer lr = myLine.GetComponent<LineRenderer>();
		lr.material = new Material(Shader.Find("Sprites/Default"));
		lr.SetColors(color, color);
		if (bEdge)
			lr.SetWidth (0.05f, 0f);
		else
			lr.SetWidth(0.05f, 0.05f);
		lr.SetPosition(0, start);
		lr.SetPosition(1, end);
		lr.sortingLayerName = "Object";
		GameObject.Destroy(myLine, 0.25f);
	}
}
