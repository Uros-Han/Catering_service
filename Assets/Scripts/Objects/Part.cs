using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Com.LuisPedroFonseca.ProCamera2D;

public class Part : MonoBehaviour {

	public PART_TYPE m_partType;

	public float m_fHealth; // Health
	public float m_fCurHealth;

	public bool m_bAttackAvailable; //Can hit enemy?
	public float m_fAttackDmg; //Damage
	public bool m_bUse32PixelHand; //무기중 위로 32픽셀 쓰는 무기

	public bool m_bDestroied;
	public bool m_bEdgePart;
	public int m_iGridIdx;

	public DIRECTION m_headingDirection;

	public string m_strNameKey; // TODO : Localize
	public Dictionary<string,float> m_dicStat; //자신의 능력치
	public Dictionary<string,float> m_dicStatBuff; // 자신의 버프 능력치 이 스탯을 주변에 공유해준다.
	public List<string> m_lstStrBuff; // 자신의 버프 이름
	public List<Part> m_lstPartBuffed; //자신에게 버프를 준 파츠 리스트

	public float m_fOriginEmissionRate;
	public float m_fHandRotater;
	public GameObject m_objHealthBar;

	public GameObject m_objCurParentPart; // used in buff
	public GameObject m_objLastParentPart; // used in buff
	public int m_iLastParentPartIdx; //used in buff load data
	public int m_iChildPartCount;

	Coroutine buffCoroutine;

	public bool m_bNeedToStickHead; // 몸에 달라 붙도록 코딩이 필요한 머리 파츠 ex)동물은 default가 붙어있는상태
	public bool m_bReverseBody; //조립시 상하좌우 반전해야하는 파츠

	public int m_iEnemyType; // use to cast enemytype
	public int m_iSaveValue;

	public bool m_bLoadedPart = false;
	bool m_bTurnIntoMeat;

	public bool m_bBreakedPath;

	public WEAPON_TYPE m_weaponType = WEAPON_TYPE.END;

	void Awake()
	{
		m_lstPartBuffed = new List<Part> ();
		m_lstStrBuff = new List<string> ();
		m_dicStat = new Dictionary<string, float> ();
		m_dicStatBuff = new Dictionary<string, float> ();

		if(!m_dicStatBuff.ContainsKey("Health"))
			m_dicStatBuff.Add ("Health", 0);
		if(!m_dicStatBuff.ContainsKey("Defense"))
			m_dicStatBuff.Add ("Defense", 0);
		if(!m_dicStatBuff.ContainsKey("Dodge"))
			m_dicStatBuff.Add ("Dodge", 0);
		if(!m_dicStatBuff.ContainsKey ("Attack"))
			m_dicStatBuff.Add ("Attack", 0);
		if(!m_dicStatBuff.ContainsKey ("AttackSpeed"))
			m_dicStatBuff.Add ("AttackSpeed", 0);
		if(!m_dicStatBuff.ContainsKey ("IQ"))
			m_dicStatBuff.Add ("IQ", 0);
		if(!m_dicStatBuff.ContainsKey ("Range"))
			m_dicStatBuff.Add ("Range", 0);
	}

	public void SetListBuff()
	{
		m_lstPartBuffed = new List<Part> ();
	}

	void Start()
	{
		if (gameObject.name.Equals ("Hand_R")) {
			m_fHandRotater = 90;
		}

		if (m_bLoadedPart) {
			m_bLoadedPart = true;

			gameObject.AddComponent<FSM_Freindly> ();
			m_fHealth = m_dicStat ["Health"];

			if (m_lstPartBuffed == null) {
				m_lstPartBuffed = new List<Part> ();
			}if (m_lstStrBuff == null)
				m_lstStrBuff = new List<string> ();
			
			if (gameObject.name.Contains ("Head")) {
				m_partType = PART_TYPE.HEAD;
			}else if (gameObject.name.Contains ("Body")) {
				m_partType = PART_TYPE.BODY;
			}else if (gameObject.name.Contains ("Hand")) {
				m_partType = PART_TYPE.ARM;
			}else if (gameObject.name.Contains ("Leg")) {
				m_partType = PART_TYPE.LEG;
			}
				
			if (!m_bEdgePart) {
				m_headingDirection = DIRECTION.EVERYWHERE;
			} else {
				if (m_bEdgePart && gameObject.name != "Head" || m_bReverseBody) {
					if (transform.localRotation.eulerAngles.z.Equals (0f + m_fHandRotater)) {
						m_headingDirection = DIRECTION.DOWN;
					} else if (transform.localRotation.eulerAngles.z.Equals (90f + m_fHandRotater)) {
						m_headingDirection = DIRECTION.RIGHT;
					} else if (transform.localRotation.eulerAngles.z.Equals (180f + m_fHandRotater)) {
						m_headingDirection = DIRECTION.UP;
					} else if (transform.localRotation.eulerAngles.z.Equals (270f + m_fHandRotater)) {
						m_headingDirection = DIRECTION.LEFT;
					}

					if (m_partType.Equals (PART_TYPE.ARM) && transform.localScale.x < 0) {
						m_headingDirection = DIRECTION.RIGHT;
					}

				} else {
					if (transform.localRotation.eulerAngles.z.Equals (0f)) {
						m_headingDirection = DIRECTION.UP;
					} else if (transform.localRotation.eulerAngles.z.Equals (90f)) {
						m_headingDirection = DIRECTION.LEFT;
					} else if (transform.localRotation.eulerAngles.z.Equals (180f)) {
						m_headingDirection = DIRECTION.DOWN;
					} else if (transform.localRotation.eulerAngles.z.Equals (270f)) {
						m_headingDirection = DIRECTION.RIGHT;
					}
				}
			}

			////////
			/// 

			m_objLastParentPart = GridMgr.getInstance.FindObj(m_iLastParentPartIdx, GameObject.Find("Player").transform);
			m_objCurParentPart = m_objLastParentPart;
			GameObject.Find("Player").BroadcastMessage("CheckCurParentPart", SendMessageOptions.DontRequireReceiver);
			Core core = GameObject.Find ("Core").GetComponent<Core> ();

			if(m_bNeedToStickHead){
				GetComponent<BoxCollider2D>().offset = new Vector2(0f, 0.04f);

				switch(m_headingDirection){
				case DIRECTION.LEFT:
					transform.position = new Vector3(transform.position.x + 0.04f, transform.position.y);
					break;
				case DIRECTION.RIGHT:
					transform.position = new Vector3(transform.position.x - 0.04f, transform.position.y);
					break;
				case DIRECTION.DOWN:
					transform.position = new Vector3(transform.position.x, transform.position.y + 0.04f);
					break;
				case DIRECTION.UP:
					transform.position = new Vector3(transform.position.x, transform.position.y - 0.04f);
					break;
				}
			}

			transform.parent = GameObject.Find("Player").transform;
			StartCoroutine(Debug_AStarLine());

			if(!m_bEdgePart)
				transform.localRotation = Quaternion.AngleAxis(0, Vector3.forward);

			GetComponent<SpriteSheet>().CheckAround(false);
			GetComponent<SpriteRenderer>().sortingLayerName = "Objects";
//			GetComponent<ParticleSystemRenderer>().sortingLayerName = "Object_Particle";

			ClearBuffBeforeCheck();
			GameObject.Find("Player").BroadcastMessage("BuffCheck");

			if(m_objHealthBar == null)
				m_objHealthBar = ObjectFactory.getInstance.Create_HealthBar (gameObject);

		} else {
			m_fCurHealth = m_fHealth;
		}

//		m_fOriginEmissionRate = GetComponent<SpriteParticleEmitter.DynamicEmitter> ().EmissionRate;

//		StartCoroutine (Heal ());

		if(!m_dicStat.ContainsKey("Health"))
			m_dicStat.Add ("Health", 0);
		if(!m_dicStat.ContainsKey("Defense"))
			m_dicStat.Add ("Defense", 0);
		if(!m_dicStat.ContainsKey("Dodge"))
			m_dicStat.Add ("Dodge", 0);
		if(m_bAttackAvailable && !m_dicStat.ContainsKey ("Attack"))
			m_dicStat.Add ("Attack", 0);
		if(m_bAttackAvailable && !m_dicStat.ContainsKey ("AttackSpeed"))
			m_dicStat.Add ("AttackSpeed", 0);
		if(m_bAttackAvailable && !m_dicStat.ContainsKey ("Range"))
			m_dicStat.Add ("Range", 0);
		if(m_partType.Equals(PART_TYPE.HEAD) && !m_dicStat.ContainsKey ("IQ"))
			m_dicStat.Add ("IQ", 0);
	}

	void OnDestroy()
	{
		if (transform.parent.name.Equals ("Player")) {

		}
	}

	public Coroutine AssembleRoutine;

	public void StopAssemble()
	{
		bStopAssemble = true;
	}

	public IEnumerator OnField()
	{
		m_bTurnIntoMeat = true;
		Vector2 mousePosition = Vector2.zero;
		BoxCollider2D collider2D = GetComponent<BoxCollider2D> ();

		mousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Destroy (m_objHealthBar);

		yield return new WaitForSeconds(1f);
		
		Vector3 corePos = GameObject.Find("Core").transform.position;
		iTween.MoveTo(gameObject, iTween.Hash("x", corePos.x, "y", corePos.y, "time" , 0.5f, "easetype", "easeInSine"));
		
		yield return new WaitForSeconds(0.55f);
		
//		BattleSceneMgr.getInstance.m_iMeat += 1;
		Part CorePart = GameObject.Find("Core").GetComponent<Part>();

		ObjectFactory.getInstance.Create_DamageUI (GameObject.Find ("Core").gameObject, 1f, false);

		CorePart.m_fCurHealth += 3f;
		if (CorePart.m_fCurHealth > CorePart.m_fHealth)
			CorePart.m_fCurHealth = CorePart.m_fHealth;
		

		Destroy(gameObject);
		
		yield return null;
	}

	bool bStopAssemble = false;
	GameObject m_StickedPart = null;
	public IEnumerator Assemble()
	{
//		if (gameObject.name.Equals ("Core"))
//			yield break;

		Vector2 mousePosition = Vector2.zero;
		BoxCollider2D collider2D = GetComponent<BoxCollider2D> ();
		BoxCollider2D morgueCollider2D = GameObject.Find ("Morgue").GetComponent<BoxCollider2D> ();
		Morgue morgue = GameObject.Find ("Morgue").GetComponent<Morgue> ();

		bool bWasPoop = false;
		BoxCollider2D PoopColldier2D = GameObject.Find ("Poop").GetComponent<BoxCollider2D> ();
		Vector3 OriginPos = transform.position;
		Quaternion OriginRotate = transform.localRotation;
		
		Core core = GameObject.Find ("Core").GetComponent<Core> ();
		core.CalculateStickableSeat (false);
		bool bFollowCursor = false;
		bool bParentWasCore = false;
		int iBeforeSeatIdx = -1;
		bStopAssemble = false;
//		int[] morgueIdxArr = Morgue.getInstance.m_iMorgueIdxArr;
		int curGridIdx = 0;

		GameObject PartBorder = GameObject.Find ("PartBorder").gameObject;
		
		GridMgr grid = GridMgr.getInstance;
		DIRECTION m_BeforeheadingDirection = DIRECTION.EVERYWHERE;
		BattleSceneMgr battleSceneMgr = BattleSceneMgr.getInstance;

		do{
			if(!battleSceneMgr.m_mouseState.Equals(MOUSE_STATE.NORMAL))
			{
				yield return null;
				continue;
			}

			mousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
			if(Input.GetMouseButtonDown(0) && collider2D.OverlapPoint(mousePosition))
			{
				OriginPos = transform.position;
				OriginRotate = transform.localRotation;

				Camera.main.GetComponent<ProCamera2DPanAndZoom>().enabled = false;

				if(m_bNeedToStickHead)
					GetComponent<BoxCollider2D>().offset = new Vector2(0f, 0f);

				if (!gameObject.name.Equals ("Core"))
					bFollowCursor = true;

				morgue.SelectPart(this);
				if(m_lstStrBuff.Count > 0 && buffCoroutine == null)
				{
					buffCoroutine = StartCoroutine(Buff());
				}

				if (!gameObject.name.Equals ("Core"))
					PartBorder.GetComponent<SpriteRenderer>().enabled = false;
				else{
					if(transform.parent.name.Equals("Player"))
					{
						PartBorder.transform.parent = GameObject.Find("Objects").transform;
					}else{
						PartBorder.transform.parent = GameObject.Find("Main Camera").transform;
					}
					PartBorder.GetComponent<SpriteRenderer>().enabled = true;
					PartBorder.transform.position = transform.position;
				}
				transform.localScale = new Vector3(1f, 1f, 1f);

				if(transform.parent.name.Equals("Player") && !gameObject.name.Equals ("Core"))
				{
					transform.parent = GameObject.Find("Temp").transform;
					iBeforeSeatIdx = grid.GetGridIdx(transform.position);
					bParentWasCore = true;
				}

				if(bParentWasCore)
				{
					m_BeforeheadingDirection = m_headingDirection;
					GetComponent<SpriteSheet>().CheckAround(false, iBeforeSeatIdx);
					if(m_bAttackAvailable)
					{
						GetComponent<SpriteRenderer>().enabled = true;
						transform.GetChild(0).GetChild(0).GetComponent<SpriteRenderer>().enabled = false;
					}
				}

				if (!gameObject.name.Equals ("Core")){
					GetComponent<SpriteRenderer>().sortingLayerName = "FrontObject";
//					GetComponent<ParticleSystemRenderer>().sortingLayerName = "FrontObject_Particle";
				}

//				GetComponent<SpriteParticleEmitter.DynamicEmitter>().enabled = false;
				GetComponent<SpriteRenderer>().color = Color.white;

				if (!gameObject.name.Equals ("Core"))
					core.CalculateStickableSeat (true);
			}
			
			if(bFollowCursor && Input.GetMouseButton(0)) //클릭시 따라다니게
			{
				transform.position = mousePosition;
				curGridIdx = grid.GetGridIdx(transform.position);
				m_objCurParentPart = null;
				GameObject.Find("Player").BroadcastMessage("AmI_InCoreSide");
				GameObject.Find("Player").BroadcastMessage("CheckCurParentPart", SendMessageOptions.DontRequireReceiver);

				for(int i = 0 ; i < core.m_StickAvailableSeat.Count; ++i)
				{
					if(core.m_StickAvailableSeat[i].Equals(curGridIdx)) //드래그 중 붙을 수 있는 지역안에 들어옴
					{
						transform.position = grid.GetPosOfIdx(core.m_StickAvailableSeat[i]);

						//붙는방향으로 파츠 회전하도록
						Transform PlayerTrans = GameObject.Find("Player").transform;
						GameObject ClosestPart = null;

						for(int j=0 ; j < PlayerTrans.childCount; ++j)
						{
							GameObject target;
							target = PlayerTrans.GetChild(j).gameObject;

							if(target.GetComponent<Part>().m_bBreakedPath)
								continue;

							if(ClosestPart == null)
								ClosestPart = target;

							if(!target.GetComponent<Part>().m_bEdgePart && Vector3.Distance(mousePosition , ClosestPart.transform.position) > Vector3.Distance(mousePosition, target.transform.position))
							{
								ClosestPart = target;
							}
						}

						Vector3 idxPos = transform.position;
						int iIdx = grid.GetGridIdx(transform.position);
						int iTargetIdx = grid.GetGridIdx(ClosestPart.transform.position);

						if(iIdx + 1 == iTargetIdx){
							m_headingDirection = DIRECTION.LEFT;
							if(m_bEdgePart && gameObject.name != "Head" || m_bReverseBody){
								if(m_partType.Equals(PART_TYPE.ARM))
								{
									iTween.ScaleTo(gameObject, iTween.Hash ("x", 1, "time", 0.2f));
								}
								iTween.RotateTo(gameObject, iTween.Hash ("z", 270f + m_fHandRotater, "time", 0.2f));
							}else{
								if(m_bNeedToStickHead)
									transform.position = new Vector3(transform.position.x + 0.02f, transform.position.y);
								iTween.RotateTo(gameObject, iTween.Hash ("z", 90f, "time", 0.2f));
							}
						}else if(iIdx - 1 == iTargetIdx){
							m_headingDirection = DIRECTION.RIGHT;
							if(m_bEdgePart && gameObject.name != "Head" || m_bReverseBody){
								if(m_partType.Equals(PART_TYPE.ARM))
								{
									iTween.ScaleTo(gameObject, iTween.Hash ("x", -1, "time", 0.2f));
									iTween.RotateTo(gameObject, iTween.Hash ("z", -90f + m_fHandRotater, "time", 0.2f));
								}else
									iTween.RotateTo(gameObject, iTween.Hash ("z", 90f + m_fHandRotater, "time", 0.2f));
							}else{
								if(m_bNeedToStickHead)
									transform.position = new Vector3(transform.position.x - 0.02f, transform.position.y);
								iTween.RotateTo(gameObject, iTween.Hash ("z", 270f, "time", 0.2f));
							}
						}else if(iIdx - grid.m_iXcount == iTargetIdx){
							m_headingDirection = DIRECTION.DOWN;
							if(m_bEdgePart && gameObject.name != "Head" || m_bReverseBody){
								if(m_partType.Equals(PART_TYPE.ARM))
								{
									iTween.ScaleTo(gameObject, iTween.Hash ("x", 1, "time", 0.2f));
								}
								iTween.RotateTo(gameObject, iTween.Hash ("z", 0f + m_fHandRotater, "time", 0.2f));
							}else{
								if(m_bNeedToStickHead)
									transform.position = new Vector3(transform.position.x, transform.position.y + 0.02f);
								iTween.RotateTo(gameObject, iTween.Hash ("z", 180f, "time", 0.2f));
							}
						}else if(iIdx + grid.m_iXcount == iTargetIdx){
							m_headingDirection = DIRECTION.UP;
							if(m_bEdgePart && gameObject.name != "Head" || m_bReverseBody){
								if(m_partType.Equals(PART_TYPE.ARM))
								{
									iTween.ScaleTo(gameObject, iTween.Hash ("x", 1, "time", 0.2f));
								}
								iTween.RotateTo(gameObject, iTween.Hash ("z", 180f + m_fHandRotater, "time", 0.2f));
							}else{
								if(m_bNeedToStickHead)
									transform.position = new Vector3(transform.position.x, transform.position.y - 0.02f);
								iTween.RotateTo(gameObject, iTween.Hash ("z", 0f, "time", 0.2f));
							}
						}

						m_objCurParentPart = ClosestPart;
					}
				}

				if(morgueCollider2D.OverlapPoint(mousePosition)) // get in morgue
				{
					if(morgue.GetIdxFromPos(mousePosition) != -1 && !morgue.m_bBodyArr[morgue.GetIdxFromPos(mousePosition)])
					{
						transform.position = morgue.GetIdxPos(morgue.GetIdxFromPos(mousePosition));
						iTween.RotateTo(gameObject, iTween.Hash ("z", 0f, "time", 0.2f));
					}
				}
				 
				if(PoopColldier2D.OverlapPoint(mousePosition)) // get in poop
				{
					GetComponent<SpriteRenderer>().color = new Color(1,0,0,0.5f);
					bWasPoop = true;
				}else{
					if(bWasPoop)
					{
						GetComponent<SpriteRenderer>().color = new Color(1,1,1,1f);
						bWasPoop = false;
					}
				}

//				for(int i = 0; i < morgueIdxArr.Length; ++i)
//				{
//					if(morgueIdxArr[i].Equals(curGridIdx) && (!Morgue.getInstance.m_bBodyArr[i] || curGridIdx.Equals(grid.GetGridIdx(OriginPos)))){ //드래그중 비어있는 시체창고 안에 들어옴
//						transform.position = grid.GetPosOfIdx(morgueIdxArr[i]);
//						iTween.RotateTo(gameObject, iTween.Hash ("z", 0f, "time", 0.2f));
//					}
//				}

				if(m_objAleart != null)
					Destroy(m_objAleart);
			}
			
			if(bFollowCursor && Input.GetMouseButtonUp(0))//클릭 뗏을때
			{
				bool bToOrigin = true;

				iTween.Stop(gameObject);

				for(int i = 0 ; i < core.m_StickAvailableSeat.Count; ++i)
				{
					if(core.m_StickAvailableSeat[i].Equals(curGridIdx)) // Stick!!!!!
					{
						m_objLastParentPart = m_objCurParentPart;
						m_iLastParentPartIdx = grid.GetGridIdx(m_objLastParentPart.transform.position);
						transform.position = grid.GetPosOfIdx(core.m_StickAvailableSeat[i]);
						if(m_bNeedToStickHead){
							GetComponent<BoxCollider2D>().offset = new Vector2(0f, 0.04f);

							switch(m_headingDirection){
							case DIRECTION.LEFT:
								transform.position = new Vector3(transform.position.x + 0.04f, transform.position.y);
								break;
							case DIRECTION.RIGHT:
								transform.position = new Vector3(transform.position.x - 0.04f, transform.position.y);
								break;
							case DIRECTION.DOWN:
								transform.position = new Vector3(transform.position.x, transform.position.y + 0.04f);
								break;
							case DIRECTION.UP:
								transform.position = new Vector3(transform.position.x, transform.position.y - 0.04f);
								break;
							}
						}

						bToOrigin = false;
						transform.parent = GameObject.Find("Player").transform;
						m_iGridIdx = core.m_StickAvailableSeat[i];
						StartCoroutine(Debug_AStarLine());

						if(!m_bEdgePart)
							transform.localRotation = Quaternion.AngleAxis(0, Vector3.forward);

						if(GetComponent<FSM_Freindly>() == null)
							gameObject.AddComponent<FSM_Freindly>();

						if(bParentWasCore)
						{
							m_iGridIdx = core.m_StickAvailableSeat[i];

							if(!m_bEdgePart)
								m_headingDirection = DIRECTION.EVERYWHERE;

							GetComponent<SpriteSheet>().CheckAround(false, iBeforeSeatIdx);
							iBeforeSeatIdx = -1;
							bParentWasCore = false;

							transform.parent.BroadcastMessage("AmI_InCoreSide");
						}else{
							morgue.RemoveBody(OriginPos);
						}

						GetComponent<SpriteSheet>().CheckAround(false);
						GetComponent<SpriteRenderer>().sortingLayerName = "Objects";
//						GetComponent<ParticleSystemRenderer>().sortingLayerName = "Object_Particle";

						OriginPos = transform.position;
						OriginRotate = transform.localRotation;

						GetComponent<SpriteRenderer>().color = Color.white;
//						GetComponent<SpriteParticleEmitter.DynamicEmitter>().enabled = true;


						ClearBuffBeforeCheck();
						GameObject.Find("Player").BroadcastMessage("BuffCheck");
						SoundMgr.getInstance.PlaySfx("core_place");

						GameObject.Find("Player").BroadcastMessage("CheckCurParentPart", SendMessageOptions.DontRequireReceiver);

						if(m_bAttackAvailable)
						{
							GetComponent<SpriteRenderer>().enabled = false;
							transform.GetChild(0).GetChild(0).GetComponent<SpriteRenderer>().enabled = true;
							transform.GetChild(0).GetChild(0).GetComponent<Animator>().enabled = true;
						}
					}
				}

				if(morgueCollider2D.OverlapPoint(mousePosition)) // get in morgue
				{
					if(morgue.GetIdxFromPos(mousePosition) != -1 && !morgue.m_bBodyArr[morgue.GetIdxFromPos(mousePosition)])
					{
						m_objLastParentPart = null;
						m_iLastParentPartIdx = -1;
						transform.position = morgue.GetIdxPos(morgue.GetIdxFromPos(mousePosition));
						bToOrigin = false;
						transform.localRotation = Quaternion.AngleAxis(0, Vector3.forward);

						if(!bParentWasCore)
							morgue.RemoveBody(OriginPos);
						else{
							GetComponent<SpriteSheet>().CheckAround(false, iBeforeSeatIdx);
							iBeforeSeatIdx = -1;
							bParentWasCore = false;

							GameObject.Find("Player").BroadcastMessage("AmI_InCoreSide");
						}

						morgue.AddBody(true, gameObject, curGridIdx);

						GetComponent<SpriteRenderer>().sortingLayerName = "DeadBodies";
//						GetComponent<ParticleSystemRenderer>().sortingLayerName = "DeadBodies_Particle";



						OriginPos = transform.position;
						OriginRotate = transform.localRotation;
						transform.parent = GameObject.Find("Morgue").transform;

						ClearBuffBeforeCheck();
						GameObject.Find("Player").BroadcastMessage("BuffCheck");
						SoundMgr.getInstance.PlaySfx("morgue_place");
					}
				}

				if(PoopColldier2D.OverlapPoint(mousePosition)) // get in poop
				{
					morgue.DeselectPart();
					if(!bParentWasCore){
						morgue.RemoveBody(OriginPos);
					}
					core.CalculateStickableSeat (false);
					if(m_objHealthBar != null)
						Destroy(m_objHealthBar);
					Destroy(gameObject);
					ObjectFactory.getInstance.Create_Poop();

					ClearBuffBeforeCheck();
					GameObject.Find("Player").BroadcastMessage("BuffCheck");
					SoundMgr.getInstance.PlaySfx("morgue_digest");
				}

//				for(int i = 0; i < morgueIdxArr.Length; ++i) // get in morgue
//				{
//					if(morgueIdxArr[i].Equals(curGridIdx) && (!Morgue.getInstance.m_bBodyArr[i] || curGridIdx.Equals(grid.GetGridIdx(OriginPos)))){ 
//						transform.position = grid.GetPosOfIdx(morgueIdxArr[i]);
//						bToOrigin = false;
//						transform.localRotation = Quaternion.AngleAxis(0, Vector3.forward);
//
//						if(!bParentWasCore)
//							Morgue.getInstance.RemoveBody(grid.GetGridIdx(OriginPos));
//						else{
//							GetComponent<SpriteSheet>().CheckAround(false, iBeforeSeatIdx);
//							iBeforeSeatIdx = -1;
//							bParentWasCore = false;
//
//							GameObject.Find("Core").BroadcastMessage("AmI_InCoreSide");
//						}
//
//						Morgue.getInstance.AddBody(true, gameObject, curGridIdx);
//
//						GetComponent<SpriteRenderer>().sortingLayerName = "DeadBodies";
//						GetComponent<ParticleSystemRenderer>().sortingLayerName = "DeadBodies_Particle";
//
//
//
//						OriginPos = transform.position;
//						transform.parent = GameObject.Find("Morgue").transform;
//					}
//				}
				
				if(bToOrigin)
				{
					iTween.MoveTo (gameObject, iTween.Hash ("x", OriginPos.x, "y", OriginPos.y, "islocal", false, "time", 0.05f, "easetype", "easeInSine"));
					if(!bParentWasCore) iTween.RotateTo(gameObject, iTween.Hash ("z", 0f, "time", 0.1f));
					yield return new WaitForSeconds(0.12f);

					m_headingDirection = m_BeforeheadingDirection;
					GetComponent<SpriteSheet>().CheckAround(false);

					if(bParentWasCore)
					{
						transform.parent = GameObject.Find("Player").transform;
						transform.parent.BroadcastMessage("AmI_InCoreSide");
						GetComponent<SpriteRenderer>().sortingLayerName = "Objects";
//						GetComponent<ParticleSystemRenderer>().sortingLayerName = "Objects_Particle";

						if(m_lstStrBuff.Count > 0)
							StartCoroutine(Buff(true));

						transform.localRotation = OriginRotate;

						SoundMgr.getInstance.PlaySfx("core_place");
						m_objCurParentPart = m_objLastParentPart;
						GameObject.Find("Player").BroadcastMessage("CheckCurParentPart", SendMessageOptions.DontRequireReceiver);

					}else
						GetComponent<SpriteRenderer>().sortingLayerName = "DeadBodies";
//					GetComponent<ParticleSystemRenderer>().sortingLayerName = "DeadBodies_Particle";

			
				}
				
				core.CalculateStickableSeat (false);
				
				bFollowCursor = false;

				if(transform.parent.name.Equals("Player"))
				{
					PartBorder.transform.parent = GameObject.Find("Objects").transform;
				}else{
					PartBorder.transform.parent = GameObject.Find("Main Camera").transform;
				}
				PartBorder.GetComponent<SpriteRenderer>().enabled = true;
				PartBorder.transform.position = OriginPos;

				Camera.main.GetComponent<ProCamera2DPanAndZoom>().enabled = true;
			}
			
			yield return null;
		}while(!bStopAssemble);
	}

	IEnumerator Debug_AStarLine()
	{
		Vector2 mousePosition = Vector2.zero;
		BoxCollider2D collider2D = GetComponent<BoxCollider2D> ();
		int coreIdx = GridMgr.getInstance.GetGridIdx (GameObject.Find ("Core").transform.position);
		int partIdx = GridMgr.getInstance.GetGridIdx (transform.position);

		do {
			mousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);

			if(collider2D.OverlapPoint(mousePosition))
			{
				if(AStar.getInstance.AStarStart_CoreFind(partIdx, coreIdx, true))
				{
					yield return new WaitForSeconds(0.08f);
					continue;
				}
			}

			yield return null;

		} while(transform.parent.name.Equals("Player"));
	}

	public void HealCheck()
	{
		StartCoroutine (Heal ());
	}

	void ClearBuffBeforeCheck()
	{
		Transform playerTrans = GameObject.Find ("Player").transform;
		for (int i = 0; i < playerTrans.childCount; ++i) {
			playerTrans.GetChild (i).GetComponent<Part> ().m_lstPartBuffed.Clear ();
		}

		playerTrans = GameObject.Find ("Morgue").transform;
		for (int i = 1; i < playerTrans.childCount; ++i) {
			playerTrans.GetChild (i).GetComponent<Part> ().m_lstPartBuffed.Clear ();
		}
	}

	public void BuffCheck()
	{
		if (m_lstStrBuff.Count > 0)
			StartCoroutine (Buff (true));
	}

	public IEnumerator Buff(bool bStatAdapt = false)
	{
		Morgue morgue = GameObject.Find("Morgue").GetComponent<Morgue>();
		Vector2 mousePosition = Vector2.zero;
		BoxCollider2D collider2D = GetComponent<BoxCollider2D> ();
		GameObject beforeParentPart = null;
		Transform PlayerTrans = GameObject.Find ("Player").transform;
		List<GameObject> listBuffIcon = new List<GameObject> ();

		do{
			if((m_objCurParentPart != null && m_objCurParentPart != beforeParentPart) || bStatAdapt)
			{
				//clear buffs
				if(!bStatAdapt){
					for(int i=0; i < listBuffIcon.Count; ++i)
					{
						Destroy(listBuffIcon[i].gameObject);
					}
					listBuffIcon.Clear ();
				}

				int iParentIdx = 0;
				if(bStatAdapt){
					if(m_objLastParentPart != null)
						iParentIdx = m_objLastParentPart.GetComponent<Part>().m_iGridIdx;
				}else{
					iParentIdx = m_objCurParentPart.GetComponent<Part>().m_iGridIdx;
				}

				for(int i =0; i < m_lstStrBuff.Count; ++i)
				{
					//버프 범위 정하는 곳
					List<int> buffIdx = new List<int>();

					if(m_lstStrBuff[i].Equals("LegBuff"))
					{
						buffIdx.Add(iParentIdx);
						buffIdx.Add(iParentIdx + 1);
						buffIdx.Add(iParentIdx - 1);
						buffIdx.Add(iParentIdx + GridMgr.getInstance.m_iXcount);
						buffIdx.Add(iParentIdx - GridMgr.getInstance.m_iXcount);

						listBuffIcon = BuffCreateAndStatAdapt(bStatAdapt, buffIdx, false, true);
					}else if(m_lstStrBuff[i].Equals("HeadBuff_0"))
					{
						buffIdx.Add(iParentIdx);
						buffIdx.Add(iParentIdx + 1);
						buffIdx.Add(iParentIdx - 1);
						buffIdx.Add(iParentIdx + GridMgr.getInstance.m_iXcount);
						buffIdx.Add(iParentIdx - GridMgr.getInstance.m_iXcount);

						listBuffIcon = BuffCreateAndStatAdapt(bStatAdapt, buffIdx, true);
					}else if(m_lstStrBuff[i].Equals("HeadBuff_1"))
					{
						buffIdx.Add(iParentIdx);
						buffIdx.Add(iParentIdx + 1);
						buffIdx.Add(iParentIdx - 1);
						buffIdx.Add(iParentIdx + GridMgr.getInstance.m_iXcount);
						buffIdx.Add(iParentIdx - GridMgr.getInstance.m_iXcount);

						listBuffIcon = BuffCreateAndStatAdapt(bStatAdapt, buffIdx, true);
					}else if(m_lstStrBuff[i].Equals("HeadBuff_2"))
					{
						buffIdx.Add(iParentIdx);
						buffIdx.Add(iParentIdx + 1);
						buffIdx.Add(iParentIdx - 1);
						buffIdx.Add(iParentIdx + GridMgr.getInstance.m_iXcount);
						buffIdx.Add(iParentIdx - GridMgr.getInstance.m_iXcount);

						listBuffIcon = BuffCreateAndStatAdapt(bStatAdapt, buffIdx, true);
					}
				}
				if(BattleSceneMgr.getInstance.m_turnState.Equals(TURN_STATE.NIGHT))
					morgue.SelectPart(morgue.m_SelectedPart);
			}else if(m_objCurParentPart == null && !bStatAdapt){
				for(int i=0; i < listBuffIcon.Count; ++i)
				{
					Destroy(listBuffIcon[i].gameObject);
				}
				listBuffIcon.Clear ();

				morgue.SelectPart(morgue.m_SelectedPart);
			}

			if(!bStatAdapt)
				beforeParentPart = m_objCurParentPart;
			
			yield return null;
				
		}while(!bStatAdapt && morgue.m_SelectedPart.Equals(this));

		if (!bStatAdapt) {
			for (int i = 0; i < listBuffIcon.Count; ++i) {
				Destroy (listBuffIcon [i].gameObject);
			}
			listBuffIcon.Clear ();

			buffCoroutine = null;
		}
	}

	protected IEnumerator Heal()
	{
		if (gameObject.name.Equals ("Core"))
			yield break;

		Vector3 mousePosition;
		BoxCollider2D collider2D = GetComponent<BoxCollider2D> ();
		BattleSceneMgr battleSceneMgr = BattleSceneMgr.getInstance;
		bool bHighlighted = false;
		Part CorePart = GameObject.Find ("Core").GetComponent<Part> ();

		do{
			mousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);

			if(!bHighlighted && collider2D.OverlapPoint(mousePosition))
			{
				bHighlighted = true;
				iTween.ScaleTo(gameObject, iTween.Hash("x", 1.3f, "y", 1.3f, "time" , 0.1f, "easetype", "easeInSine"));
			}else if(bHighlighted && !collider2D.OverlapPoint(mousePosition)){
				bHighlighted = false;
				iTween.ScaleTo(gameObject, iTween.Hash("x", 1f, "y", 1f, "time" , 0.1f, "easetype", "easeInSine"));
			}

			if(Input.GetMouseButtonDown(0) && collider2D.OverlapPoint(mousePosition))
			{
				if(m_fCurHealth < m_fHealth && CorePart.m_fCurHealth > 1)
				{
					CorePart.m_fCurHealth -= 1;
					m_fCurHealth += 1;
					AdjustEmissionRate();

					ObjectFactory.getInstance.Create_DamageUI(GameObject.Find ("Core").gameObject, 1, true);
					ObjectFactory.getInstance.Create_DamageUI(gameObject, 1, false);
				}
			}

			yield return null;

		}while(battleSceneMgr.m_mouseState == MOUSE_STATE.HEAL);

		if (bHighlighted) {
			bHighlighted = false;
			iTween.ScaleTo(gameObject, iTween.Hash("x", 1f, "y", 1f, "time" , 0.1f, "easetype", "easeInSine"));
		}
	}

	IEnumerator ResetRotation()
	{
		yield return null;
		yield return null;
		yield return null;

		transform.localRotation = Quaternion.AngleAxis (0f, Vector3.forward);
	}

	public void AdjustEmissionRate()
	{
//		if (transform.parent.GetComponent<FSM_Enemy> () != null) { // Enemy
//			Unit unit = transform.parent.GetComponent<Unit>();
//
//			if(unit.m_fCurHealth == unit.m_fHealth)
//				GetComponent<SpriteParticleEmitter.DynamicEmitter>().EmissionRate = 0;
//			else
//				GetComponent<SpriteParticleEmitter.DynamicEmitter>().EmissionRate = (int)( (1 - (unit.m_fCurHealth / unit.m_fHealth)) * 10f);
//
//		}else
//			if(gameObject.name.Equals("Core"))
//				GetComponent<SpriteParticleEmitter.DynamicEmitter>().EmissionRate = (m_fCurHealth / m_fHealth) * m_fOriginEmissionRate;
//			else
//				GetComponent<SpriteParticleEmitter.DynamicEmitter>().EmissionRate = (int)( (1 - (m_fCurHealth / m_fHealth)) * 10f);
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
				m_objAleart.transform.position = GridMgr.getInstance.GetPosOfIdx(iStart);

			m_bBreakedPath = true;

		} else {
			if(m_objAleart != null)
				Destroy(m_objAleart);

			m_bBreakedPath = false;
		}

	}

	void DestroyPart_WhenPathBreaked()
	{
		if (m_objCurParentPart == null)
			return;
		
		int iStart = GridMgr.getInstance.GetGridIdx (transform.position);
		int iEnd = GridMgr.getInstance.GetGridIdx (GameObject.Find("Core").transform.position);

		if (m_objCurParentPart.GetComponent<Part>().m_bDestroied || m_objCurParentPart.transform.parent.name.Equals("Field")) {//Breaked Path -> Disabled

			if (!m_bEdgePart && AStar.getInstance.AStarStart_CoreFind (iStart, iEnd)) {
			} else {
				if (m_bAttackAvailable) {
					GetComponent<SpriteRenderer> ().enabled = true;
					transform.GetChild (0).GetChild (0).GetComponent<SpriteRenderer> ().enabled = false;
					transform.GetChild (0).GetChild (0).GetComponent<Animator> ().enabled = false;
				}

				transform.parent = GameObject.Find ("Field").transform;
				GetComponent<FSM_Freindly> ().m_AiState = AI_STATE.DISABLED;
//				GetComponent<SpriteParticleEmitter.DynamicEmitter> ().enabled = false;
				GetComponent<SpriteRenderer> ().color = Color.gray;
				GetComponent<Rigidbody2D> ().isKinematic = false;
				GetComponent<Rigidbody2D> ().AddTorque (Random.Range (-180f, 180f));
				GetComponent<Rigidbody2D> ().AddForce (Vector3.Normalize (m_objCurParentPart.transform.position - transform.position) * -1f, ForceMode2D.Impulse);
			}
		} else {//CoreSide


		}
	}

	void CheckCurParentPart()
	{
		Transform PlayerTrans = GameObject.Find ("Player").transform;

		bool bHasParent = false;
		m_iChildPartCount = 0;

		for (int i = 0; i < PlayerTrans.childCount; ++i) {
			Part targetPart = PlayerTrans.GetChild (i).GetComponent<Part> ();

			if (targetPart.m_iGridIdx == m_iLastParentPartIdx) {
				m_objCurParentPart = PlayerTrans.GetChild (i).gameObject;
				m_objLastParentPart = m_objCurParentPart;
				bHasParent = true;
			}
			if (targetPart.m_objCurParentPart == gameObject) {
				m_iChildPartCount += 1;
			}
		}

		if (!bHasParent)
			m_objCurParentPart = null;
	}

	public void DestroyThis()
	{
		Destroy (m_objHealthBar);
		Destroy (gameObject);

		ClearBuffBeforeCheck();
		GameObject.Find("Player").BroadcastMessage("BuffCheck");
	}

	public void PartDestroyed()
	{
		m_bDestroied = true;

		Transform FieldTrans = GameObject.Find ("Field").transform;

		Destroy (GetComponent<FSM_Freindly> ());
		transform.localRotation = Quaternion.AngleAxis (0, Vector3.forward);

		GetComponent<SpriteRenderer>().color = Color.white;

		GetComponent<Rigidbody2D>().AddTorque(Random.Range(0f, 30f));
		GetComponent<SpriteRenderer>().color = new Color(160/255f,160/255f,160/255f);
		
		StartCoroutine(ChangeParentToField(gameObject));

		Destroy (m_objHealthBar);

		ClearBuffBeforeCheck();
		GameObject.Find("Player").BroadcastMessage("BuffCheck");
	}

	IEnumerator ChangeParentToField(GameObject target)
	{
		yield return null;
		target.transform.parent = GameObject.Find ("Field").transform;
		BattleSceneMgr.getInstance.OnField(target);

		GameObject.Find ("Player").BroadcastMessage ("DestroyPart_WhenPathBreaked");
		GetComponent<SpriteSheet>().CheckAround(false);
		GetComponent<SpriteRenderer>().sprite = ObjectFactory.getInstance.m_sprite_meat;
	}

	List<GameObject> BuffCreateAndStatAdapt(bool bStatAdapt, List<int> buffIdx, bool bAdaptOnlyAttackPart = false, bool bAdaptOnlyBodyPart = false)
	{
		List<GameObject> buffObjList = new List<GameObject>();
		List<GameObject> listBuffIcon = new List<GameObject> ();

		buffObjList = GridMgr.getInstance.listObjectsOfIdxs(buffIdx);

		if(!bStatAdapt)
		{
			for(int j = 0; j < buffIdx.Count; ++j)
			{
				if(buffIdx[j].Equals(GridMgr.getInstance.GetGridIdx(transform.position)))
					continue;

				bool bSkip = false;
				for(int k =0; k< buffObjList.Count; ++k)
				{
					Part idxPart = buffObjList [k].GetComponent<Part> ();

					if(idxPart.m_iGridIdx == buffIdx[j])
					{
						bSkip = true;

						if (bAdaptOnlyAttackPart && !idxPart.m_bAttackAvailable) 
						{
							bSkip = false;
						}

						if (bAdaptOnlyBodyPart && !idxPart.m_partType.Equals (PART_TYPE.BODY)) 
						{
							bSkip = false;
						}

						break;
					}
				}

				if(!bSkip)
					listBuffIcon.Add(ObjectFactory.getInstance.Create_Buff(buffIdx[j], true, true));
			}
		}

		for(int j = 0; j < buffObjList.Count; ++j)
		{
			Part idxPart = buffObjList[j].GetComponent<Part>();

			if(idxPart != this && (!idxPart.m_bEdgePart || (idxPart.m_bEdgePart && idxPart.m_objCurParentPart == m_objCurParentPart)))
			{
				bool bSkip = false;

				if (bAdaptOnlyAttackPart && !idxPart.m_bAttackAvailable) 
				{
					bSkip = true;
				}

				if (bAdaptOnlyBodyPart && !idxPart.m_partType.Equals (PART_TYPE.BODY)) 
				{
					bSkip = true;
				}

				if (!bSkip) {
					if (bStatAdapt) {
						if (!idxPart.m_lstPartBuffed.Contains (this))
							idxPart.m_lstPartBuffed.Add (this);
					} else {
						listBuffIcon.Add (ObjectFactory.getInstance.Create_Buff (idxPart.m_iGridIdx, true, false));
					}
				}
			}
		}

		return listBuffIcon;
	}

	void HarvestPartInField()
	{
		if (m_bTurnIntoMeat)
			return;

		StartCoroutine (HarvestPartInField_Coroutine ());
	}

	IEnumerator HarvestPartInField_Coroutine()
	{
		Vector3 corePos = GameObject.Find("Core").transform.position;
		iTween.MoveTo(gameObject, iTween.Hash("x", corePos.x, "y", corePos.y, "time" , 0.5f, "easetype", "easeInSine"));
		GetComponent<Rigidbody2D> ().isKinematic = true;

		yield return new WaitForSeconds (0.55f);

		GameObject.Find ("Morgue").GetComponent<Morgue> ().AddBody (false, gameObject);
		StartCoroutine (Assemble ());
	}

	public void Weapon_Attack()
	{
		switch (m_weaponType) {
		case WEAPON_TYPE.ONE_HAND:
			SoundMgr.getInstance.PlaySfx ("weapon_onehand");
			break;

		case WEAPON_TYPE.TWO_HAND:
			SoundMgr.getInstance.PlaySfx ("weapon_twohand");
			break;

		case WEAPON_TYPE.POLE:
			SoundMgr.getInstance.PlaySfx ("weapon_twohand");
			break;
		}


		if (m_weaponType.Equals (WEAPON_TYPE.BOW) || m_weaponType.Equals (WEAPON_TYPE.CROSSBOW)) {
			if (transform.parent.name.Equals ("Player")) {
				ObjectFactory.getInstance.Create_Arrow(transform.position, GetComponent<FSM_Freindly> ().m_target, m_dicStat["Attack"]);
			} else {
				ObjectFactory.getInstance.Create_Arrow(transform.position, transform.parent.GetComponent<FSM_Enemy> ().m_target, m_dicStat["Attack"]);
			}
		} else {
			if (transform.parent.name.Equals ("Player")) {
				transform.GetComponent<FSM_Freindly> ().Weapon_Attack (this);
			} else {
				transform.parent.GetComponent<FSM_Enemy> ().Weapon_Attack (this);
			}
		}
	}


//	void DrawLine(Vector3 start, Vector3 end, Color color, float duration = 0.2f)
//	{
//		GameObject myLine = new GameObject();
//		myLine.transform.position = start;
//		myLine.AddComponent<LineRenderer>();
//		LineRenderer lr = myLine.GetComponent<LineRenderer>();
//		lr.material = new Material(Shader.Find("Sprites/Default"));
//		lr.SetColors(color, color);
//		lr.SetWidth(0.05f, 0.05f);
//		lr.SetPosition(0, start);
//		lr.SetPosition(1, end);
//		lr.sortingLayerName = "Objects";
//		GameObject.Destroy(myLine, duration);
//	}
}
