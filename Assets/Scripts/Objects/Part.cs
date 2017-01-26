using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Part : MonoBehaviour {

	public float m_fHealth;
	public bool m_bAttackAvailable;
	public float m_fAttackDmg;
	public bool m_bFriendly;
	public Color m_colorLine;

	void Attack()
	{
		if (!m_bAttackAvailable)
			return;

		if (m_bFriendly) {
			Transform EnemyParent = GameObject.Find ("Enemies").transform;

			for (int i = 0; i < EnemyParent.childCount; ++i) {
				GameObject tmpPart = EnemyParent.GetChild (i).gameObject;
				GridMgr grid = GridMgr.getInstance;

				if (grid.GetGridIdx (transform.position) % grid.m_iXcount == grid.GetGridIdx (tmpPart.transform.position) % grid.m_iXcount) { //세로 일치
					StartCoroutine(tmpPart.GetComponent<Part>().Damaged(m_fAttackDmg, gameObject));
				}else if(grid.GetGridIdx (transform.position) / grid.m_iXcount == grid.GetGridIdx (tmpPart.transform.position) / grid.m_iXcount){ //가로 일치
					StartCoroutine(tmpPart.GetComponent<Part>().Damaged(m_fAttackDmg, gameObject));
				}
			}

		} else {

			Transform Core = GameObject.Find ("Core").transform;

			for (int i = 0; i < Core.childCount + 1; ++i) {
				
				GameObject tmpPart;

				if (i == Core.childCount) 
					tmpPart = Core.gameObject;
				else
					tmpPart = Core.GetChild (i).gameObject;

				GridMgr grid = GridMgr.getInstance;

				if (grid.GetGridIdx (transform.position) % grid.m_iXcount == grid.GetGridIdx (tmpPart.transform.position) % grid.m_iXcount) { //세로 일치
					StartCoroutine(tmpPart.GetComponent<Part>().Damaged(m_fAttackDmg, gameObject));
				}else if(grid.GetGridIdx (transform.position) / grid.m_iXcount == grid.GetGridIdx (tmpPart.transform.position) / grid.m_iXcount){ //가로 일치
					StartCoroutine(tmpPart.GetComponent<Part>().Damaged(m_fAttackDmg, gameObject));
				}
			}

		}
	}


	public IEnumerator Damaged(float fDamage, GameObject Attakcer)
	{
		yield return new WaitForSeconds (Random.Range(0f, 0.75f));

		GetComponent<SpriteRenderer> ().color = Color.red;
		iTween.ShakePosition (gameObject, iTween.Hash ("x", 0.05f, "y", 0.05f, "time", 0.5f, "islocal", true));
		DrawLine (Attakcer.transform.position, transform.position, Attakcer.GetComponent<Part>().m_colorLine, 0.5f);
		yield return new WaitForSeconds (0.5f);

		GetComponent<SpriteRenderer> ().color = Color.white;

		m_fHealth -= fDamage;

		if (m_fHealth <= 0f) {
			GetComponent<SpriteRenderer> ().color = new Color (218/255f, 118/255f, 118/255f);
			Destroy (GetComponent<Part> ());
		}
	}


	void DrawLine(Vector3 start, Vector3 end, Color color, float duration = 0.2f)
	{
		GameObject myLine = new GameObject();
		myLine.transform.position = start;
		myLine.AddComponent<LineRenderer>();
		LineRenderer lr = myLine.GetComponent<LineRenderer>();
		lr.material = new Material(Shader.Find("Sprites/Default"));
		lr.SetColors(color, color);
		lr.SetWidth(0.05f, 0.05f);
		lr.SetPosition(0, start);
		lr.SetPosition(1, end);
		lr.sortingLayerName = "Objects";
		GameObject.Destroy(myLine, duration);
	}
}
