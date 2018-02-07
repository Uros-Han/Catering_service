using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Party : MonoBehaviour {
	public string m_strPartyName;
	public int m_iGridIdx;
	public int m_iDestinationIdx;
	public List<int> m_listMoveIdx;
	public List<int> m_list_enemyType;
	public int m_iHero = -1;

	public int m_iDepartureIdx;
	public GameObject m_departureLoc;

	public AI_WORLD_STATE m_state = AI_WORLD_STATE.END;
	public PARTY_TYPE m_partyType;

	public 	int m_iWaitTurnCount = 0;
	public	int m_iFatigue = 0;

	protected	bool m_bWasMovingBeforeChgedScene = false;

	protected	bool bLoaded = false;

	protected SpriteRenderer m_sprite_partyStateIndicator;

	// Use this for initialization
	protected virtual void Start () {

		if (m_iDestinationIdx != 0)
			bLoaded = true;

		m_listMoveIdx = new List<int> ();
		m_iGridIdx = GridMgr.getInstance.GetGridIdx (transform.position);

		if (!bLoaded) {
			m_iDepartureIdx = m_iGridIdx;
		}

		m_departureLoc = GameObject.Find ("Geo").transform.GetChild (m_iDepartureIdx).GetComponent<WorldGeo> ().m_worldIcon;

		if (!bLoaded)
			SetEnemyList ();

		m_sprite_partyStateIndicator = transform.Find ("PartyStateIndicator").GetComponent<SpriteRenderer>();
	}

	protected virtual void SetEnemyList()
	{
		m_list_enemyType = new List<int> ();

		m_list_enemyType = WorldGenerator.getInstance.DeployEnemyList (m_departureLoc.GetComponent<WorldIcon>().m_fPopulation / 2f, (WORLDICON_TYPE)m_departureLoc.GetComponent<WorldIcon>().m_iconType);
	
		if (m_iHero != -1) {
			m_list_enemyType.Add ((int)ENEMY_TYPE.HERO);
		}
	}

	protected void MoveOrder()
	{
		if (m_iWaitTurnCount == 0 && m_listMoveIdx.Count != 0)
			StartCoroutine (Move ());
	}

	protected IEnumerator Move()
	{
		GridMgr grid = GridMgr.getInstance;

		Vector3 destPos = grid.GetPosOfIdx(m_listMoveIdx[0]);
		iTween.MoveTo(gameObject, iTween.Hash("x", destPos.x, "y", destPos.y, "time", 1f, "easetype", "easeInSine"));

		yield return new WaitForSeconds(1f);

		m_iFatigue -= 1;
		m_iGridIdx = grid.GetGridIdx (transform.position);

		DrawPath ();

		if (m_iFatigue <= 0) {
			Camping ();
			yield break;
		}

		//Reach Destination
		if (m_partyType == PARTY_TYPE.CARAVAN) {
			if (m_listMoveIdx.Count == 1)
				ThinkWhatAreDoingNext ();
		}
	}

	protected void Idling()
	{
		if (m_iWaitTurnCount > 0)
			m_iWaitTurnCount -= 1;

		if(m_iWaitTurnCount == 0)
			SetDestination ();
	}

	protected void Camping()
	{
		m_iWaitTurnCount = Random.Range (2, 4);
		m_iFatigue = Random.Range (4, 8);

		m_state = AI_WORLD_STATE.CAMP;
		m_sprite_partyStateIndicator.sprite = ObjectFactory.getInstance.m_sheet_PartyStateIndicator [(int)m_state];
	}

	protected virtual void ThinkWhatAreDoingNext()
	{
		//Move
		SetDestination ();
		m_state = AI_WORLD_STATE.MOVE;
		m_sprite_partyStateIndicator.sprite = ObjectFactory.getInstance.m_sheet_PartyStateIndicator [(int)m_state];
	}

	protected virtual void SetDestination()
	{
		m_state = AI_WORLD_STATE.MOVE;
		m_sprite_partyStateIndicator.sprite = ObjectFactory.getInstance.m_sheet_PartyStateIndicator [(int)m_state];

		DrawPath();
	}

	GameObject path;
	void DrawPath()
	{
		GridMgr grid = GridMgr.getInstance;

		Destroy (path);

		int count = m_listMoveIdx.Count;

		if (!GameMgr.getInstance.m_bDeveloperMode)
			count = 1;
		else {
			path = new GameObject ();
			path.transform.parent = GameObject.Find("PartyPath").transform;
		}

		int iCurPath = 0;
		if (!GameMgr.getInstance.m_bDeveloperMode) {
			for (int i = 0; i < m_listMoveIdx.Count; ++i) {
				if (m_listMoveIdx [i] == m_iGridIdx) {
					iCurPath = i + 1;
					break;
				}
			}
		}

		if (m_iDestinationIdx == m_iGridIdx)
			return;

		for (int i = 0; i < count; ++i) {
			GameObject myLine = new GameObject ();
			if (!GameMgr.getInstance.m_bDeveloperMode)
				path = myLine;

			if (GameMgr.getInstance.m_bDeveloperMode)
				iCurPath = i;
			
			myLine.transform.position = grid.GetPosOfIdx(m_listMoveIdx[iCurPath]);
			myLine.AddComponent<LineRenderer> ();
			LineRenderer lr = myLine.GetComponent<LineRenderer> ();
			lr.material = new Material (Shader.Find ("Sprites/Default"));
			lr.SetColors (new Color (255 / 255f, 0 / 255f, 0 / 255f), new Color (255 / 255f, 0 / 255f, 0 / 255f));
			lr.SetWidth (0.05f, 0.05f);
			if (i == 0) {
				lr.SetPosition (0, transform.position);
				lr.SetPosition (1, grid.GetPosOfIdx (m_listMoveIdx [iCurPath]));
			} else {
				lr.SetPosition (0, grid.GetPosOfIdx (m_listMoveIdx [iCurPath - 1]));
				lr.SetPosition (1, grid.GetPosOfIdx (m_listMoveIdx [iCurPath]));
			}
			lr.sortingLayerName = "Default";
			lr.sortingOrder = -1;

			if(!GameMgr.getInstance.m_bDeveloperMode)
				lr.transform.parent = GameObject.Find ("PartyPath").transform;
			else
				lr.transform.parent = path.transform;
		}
	}

	public void DestroyThis()
	{
		Destroy (path);
		Destroy (gameObject);
	}
}
