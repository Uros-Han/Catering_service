using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectFactory : Singleton<ObjectFactory> {


	void Awake () {		
		DontDestroyOnLoad(gameObject);
	}
	GameObject m_objAleart;
	GameObject m_objBuff;
	GameObject m_objStickableDot;
	GameObject m_objPoop;
	GameObject m_HealthBar;
	GameObject m_DamageUI;
	GameObject m_Part;

	GameObject m_objChicken;
	GameObject m_objGoat;
	GameObject[] m_objHero;
	GameObject m_objCivilian;

	GameObject m_WorldIcon;
	GameObject m_WorldGeo;

	public Sprite m_sprite_meat;
	public Sprite[] m_sheet_core;

	public Sprite[] m_sheet_chicken_0;
	public Sprite[] m_sheet_goat_0;

	int m_iCivlian_body_count;
	public Sprite[] m_sheet_civilian_head;
	public Sprite[] m_sheet_civilian_leg;
	public Sprite[] m_sheet_civilian_arm;
	public Sprite[][] m_sheet_civilian_body;

	public Sprite[] m_sheet_worldicon;
	public Sprite[] m_sheet_worldGeo;

	// Use this for initialization
	public void ResourcesLoad () {
		m_objAleart = Resources.Load ("Prefabs/Objects/Aleart") as GameObject;
		m_objBuff = Resources.Load ("Prefabs/Objects/Buff") as GameObject;
		m_objStickableDot = Resources.Load ("Prefabs/Objects/StickableDot") as GameObject;
		m_objPoop = Resources.Load ("Prefabs/Objects/PoopParticle") as GameObject;
		m_HealthBar = Resources.Load ("Prefabs/UI/HealthBar") as GameObject;
		m_DamageUI = Resources.Load ("Prefabs/UI/DamageUI") as GameObject;

		m_sprite_meat = Resources.Load<Sprite> ("Sprites/Meat");

		m_sheet_core = Resources.LoadAll<Sprite>("Sprites/Sheets/sheet_core");
		m_Part = Resources.Load ("Prefabs/Objects/Part") as GameObject;

		///Livestocks
		m_sheet_chicken_0 = Resources.LoadAll<Sprite> ("Sprites/Sheets/Livestock/sheet_chicken_0");
		m_sheet_goat_0 = Resources.LoadAll<Sprite> ("Sprites/Sheets/Livestock/sheet_goat_0");

		m_objChicken = Resources.Load("Prefabs/Objects/Enemies/Chicken") as GameObject;
		m_objGoat = Resources.Load("Prefabs/Objects/Enemies/Goat") as GameObject;

		//Heroes
		m_objHero = Resources.LoadAll<GameObject> ("Prefabs/Objects/Enemies/Heroes");

		///Civilians
		m_sheet_civilian_head = Resources.LoadAll<Sprite> ("Sprites/Sheets/Civilian/sheet_civ_heads");
		m_sheet_civilian_leg = Resources.LoadAll<Sprite> ("Sprites/Sheets/Civilian/sheet_civ_legs");
		m_sheet_civilian_arm = Resources.LoadAll<Sprite> ("Sprites/Sheets/Civilian/sheet_civ_arms");
		m_iCivlian_body_count = 9;
		m_sheet_civilian_body = new Sprite[m_iCivlian_body_count][];
		for (int i = 0; i < m_iCivlian_body_count; ++i) {
			m_sheet_civilian_body[i] = Resources.LoadAll<Sprite> (string.Format("Sprites/Sheets/Civilian/sheet_civ_body_{0}",i));
		}
		m_objCivilian = Resources.Load("Prefabs/Objects/Enemies/Civilian") as GameObject;

		//WorldMap
		m_WorldIcon = Resources.Load("Prefabs/Objects/World/WorldIcon") as GameObject;
		m_sheet_worldicon = Resources.LoadAll<Sprite> ("Sprites/Sheets/World_Icon");
		m_WorldGeo = Resources.Load ("Prefabs/Objects/World/WorldGeo") as GameObject;
		m_sheet_worldGeo = Resources.LoadAll<Sprite> ("Sprites/Sheets/World_Geo");
	}

	public GameObject Create_Aleart(int iIdx)
	{
		GameObject obj = Instantiate (m_objAleart) as GameObject;
		obj.transform.parent = GameObject.Find("Alearts").transform;
		obj.transform.position = GridMgr.getInstance.GetPosOfIdx (iIdx);
		
		return obj;
	}

	public GameObject Create_Buff(int iIdx, bool bGreen, bool bAlpha)
	{
		GameObject obj = Instantiate (m_objBuff) as GameObject;
		obj.transform.parent = GameObject.Find ("Buffs").transform;
		obj.transform.position = GridMgr.getInstance.GetPosOfIdx (iIdx);

		if (bGreen) {
			if(bAlpha)
				obj.GetComponent<SpriteRenderer> ().color = new Color (0, 218 / 255f, 46 / 255f, 100 / 255f);
			else
				obj.GetComponent<SpriteRenderer> ().color = new Color (0, 218 / 255f, 46 / 255f);
		} else {
			if(bAlpha)
				obj.GetComponent<SpriteRenderer> ().color = new Color (236 / 255f, 14 / 255f, 14 / 255f, 100 / 255f);
			else
				obj.GetComponent<SpriteRenderer> ().color = new Color (236 / 255f, 14 / 255f, 14 / 255f);
		}

		return obj;
	}

	public GameObject Create_StickableDot(int iIdx, Color color = default(Color))
	{
		GameObject obj = Instantiate (m_objStickableDot) as GameObject;
		obj.transform.parent = GameObject.Find("StickableDots").transform;
		obj.transform.position = GridMgr.getInstance.GetPosOfIdx (iIdx);

		if (color != default(Color))
			obj.GetComponent<SpriteRenderer> ().color = color;

		return obj;
	}

	public GameObject Create_WorldIcon(Vector3 pos, int type = 0)
	{
		GameObject obj = Instantiate (m_WorldIcon) as GameObject;
		obj.transform.parent = GameObject.Find ("WorldIcons").transform;

		obj.GetComponent<WorldIcon> ().m_iconType = type;
		obj.GetComponent<WorldIcon>().m_iGridIdx = GridMgr.getInstance.GetGridIdx(pos);

		obj.GetComponent<WorldIcon> ().Init ();

		return obj;
	}

	public GameObject Create_WorldGeo(Vector3 pos, int iType = 0)
	{
		GameObject obj = Instantiate (m_WorldGeo) as GameObject;
		obj.transform.parent = GameObject.Find ("Geo").transform;
		obj.transform.position = pos;

		switch (iType) {
		case (int)WORLD_GEO.GRASS:
			break;
		case (int)WORLD_GEO.WATER:
			obj.GetComponent<WorldGeo> ().m_geoStatus = WORLD_GEO.WATER;
			obj.GetComponent<SpriteRenderer> ().sprite = m_sheet_worldGeo [1];
			break;
		}

		return obj;
	}

	public GameObject Create_Part(Part part, string name, float rotation, float scaleX)
	{
		GameObject obj = Instantiate (m_Part) as GameObject;
		obj.transform.parent = GameObject.Find ("Player").transform;
		obj.transform.position = GridMgr.getInstance.GetPosOfIdx_BattleGrid (part.m_iGridIdx);
		obj.transform.localRotation = Quaternion.AngleAxis (rotation, Vector3.forward);
		obj.transform.localScale = new Vector3 (scaleX, 1, 1);
		obj.gameObject.name = name;

		Part cpart = obj.GetComponent<Part> ();
		System.Reflection.FieldInfo[] fields = cpart.GetType().GetFields(); 
		foreach (System.Reflection.FieldInfo field in fields)
		{
			field.SetValue(cpart, field.GetValue(part));
		}

		cpart.m_bLoadedPart = true;
		cpart.SetListBuff ();

		switch(part.m_iEnemyType)
		{
		case (int)ENEMY_TYPE.CIVILIAN:
			if (name.Contains ("Head")) {
				obj.GetComponent<SpriteRenderer> ().sprite = m_sheet_civilian_head [part.m_iSaveValue];
			} else if (name.Contains ("Body")) {
				obj.GetComponent<SpriteRenderer> ().sprite = m_sheet_civilian_body [part.m_iSaveValue][0];
				obj.GetComponent<SpriteSheet> ().m_sheet_sprite = m_sheet_civilian_body [part.m_iSaveValue];
			} else if (name.Contains ("Hand")) {
				obj.GetComponent<SpriteRenderer> ().sprite = m_sheet_civilian_arm [part.m_iSaveValue];
			} else if (name.Contains ("Leg")) {
				obj.GetComponent<SpriteRenderer> ().sprite = m_sheet_civilian_leg [part.m_iSaveValue];
			}
			break;

		case (int)ENEMY_TYPE.HERO:
			switch (part.m_iSaveValue) { // used to hero index
			case (int)HERO.WALLACE:
				if (name.Equals ("Head")) {
					obj.GetComponent<SpriteRenderer> ().sprite = Resources.Load<Sprite>("Sprites/Sheets/Heroes/Wallace/wallace_head_0");
				} else if (name.Equals ("Body_0")) {
					obj.GetComponent<SpriteSheet> ().m_sheet_sprite = Resources.LoadAll<Sprite> ("Sprites/Sheets/Heroes/Wallace/sheet_wallace_body_0");
					obj.GetComponent<SpriteRenderer> ().sprite = obj.GetComponent<SpriteSheet> ().m_sheet_sprite [0];
				} else if (name.Equals ("Body_1")) {
					obj.GetComponent<SpriteSheet> ().m_sheet_sprite = Resources.LoadAll<Sprite> ("Sprites/Sheets/Heroes/Wallace/sheet_wallace_body_1");
					obj.GetComponent<SpriteRenderer> ().sprite = obj.GetComponent<SpriteSheet> ().m_sheet_sprite [0];
				} else if (name.Equals ("Leg")) {
					obj.GetComponent<SpriteRenderer> ().sprite = Resources.Load<Sprite>("Sprites/Sheets/Heroes/Wallace/wallace_legs_0");
				} else if (name.Equals ("Hand_R")) {
					obj.GetComponent<SpriteRenderer> ().sprite = Resources.Load<Sprite>("Sprites/Sheets/Heroes/Wallace/wallace_arms_0");
				}
				break;
			}
			break;
		}

		return obj;
	}


	public GameObject Create_Poop()
	{
		GameObject obj = Instantiate (m_objPoop) as GameObject;
		obj.transform.parent = GameObject.Find("Poops").transform;
		obj.transform.position = GameObject.Find("Core").transform.position;
		
		return obj;
	}

	public GameObject Create_HealthBar(GameObject target)
	{
		GameObject obj = Instantiate (m_HealthBar) as GameObject;
		obj.transform.parent = GameObject.Find ("HealthBar").transform;
		obj.GetComponent<UIFollowTarget> ().target = target.transform;
		obj.transform.localScale = Vector3.one;

		return obj;
	}

	public GameObject Create_DamageUI(GameObject target, float fDamage, bool bMinus, bool bDodge = false)
	{
		GameObject obj = Instantiate (m_DamageUI) as GameObject;
		obj.transform.parent = GameObject.Find ("DamagePanel").transform;
		obj.GetComponent<UIFollowTarget> ().target = target.transform;
		obj.transform.localScale = Vector3.one;
		obj.GetComponent<DamageUI> ().m_fDamage = fDamage;
		obj.GetComponent<DamageUI> ().m_bMinus = bMinus;
		obj.GetComponent<DamageUI> ().m_bDodge = bDodge;

		return obj;
	}

	public GameObject Create_LiveStock()
	{
		GameObject obj;

		if(Random.Range(0f,1f) <= 0.5f)
			obj = Instantiate (m_objChicken) as GameObject;
		else
			obj = Instantiate (m_objGoat) as GameObject;

		obj.transform.parent = GameObject.Find ("Enemies").transform;
		obj.transform.localPosition = RandomBornPos (obj);

		return obj;
	}

	public GameObject Create_Hero(int iHeroIdx)
	{
		GameObject obj;
		float fRandom = 0f;

		obj = Instantiate (m_objHero[iHeroIdx]) as GameObject;

		obj.transform.parent = GameObject.Find ("Enemies").transform;
		obj.transform.localPosition = RandomBornPos (obj);

		switch (iHeroIdx) {
		case 0: //wallace
			GameObject head = obj.transform.Find ("Head").gameObject;
			Part headPart = head.GetComponent<Part> ();
			headPart.m_fHealth = Random.Range (15, 18);
			headPart.m_fCurHealth = fRandom;
			headPart.m_dicStat.Add ("Health", headPart.m_fHealth);
			headPart.m_dicStat.Add ("IQ", 100);
			headPart.m_lstStrBuff.Add ("HeadBuff_2");
			headPart.m_dicStatBuff ["Attack"] = 2;
			headPart.m_dicStatBuff ["AttackSpeed"] = 2;
			headPart.m_iEnemyType = (int)ENEMY_TYPE.HERO;

			GameObject Upbody = obj.transform.GetChild(1).gameObject;
			Part UpbodyPart = Upbody.GetComponent<Part> ();
			fRandom = Random.Range (25,30);
			UpbodyPart.m_fHealth = fRandom;
			UpbodyPart.m_fCurHealth = fRandom;
			UpbodyPart.m_dicStat.Add ("Health", fRandom);
			fRandom = Random.Range (5,8);
			UpbodyPart.m_dicStat.Add ("Defense", fRandom);
			UpbodyPart.m_iEnemyType = (int)ENEMY_TYPE.HERO;

			GameObject Downbody = obj.transform.GetChild(2).gameObject;
			Part DownbodyPart = Downbody.GetComponent<Part> ();
			fRandom = Random.Range (25,30);
			DownbodyPart.m_fHealth = fRandom;
			DownbodyPart.m_fCurHealth = fRandom;
			DownbodyPart.m_dicStat.Add ("Health", fRandom);
			fRandom = Random.Range (5,8);
			DownbodyPart.m_dicStat.Add ("Defense", fRandom);
			DownbodyPart.m_iEnemyType = (int)ENEMY_TYPE.HERO;

			GameObject arm = obj.transform.Find ("Hand_R").gameObject;
			Part armPart = arm.GetComponent<Part> ();
			fRandom = Random.Range (5, 9);
			float fSpeedRandom = Random.Range (1, 3);
			armPart.m_bUse32PixelHand = true;
			armPart.m_dicStat.Add ("Attack", fRandom);
			armPart.m_dicStat.Add ("AttackSpeed", fSpeedRandom);
			fRandom = Random.Range (15,18);
			armPart.m_fHealth = fRandom;
			armPart.m_fCurHealth = fRandom;
			armPart.m_dicStat.Add ("Health", fRandom);
			armPart.m_iEnemyType = (int)ENEMY_TYPE.HERO;

			GameObject leg = obj.transform.Find ("Leg").gameObject;
			Part legPart = leg.GetComponent<Part> ();
			fRandom = Random.Range (15,18);
			float fRandomDodge = Random.Range (5,7);
			legPart.m_fHealth = fRandom;
			legPart.m_fCurHealth = fRandom;
			legPart.m_dicStat.Add ("Health", fRandom);
			legPart.m_dicStat.Add ("Dodge", fRandomDodge);
			legPart.m_dicStatBuff["Dodge"] = fRandomDodge;
			legPart.m_lstStrBuff.Add ("LegBuff");
			legPart.m_iEnemyType = (int)ENEMY_TYPE.HERO;
			break;
		}

		return obj;
	}

	public GameObject Create_Civilian()
	{
		GameObject obj;
		float fRandom = 0f;

		
		obj = Instantiate (m_objCivilian) as GameObject;
		
		obj.transform.parent = GameObject.Find ("Enemies").transform;
		obj.transform.localPosition = RandomBornPos (obj);

		//Head Setting
		float fRandomIQ = 0;
		GameObject head = obj.transform.Find ("Head").gameObject;
		Part headPart = head.GetComponent<Part> ();

		int iHeadRandom = Random.Range (0, m_sheet_civilian_head.Length);
		head.GetComponent<SpriteRenderer>().sprite = m_sheet_civilian_head[iHeadRandom];
		if (iHeadRandom < 3) { // Young
			headPart.m_strNameKey = "어린 시민 머리";
			fRandom = Random.Range (3,5);
		} else if (iHeadRandom < 9) { // MiddleAge
			headPart.m_strNameKey = "시민 머리";
			fRandom = Random.Range (4,7);
		} else { // Old
			headPart.m_strNameKey = "늙은 시민 머리";
			fRandom = Random.Range (3,5);
		}
		fRandomIQ = Random.Range (70, 90);

		headPart.m_fHealth = fRandom;
		headPart.m_fCurHealth = fRandom;
		headPart.m_dicStat.Add ("Health", fRandom);
		headPart.m_dicStat.Add ("IQ", fRandomIQ);
		headPart.m_iSaveValue = iHeadRandom;
		headPart.m_iEnemyType = (int)ENEMY_TYPE.CIVILIAN;

		switch (Random.Range(0,3)) {
		case 0:
			break;
		case 1:
			headPart.m_lstStrBuff.Add ("HeadBuff_0");
			if(headPart.m_dicStat["IQ"] < 80)
				headPart.m_dicStatBuff["Attack"] = 1;
			else
				headPart.m_dicStatBuff["Attack"] = 2;
			break;
		case 2:
			headPart.m_lstStrBuff.Add ("HeadBuff_1");
			if(headPart.m_dicStat["IQ"] < 80)
				headPart.m_dicStatBuff["AttackSpeed"] = 1;
			else
				headPart.m_dicStatBuff["AttackSpeed"] = 2;
			break;
		}

		//Body Setting
		GameObject body = obj.transform.Find ("Body").gameObject;
		int iBodyRandom = Random.Range (0, m_iCivlian_body_count);
		body.GetComponent<SpriteRenderer>().sprite = m_sheet_civilian_body[iBodyRandom][0];
		body.GetComponent<SpriteSheet>().m_sheet_sprite = m_sheet_civilian_body[iBodyRandom];

//		body.GetComponent<Part> ().m_dicStat = new Dictionary<string, float>();

		fRandom = Random.Range (8,13);
		Part bodyPart = body.GetComponent<Part> ();
		bodyPart.m_fHealth = fRandom;
		bodyPart.m_fCurHealth = fRandom;
		bodyPart.m_dicStat.Add ("Health", fRandom);

		fRandom = Random.Range (0,3);
		bodyPart.m_dicStat.Add ("Defense", fRandom);
		bodyPart.m_iSaveValue = iBodyRandom;
		bodyPart.m_iEnemyType = (int)ENEMY_TYPE.CIVILIAN;

		//Arms Setting
		GameObject arm = obj.transform.Find ("Hand_R").gameObject;
		Part armPart = arm.GetComponent<Part> ();
		int iArmRandom = Random.Range (0, m_sheet_civilian_arm.Length);
		arm.GetComponent<SpriteRenderer>().sprite = m_sheet_civilian_arm[iArmRandom];
		float fSpeedRandom = 0f;
		switch (iArmRandom) {
		case 0:
			armPart.m_strNameKey = "큰 낫";
			fRandom = Random.Range (3, 5);
			fSpeedRandom = Random.Range (1, 3);
			Destroy (obj.transform.Find ("Hand_L").gameObject);
			armPart.m_bUse32PixelHand = true;
			break;
		case 1:
			armPart.m_strNameKey = "낫";
			fRandom = Random.Range (1,3);
			fSpeedRandom = Random.Range (4, 7);
			break;
		case 2:
			armPart.m_strNameKey = "원형 낫";
			fRandom = Random.Range (1,3);
			fSpeedRandom = Random.Range (4, 7);
			break;
		case 3:
			armPart.m_strNameKey = "도끼";
			fRandom = Random.Range (2,4);
			fSpeedRandom = Random.Range (2, 5);
			break;
		case 4:
			armPart.m_strNameKey = "곡괭이";
			fRandom = Random.Range (2,4);
			fSpeedRandom = Random.Range (1, 3);
			Destroy (obj.transform.Find ("Hand_L").gameObject);
			armPart.m_bUse32PixelHand = true;
			break;
		case 5:
			armPart.m_strNameKey = "쇠스랑";
			fRandom = Random.Range (1,3);
			fSpeedRandom = Random.Range (1, 3);
			Destroy (obj.transform.Find ("Hand_L").gameObject);
			armPart.m_bUse32PixelHand = true;
			break;
		case 6:
			armPart.m_strNameKey = "삽";
			fRandom = Random.Range (1,3);
			fSpeedRandom = Random.Range (1, 3);
			Destroy (obj.transform.Find ("Hand_L").gameObject);
			armPart.m_bUse32PixelHand = true;
			break;
		case 7:
			armPart.m_strNameKey = "망치";
			fRandom = Random.Range (2,4);
			fSpeedRandom = Random.Range (2, 5);
			break;
		case 8:
			armPart.m_strNameKey = "식칼";
			fRandom = Random.Range (1,3);
			fSpeedRandom = Random.Range (4, 7);
			break;
		case 9:
			armPart.m_strNameKey = "오함마";
			fRandom = Random.Range (3, 5);
			fSpeedRandom = Random.Range (1, 3);
			Destroy (obj.transform.Find ("Hand_L").gameObject);
			armPart.m_bUse32PixelHand = true;
			break;
		}

//		arm.GetComponent<Part> ().m_dicStat = new Dictionary<string, float>();

		armPart.m_dicStat.Add ("Attack", fRandom);
		armPart.m_dicStat.Add ("AttackSpeed", fSpeedRandom);

		fRandom = Random.Range (4,7);
		armPart.m_fHealth = fRandom;
		armPart.m_fCurHealth = fRandom;
		armPart.m_dicStat.Add ("Health", fRandom);
		armPart.m_iSaveValue = iArmRandom;
		armPart.m_iEnemyType = (int)ENEMY_TYPE.CIVILIAN;

		//Legs Setting
		float fRandomDodge = 0;
		GameObject leg = obj.transform.Find ("Leg").gameObject;
		Part legPart = leg.GetComponent<Part> ();
		int iLegRandom = Random.Range (0, m_sheet_civilian_leg.Length);
		leg.GetComponent<SpriteRenderer>().sprite = m_sheet_civilian_leg[iLegRandom];
		if (iLegRandom < 6) { // normal
			legPart.m_strNameKey = "시민 다리";
			fRandom = Random.Range (5,7);
			fRandomDodge = Random.Range (3,5);
		} else { // thin
			legPart.m_strNameKey = "가녀린 시민 다리";
			fRandom = Random.Range (3,5);
			fRandomDodge = Random.Range (1,3);
		}
			
//		leg.GetComponent<Part> ().m_dicStat = new Dictionary<string, float>();

		legPart.m_fHealth = fRandom;
		legPart.m_fCurHealth = fRandom;
		legPart.m_dicStat.Add ("Health", fRandom);
		legPart.m_dicStat.Add ("Dodge", fRandomDodge);

		legPart.m_dicStatBuff["Dodge"] = fRandomDodge;

		legPart.m_lstStrBuff.Add ("LegBuff");
		legPart.m_iSaveValue = iLegRandom;
		legPart.m_iEnemyType = (int)ENEMY_TYPE.CIVILIAN;

		return obj;
	}

	Vector3 RandomBornPos(GameObject obj)
	{
		Vector3 vecBornPos = new Vector3 (0, Random.Range (-0.35f, 0.35f));

		if (Random.Range (0, 2) == 0) {
			vecBornPos = new Vector3 (2f, vecBornPos.y);
			obj.GetComponent<FSM_Enemy> ().m_bBornAtLeft = false;
		} else {
			vecBornPos = new Vector3 (-2f, vecBornPos.y);
			obj.GetComponent<FSM_Enemy> ().m_bBornAtLeft = true;
		}

		obj.GetComponent<FSM_Enemy>().m_objHealthBar = Create_HealthBar (obj);

		return vecBornPos;
	}
}
