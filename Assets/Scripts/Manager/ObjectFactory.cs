using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectFactory : Singleton<ObjectFactory> {


	void Awake () {		
		DontDestroyOnLoad(gameObject);
	}
	GameObject m_objAleart;
	GameObject m_objStickableDot;
	GameObject m_objPoop;

	GameObject m_objChicken;
	GameObject m_objGoat;
	GameObject m_objCivilian;

	public Sprite m_sprite_meat;
	public Sprite[] m_sheet_core;

	public Sprite[] m_sheet_chicken_0;
	public Sprite[] m_sheet_goat_0;

	public Sprite[] m_sheet_civilian_head;
	public Sprite[] m_sheet_civilian_leg;
	public Sprite[] m_sheet_civilian_arm;
	public Sprite[] m_sheet_civilian_body_0;

	// Use this for initialization
	public void ResourcesLoad () {
		m_objAleart = Resources.Load ("Prefabs/Objects/Aleart") as GameObject;
		m_objStickableDot = Resources.Load ("Prefabs/Objects/StickableDot") as GameObject;
		m_objPoop = Resources.Load ("Prefabs/Objects/PoopParticle") as GameObject;

		m_sprite_meat = Resources.Load<Sprite> ("Sprites/Meat");

		m_sheet_core = Resources.LoadAll<Sprite>("Sprites/Sheets/sheet_core");

		///Livestocks
		m_sheet_chicken_0 = Resources.LoadAll<Sprite> ("Sprites/Sheets/Livestock/sheet_chicken_0");
		m_sheet_goat_0 = Resources.LoadAll<Sprite> ("Sprites/Sheets/Livestock/sheet_goat_0");

		m_objChicken = Resources.Load("Prefabs/Objects/Enemies/Chicken") as GameObject;
		m_objGoat = Resources.Load("Prefabs/Objects/Enemies/Goat") as GameObject;

		///Civilians
		m_sheet_civilian_head = Resources.LoadAll<Sprite> ("Sprites/Sheets/Civilian/sheet_civ_heads");
		m_sheet_civilian_leg = Resources.LoadAll<Sprite> ("Sprites/Sheets/Civilian/sheet_civ_legs");
		m_sheet_civilian_arm = Resources.LoadAll<Sprite> ("Sprites/Sheets/Civilian/sheet_civ_arms");
		m_sheet_civilian_body_0 = Resources.LoadAll<Sprite> ("Sprites/Sheets/Civilian/sheet_civ_0");
		m_objCivilian = Resources.Load("Prefabs/Objects/Enemies/Civilian") as GameObject;
	}

	public GameObject Create_Aleart(int iIdx)
	{
		GameObject obj = Instantiate (m_objAleart) as GameObject;
		obj.transform.parent = GameObject.Find("Alearts").transform;
		obj.transform.position = GridMgr.getInstance.GetPosOfIdx (iIdx);
		
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

	public GameObject Create_Poop()
	{
		GameObject obj = Instantiate (m_objPoop) as GameObject;
		obj.transform.parent = GameObject.Find("Poops").transform;
		obj.transform.position = GameObject.Find("Core").transform.position;
		
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

	public GameObject Create_Civilian() // TODO : part random
	{
		GameObject obj;
		
		obj = Instantiate (m_objCivilian) as GameObject;
		
		obj.transform.parent = GameObject.Find ("Enemies").transform;
		obj.transform.localPosition = RandomBornPos (obj);

		//Head Setting
		GameObject head = obj.transform.Find ("Head").gameObject;
		int iHeadRandom = Random.Range (0, m_sheet_civilian_head.Length);
		head.GetComponent<SpriteRenderer>().sprite = m_sheet_civilian_head[iHeadRandom];
		if (iHeadRandom < 3) { // Young
			head.GetComponent<Part>().m_strNameKey = "어린 시민 머리";
		} else if (iHeadRandom < 9) { // MiddleAge
			head.GetComponent<Part>().m_strNameKey = "시민 머리";
		} else { // Old
			head.GetComponent<Part>().m_strNameKey = "늙은 시민 머리";
		}

		//Body Setting


		//Arms Setting
		GameObject arm = obj.transform.Find ("Hand_R").gameObject;
		int iArmRandom = Random.Range (0, m_sheet_civilian_arm.Length);
		arm.GetComponent<SpriteRenderer>().sprite = m_sheet_civilian_arm[iArmRandom];
		switch (iArmRandom) {
		case 0:
			arm.GetComponent<Part>().m_strNameKey = "큰 낫";
			break;
		case 1:
			arm.GetComponent<Part>().m_strNameKey = "낫";
			break;
		case 2:
			arm.GetComponent<Part>().m_strNameKey = "원형 낫";
			break;
		case 3:
			arm.GetComponent<Part>().m_strNameKey = "도끼";
			break;
		case 4:
			arm.GetComponent<Part>().m_strNameKey = "곡괭이";
			break;
		case 5:
			arm.GetComponent<Part>().m_strNameKey = "쇠스랑";
			break;
		case 6:
			arm.GetComponent<Part>().m_strNameKey = "삽";
			break;
		case 7:
			arm.GetComponent<Part>().m_strNameKey = "망치";
			break;
		case 8:
			arm.GetComponent<Part>().m_strNameKey = "식칼";
			break;
		}

		//Legs Setting
		GameObject leg = obj.transform.Find ("Leg").gameObject;
		int iLegRandom = Random.Range (0, m_sheet_civilian_leg.Length);
		leg.GetComponent<SpriteRenderer>().sprite = m_sheet_civilian_leg[iLegRandom];
		if (iLegRandom < 6) { // normal
			leg.GetComponent<Part>().m_strNameKey = "시민 다리";
		} else { // thin
			leg.GetComponent<Part>().m_strNameKey = "가녀린 시민 다리";
		}

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

		return vecBornPos;
	}
}
