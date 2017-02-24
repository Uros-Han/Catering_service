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
	public bool m_bEdgePart;
	public int m_iGridIdx;

	public int m_iMove; //턴 당 몇번 움직일 수 있는지

	public DIRECTION m_headingDirection;

	public void SetDirection()
	{
		switch (m_headingDirection) {
		case DIRECTION.UP:
			transform.localRotation = Quaternion.AngleAxis(180f, Vector3.forward);
			break;
			
		case DIRECTION.LEFT:
			transform.localRotation = Quaternion.AngleAxis(270f, Vector3.forward);
			break;
			
		case DIRECTION.RIGHT:
			transform.localRotation = Quaternion.AngleAxis(90f, Vector3.forward);
			break;
		}
	}

	public Coroutine AssembleRoutine;

	public void StopAssemble()
	{
		bStopAssemble = true;
	}

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
		yield return new WaitForSeconds (0.51f);

		GetComponent<SpriteRenderer> ().color = originColor;
		transform.position = GridMgr.getInstance.GetPosOfIdx(GridMgr.getInstance.GetGridIdx(transform.position));

		m_fHealth -= fDamage;

		if (m_fHealth <= 0f) {
			GetComponent<SpriteRenderer> ().color = new Color (218/255f, 118/255f, 118/255f);
			m_bDestroied = true;
		}
	}

	bool bStopAssemble = false;
	GameObject m_StickedPart = null;
	public IEnumerator Assemble()
	{
		if (gameObject.name.Equals ("Core"))
			yield break;

		Vector2 mousePosition = Vector2.zero;
		BoxCollider2D collider2D = GetComponent<BoxCollider2D> ();
		Vector3 OriginPos = transform.position;
		
		Core core = GameObject.Find ("Core").GetComponent<Core> ();
		core.CalculateStickableSeat (false);
		bool bFollowCursor = false;
		bool bParentWasCore = false;
		int iBeforeSeatIdx = -1;
		bStopAssemble = false;
		
		GridMgr grid = GridMgr.getInstance;
		DIRECTION m_BeforeheadingDirection = DIRECTION.EVERYWHERE;
		do{
			mousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
			if(Input.GetMouseButtonDown(0) && collider2D.OverlapPoint(mousePosition))
			{
				bFollowCursor = true;

				if(transform.parent.name.Equals("Core"))
				{
					transform.parent = GameObject.Find("Temp").transform;
					iBeforeSeatIdx = grid.GetGridIdx(transform.position);
					bParentWasCore = true;
				}

				if(bParentWasCore)
				{
					m_BeforeheadingDirection = m_headingDirection;
					GetComponent<SpriteSheet>().CheckAround(false, iBeforeSeatIdx);
				}

				GetComponent<SpriteRenderer>().sortingLayerName = "FrontObject";

				core.CalculateStickableSeat (true);
			}
			
			if(bFollowCursor && Input.GetMouseButton(0)) //클릭시 따라다니게
			{
				transform.position = mousePosition;
			

				for(int i = 0 ; i < core.m_StickAvailableSeat.Count; ++i)
				{
					if(core.m_StickAvailableSeat[i].Equals(grid.GetGridIdx(transform.position))) //드래그 중 붙을 수 있는 지역안에 들어옴
					{
						transform.position = grid.GetPosOfIdx(core.m_StickAvailableSeat[i]);

						//붙는방향으로 파츠 회전하도록
						Transform CoreTrans = GameObject.Find("Core").transform;
						GameObject ClosestPart = null;

						for(int j=0 ; j < CoreTrans.childCount + 1; ++j)
						{
							GameObject target;
							if(j == CoreTrans.childCount)
								target = CoreTrans.gameObject;
							else
								target = CoreTrans.GetChild(j).gameObject;

							if(ClosestPart == null)
								ClosestPart = target;

							if(!target.GetComponent<Part>().m_bEdgePart && Vector3.Distance(mousePosition , ClosestPart.transform.position) > Vector3.Distance(mousePosition, target.transform.position))
							{
								ClosestPart = target;
							}
						}

						int iIdx = grid.GetGridIdx(transform.position);
						int iTargetIdx = grid.GetGridIdx(ClosestPart.transform.position);

						if(iIdx + 1 == iTargetIdx){
							m_headingDirection = DIRECTION.LEFT;
							iTween.RotateTo(gameObject, iTween.Hash ("z", 270f, "time", 0.2f));
						}else if(iIdx - 1 == iTargetIdx){
							m_headingDirection = DIRECTION.RIGHT;
							iTween.RotateTo(gameObject, iTween.Hash ("z", 90f, "time", 0.2f));
						}else if(iIdx - grid.m_iXcount == iTargetIdx){
							m_headingDirection = DIRECTION.DOWN;
							iTween.RotateTo(gameObject, iTween.Hash ("z", 0f, "time", 0.2f));
						}else if(iIdx + grid.m_iXcount == iTargetIdx){
							m_headingDirection = DIRECTION.UP;
							iTween.RotateTo(gameObject, iTween.Hash ("z", 180f, "time", 0.2f));
						}
					}
				}

				if(m_objAleart != null)
					Destroy(m_objAleart);
			}
			
			if(bFollowCursor && Input.GetMouseButtonUp(0))//클릭 뗏을때
			{
				bool bToOrigin = true;

				iTween.Stop();
				transform.localRotation = Quaternion.AngleAxis (0f, Vector3.forward);

				for(int i = 0 ; i < core.m_StickAvailableSeat.Count; ++i)
				{
					if(core.m_StickAvailableSeat[i].Equals(grid.GetGridIdx(transform.position))) // Stick!!!!!
					{
						transform.position = grid.GetPosOfIdx(core.m_StickAvailableSeat[i]);
						bToOrigin = false;
						transform.parent = GameObject.Find("Core").transform;
//						StartCoroutine(ResetRotation());
						GetComponent<SpriteRenderer>().color = new Color(180/255f, 200/255f, 180/255f);
						OriginPos = transform.position;

						if(GetComponent<Enemy>() != null)
						{
							Part part = gameObject.AddComponent<Part>();
							part.m_fHealth = 10;
							part.m_fAttackDmg = 1;
							part.m_bFriendly = true;
							part.m_bAttackAvailable = true;
							part.m_colorLine = transform.parent.GetComponent<Core>().m_colorLine;
							part.m_iGridIdx = core.m_StickAvailableSeat[i];

							if(m_bEdgePart)
								part.m_headingDirection = m_headingDirection;
							else
								part.m_headingDirection = DIRECTION.EVERYWHERE;

							part.m_bEdgePart = GetComponent<Enemy>().m_bEdgePart;

							BattleSceneMgr.getInstance.StartAssembleAfter(gameObject); // part's assemble coroutine start
							
							Destroy(GetComponent<Enemy>());
						}

						if(bParentWasCore)
						{
							m_iGridIdx = core.m_StickAvailableSeat[i];

							if(!m_bEdgePart)
								m_headingDirection = DIRECTION.EVERYWHERE;

							GetComponent<SpriteSheet>().CheckAround(false, iBeforeSeatIdx);
							iBeforeSeatIdx = -1;
							bParentWasCore = false;

							transform.parent.BroadcastMessage("AmI_InCoreSide");
						}

						GetComponent<SpriteSheet>().CheckAround(false);

					}
				}
				
				if(bToOrigin)
				{
					transform.position = OriginPos;

					if(bParentWasCore)
					{
						transform.parent = GameObject.Find("Core").transform;

						transform.parent.BroadcastMessage("AmI_InCoreSide");
					}

					m_headingDirection = m_BeforeheadingDirection;
					GetComponent<SpriteSheet>().CheckAround(false);
				}
				
				core.CalculateStickableSeat (false);
				
				bFollowCursor = false;

				GetComponent<SpriteRenderer>().sortingLayerName = "Objects";
			}
			
			yield return null;
		}while(!bStopAssemble);
	}

	IEnumerator ResetRotation()
	{
		yield return null;
		yield return null;
		yield return null;

		transform.localRotation = Quaternion.AngleAxis (0f, Vector3.forward);
	}

	public GameObject m_objAleart;
	void AmI_InCoreSide()
	{
		int iStart = GridMgr.getInstance.GetGridIdx (transform.position);
		int iEnd = GridMgr.getInstance.GetGridIdx (GameObject.Find("Core").transform.position);

		///전부 닫혔는지 체크, 닫혔으면 느낌표
//		bool bAllClosed = true;
//		bool[] m_bOpenedDir = GetComponent<SpriteSheet> ().m_bOpenedDir;
//		
//		for(int i = 0; i < 4; ++i)
//		{
//			if(m_bOpenedDir[i])
//			{
//				bAllClosed = false;
//				break;
//			}
//		}

		if (!AStar.getInstance.AStarStart_CoreFind (iStart, iEnd)) {
			if(m_objAleart == null)
				m_objAleart = ObjectFactory.getInstance.Create_Aleart (iStart);
			else
				m_objAleart.transform.position = transform.position;
		} else {
			if(m_objAleart != null)
				Destroy(m_objAleart);
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
