using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Part : MonoBehaviour {

	public float m_fHealth; // Health
	public bool m_bAttackAvailable; //Can hit enemy?
	public float m_fAttackDmg; //Damage
	public bool m_bFriendly; //아군?
	public Color m_colorLine; //공격 이펙트 줄 색
	public bool m_bDestroied;

	public int m_iMove; //턴 당 몇번 움직일 수 있는지

	public DIRECTION m_headingDirection;

	void Attack()
	{
		if (!m_bAttackAvailable || m_bDestroied)
			return;

		if (m_bFriendly) {
			Transform EnemyParent = GameObject.Find ("Enemies").transform;

			for (int i = 0; i < EnemyParent.childCount; ++i) {
				GameObject tmpPart = EnemyParent.GetChild (i).gameObject;
				GridMgr grid = GridMgr.getInstance;

				if (grid.GetGridIdx (transform.position) % grid.m_iXcount == grid.GetGridIdx (tmpPart.transform.position) % grid.m_iXcount) { //세로 일치
					if(tmpPart.GetComponent<Part>() != null)
						StartCoroutine(tmpPart.GetComponent<Part>().Damaged(m_fAttackDmg, gameObject));
				}else if(grid.GetGridIdx (transform.position) / grid.m_iXcount == grid.GetGridIdx (tmpPart.transform.position) / grid.m_iXcount){ //가로 일치
					if(tmpPart.GetComponent<Part>() != null)
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
					if(tmpPart.GetComponent<Part>() != null)
						StartCoroutine(tmpPart.GetComponent<Part>().Damaged(m_fAttackDmg, gameObject));
				}else if(grid.GetGridIdx (transform.position) / grid.m_iXcount == grid.GetGridIdx (tmpPart.transform.position) / grid.m_iXcount){ //가로 일치
					if(tmpPart.GetComponent<Part>() != null)
						StartCoroutine(tmpPart.GetComponent<Part>().Damaged(m_fAttackDmg, gameObject));
				}
			}

		}
	}


	public IEnumerator Damaged(float fDamage, GameObject Attakcer)
	{
		if (m_bDestroied)
			yield break;

		yield return new WaitForSeconds (Random.Range(0f, 0.75f));

		Color originColor = GetComponent<SpriteRenderer> ().color;

		GetComponent<SpriteRenderer> ().color = Color.red;
		iTween.ShakePosition (gameObject, iTween.Hash ("x", 0.05f, "y", 0.05f, "time", 0.5f));
		DrawLine (Attakcer.transform.position, transform.position, Attakcer.GetComponent<Part>().m_colorLine, 0.5f);
		yield return new WaitForSeconds (0.5f);

		GetComponent<SpriteRenderer> ().color = originColor;

		m_fHealth -= fDamage;

		if (m_fHealth <= 0f) {
			GetComponent<SpriteRenderer> ().color = new Color (218/255f, 118/255f, 118/255f);
			m_bDestroied = true;
		}
	}

	IEnumerator Assemble()
	{
		Vector2 mousePosition = Vector2.zero;
		BoxCollider2D collider2D = GetComponent<BoxCollider2D> ();
		Vector3 OriginPos = transform.position;
		
		Core core = GameObject.Find ("Core").GetComponent<Core> ();
		core.CalculateStickableSeat ();
		bool bFollowCursor = false;
		
		GridMgr grid = GridMgr.getInstance;
		
		do{
			mousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
			if(Input.GetMouseButtonDown(0) && collider2D.OverlapPoint(mousePosition))
			{
				bFollowCursor = true;
			}
			
			if(bFollowCursor && Input.GetMouseButton(0)) //클릭시 따라다니게
			{
				transform.position = mousePosition;
				
				for(int i = 0 ; i < core.m_StickAvailableSeat.Count; ++i)
				{
					if(core.m_StickAvailableSeat[i].Equals(grid.GetGridIdx(transform.position)))
					{
						transform.position = grid.GetPosOfIdx(core.m_StickAvailableSeat[i]);
					}
				}
			}
			
			if(bFollowCursor && Input.GetMouseButtonUp(0))//클릭 뗏을때
			{
				bool bToOrigin = true;
				
				for(int i = 0 ; i < core.m_StickAvailableSeat.Count; ++i)
				{
					if(core.m_StickAvailableSeat[i].Equals(grid.GetGridIdx(transform.position))) // Stick!!!!!
					{
						transform.position = grid.GetPosOfIdx(core.m_StickAvailableSeat[i]);
						bToOrigin = false;
						transform.parent = GameObject.Find("Core").transform;
						GetComponent<SpriteRenderer>().color = transform.parent.GetComponent<Core>().m_colorLine;

						Part part = gameObject.AddComponent<Part>();
						part.m_fHealth = 10;
						part.m_fAttackDmg = 1;
						part.m_bFriendly = true;
						part.m_bAttackAvailable = true;
						part.m_colorLine = transform.parent.GetComponent<Core>().m_colorLine;
						part.m_headingDirection = DIRECTION.EVERYWHERE;

						Destroy(GetComponent<Enemy>());
					}
				}
				
				if(bToOrigin)
				{
					transform.position = OriginPos;
				}
				
				core.CalculateStickableSeat ();
				
				bFollowCursor = false;
			}
			
			yield return null;
		}while(true);
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
