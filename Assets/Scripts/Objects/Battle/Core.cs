using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Core : Part {

	public int m_MoveCount = 1;
	public bool[] m_bControl;

	// Use this for initialization
	void Start () {
//		StartCoroutine (UserControl());

		m_bAttackAvailable = true;
		m_StickAvailableSeat = new List<int> ();

		m_bControl = new bool[4];

		m_fOriginEmissionRate = GetComponent<SpriteParticleEmitter.DynamicEmitter> ().EmissionRate;
		m_fCurHealth = m_fHealth;

		if(!m_dicStat.ContainsKey("Health"))
			m_dicStat.Add ("Health", m_fHealth);
		if(!m_dicStat.ContainsKey("Defense"))
			m_dicStat.Add ("Defense", 0);
		if(!m_dicStat.ContainsKey("Dodge"))
			m_dicStat.Add ("Dodge", 0);
		if (m_bAttackAvailable && !m_dicStat.ContainsKey ("Attack"))
			m_dicStat.Add ("Attack", 1);

		m_lstStrBuff.Add ("CoreBuff");
	}

	void OnDestroy()
	{
		StopAllCoroutines ();
	}

	TURN_STATE m_beforeState;
	int m_iCoreIdx;
	public List<int> m_StickAvailableSeat;
	
	IEnumerator UserControl()
	{
		GameMgr gMgr = GameMgr.getInstance;

		while (true) {

			if(Input.GetKey(KeyCode.A))
			{
				transform.Translate(new Vector3(-1,0) * 0.005f);
			}else if(Input.GetKey(KeyCode.D))
			{
				transform.Translate(new Vector3(1,0) * 0.005f);
			}

			yield return null;
		};
	}

	void MoveEnemies(DIRECTION dir1, string strDir, float fDistance)
	{
		Transform EnemyTrans = GameObject.Find ("Enemies").transform;

		for (int i = 0; i < EnemyTrans.childCount; ++i) {
			if(3-(int)dir1 == (int)EnemyTrans.GetChild(i).GetComponent<Part>().m_headingDirection)
			{
//				EnemyTrans.GetChild(i).Translate(translateVal);
				if(strDir.Equals("x"))
					iTween.MoveTo(EnemyTrans.GetChild(i).gameObject, iTween.Hash(strDir , EnemyTrans.GetChild(i).position.x +fDistance, "islocal", false, "time", 0.25f, "easetype", "easeOutBack"));
				else
					iTween.MoveTo(EnemyTrans.GetChild(i).gameObject, iTween.Hash(strDir , EnemyTrans.GetChild(i).position.y +fDistance, "islocal", false, "time", 0.25f, "easetype", "easeOutBack"));
			}
		}

	}

	void MoveGridIdx()
	{
		GridMgr grid = GridMgr.getInstance;

		for (int i = 0; i < transform.childCount; ++i) {
			transform.GetChild(i).GetComponent<Part>().m_iGridIdx = grid.GetGridIdx(transform.GetChild(i).position);
		}

		m_iGridIdx = GridMgr.getInstance.GetGridIdx (transform.position);
	}

	int GetShortestDistance(int iStart, int iEnd, bool bWithLabel = false)
	{
		AStar.getInstance.AStarStart (iStart, iEnd);

		int iDistance = AStar.getInstance.m_BestList.Count;

		if (iStart == iEnd)
			iDistance = 0;

		if(bWithLabel)
			GameObject.Find ("CanMove").GetComponent<UILabel> ().text = "MOVE : " + (m_MoveCount - iDistance);

		return iDistance;
	}

	public GameObject m_EatenObject = null;
	public IEnumerator Eat(GameObject target)
	{
//		iTween.MoveTo(m_EatenObject, iTween.Hash("x", transform.position.x, "y", transform.position.y, "time" , 0.5f, "easetype", "easeInSine"));
//		m_EatenObject.GetComponent<FSM_Enemy> ().m_AiState = AI_STATE.EATEN;
		Tangled tangled = GameObject.Find ("Tangled").GetComponent<Tangled> ();
		float fTime = 0;
		yield return new WaitForSeconds (0.5f);
		Destroy (m_EatenObject.GetComponent<FSM_Enemy> ().m_objHealthBar);

		do {
			m_EatenObject.transform.position = tangled.m_vecTangledEdge;
			fTime += Time.deltaTime;
			yield return null;
		} while(fTime < 0.5f);

		m_EatenObject.SetActive (false);
		iTween.ScaleTo(gameObject, iTween.Hash("x", 2f, "y", 2f, "time" , 1f, "easetype", "easeOutElastic"));
		StartCoroutine (Digest ());
	}

	public IEnumerator Digest()
	{
		float fEatenEnemyHealth = m_EatenObject.GetComponent<Unit>().m_fHealth;
		while(fEatenEnemyHealth > 0f){

			fEatenEnemyHealth -= 1f;

			yield return new WaitForSeconds(1f);
		}

		//Digest done!

		m_EatenObject.GetComponent<Unit> ().m_fHealth = 0f;
		iTween.ScaleTo(gameObject, iTween.Hash("x", 1f, "y", 1f, "time" , 1f, "easetype", "easeInElastic"));

		Transform morgueTrans = GameObject.Find ("Morgue").transform;
		for (int i =0; i< m_EatenObject.transform.childCount; ++i) {

			if (m_EatenObject.transform.GetChild (i).GetComponent<Part> ().m_strNameKey.Equals ("시민 팔")) {
				Destroy (m_EatenObject.transform.GetChild (i).gameObject);
				continue;
			}else if (Random.Range(0.0f,1.0f) < 0.3f && !m_EatenObject.GetComponent<Unit>().m_enemyType.Equals(ENEMY_TYPE.HERO)) {
				Destroy (m_EatenObject.transform.GetChild (i).gameObject);
				continue;
			}

			if(m_EatenObject.transform.GetChild(i).GetComponent<SpriteModifier>() != null)
				m_EatenObject.transform.GetChild(i).GetComponent<SpriteModifier>().SpriteModify();

			if(m_EatenObject.transform.GetChild(i).GetComponent<SpriteRenderer>().flipX)
				m_EatenObject.transform.GetChild(i).GetComponent<SpriteRenderer>().flipX = false;

			morgueTrans.GetComponent<Morgue>().AddBody(false,m_EatenObject.transform.GetChild(i).gameObject);

			if(m_EatenObject.transform.GetChild(i).gameObject.GetComponent<Part>().m_objHealthBar == null)
				m_EatenObject.transform.GetChild(i).gameObject.GetComponent<Part>().m_objHealthBar = ObjectFactory.getInstance.Create_HealthBar (m_EatenObject.transform.GetChild(i).gameObject);
		}

		StartCoroutine(m_EatenObject.GetComponent<Unit> ().DestroyThis ());
		m_EatenObject = null;
	}

	public void CalculateStickableSeat(bool bDragPart)
	{
		m_StickAvailableSeat.Clear ();
		List<int> TakenSeat = new List<int> ();
		
		int iPartGrid = 0;
		bool bEdgePart = false;
		GridMgr grid = GridMgr.getInstance;
		TakenSeat.Add (grid.GetGridIdx(transform.position));
		
		for (int i = 0; i < transform.parent.childCount; ++i) {
			bEdgePart = false;

			iPartGrid = grid.GetGridIdx(transform.parent.GetChild(i).position);
			bEdgePart = transform.parent.GetChild(i).GetComponent<Part>().m_bEdgePart;

			TakenSeat.Add(iPartGrid);

			///check A* CoreSide
			
			int iStart = iPartGrid;
			int iEnd = GridMgr.getInstance.GetGridIdx (transform.position);
			
			if (AStar.getInstance.AStarStart_CoreFind (iStart, iEnd) && !bEdgePart) { //코어 쪽 붙은애들에만 붙을수있음
				if(!m_StickAvailableSeat.Contains(iPartGrid-1))
					m_StickAvailableSeat.Add(iPartGrid-1);
				if(!m_StickAvailableSeat.Contains(iPartGrid+1))
					m_StickAvailableSeat.Add(iPartGrid+1);
				if(!m_StickAvailableSeat.Contains(iPartGrid-GridMgr.getInstance.m_iXcount))
					m_StickAvailableSeat.Add(iPartGrid-GridMgr.getInstance.m_iXcount);
				if(!m_StickAvailableSeat.Contains(iPartGrid+GridMgr.getInstance.m_iXcount))
					m_StickAvailableSeat.Add(iPartGrid+GridMgr.getInstance.m_iXcount);
			}

			for(int j = 0; j< TakenSeat.Count; ++j)
			{
				m_StickAvailableSeat.Remove(TakenSeat[j]);
			}
			
		}

		if (!bDragPart) {
			Transform StickableDot = GameObject.Find ("StickableDots").transform;

			for (int i = 0; i < StickableDot.childCount; ++i) {
				Destroy (StickableDot.GetChild (i).gameObject);
			}
		} else {
			for(int i = 0; i < m_StickAvailableSeat.Count; ++i)
			{
				ObjectFactory.getInstance.Create_StickableDot(m_StickAvailableSeat[i]);
			}
		}
	}
}
