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
	public Sprite[][] m_sheet_cattle;
	public Sprite[] m_sheet_core;
	public Sprite[] m_sheet_wolf;
	public Sprite[] m_sheet_farmer_0;
	public Sprite[] m_sheet_chicken_0;
	public Sprite[] m_sheet_goat_0;

	// Use this for initialization
	public void ResourcesLoad () {
		m_objAleart = Resources.Load ("Prefabs/Objects/Aleart") as GameObject;
		m_objStickableDot = Resources.Load ("Prefabs/Objects/StickableDot") as GameObject;
		m_objPoop = Resources.Load ("Prefabs/Objects/PoopParticle") as GameObject;

		m_sprite_meat = Resources.Load<Sprite> ("Sprites/Meat");

		m_sheet_cattle = new Sprite[4][];
		for(int i = 0; i < 4; ++i)
			m_sheet_cattle[i] = Resources.LoadAll<Sprite>(string.Format("Sprites/Sheets/sheet_cattle_{0}",i));

		m_sheet_core = Resources.LoadAll<Sprite>("Sprites/Sheets/sheet_core");
		m_sheet_wolf = Resources.LoadAll<Sprite>("Sprites/Sheets/sheet_wolf");
		m_sheet_farmer_0 = Resources.LoadAll<Sprite> ("Sprites/Sheets/sheet_farmer_0");
		m_sheet_chicken_0 = Resources.LoadAll<Sprite> ("Sprites/Sheets/sheet_chicken_0");
		m_sheet_goat_0 = Resources.LoadAll<Sprite> ("Sprites/Sheets/sheet_goat_0");

		m_objChicken = Resources.Load("Prefabs/Objects/Enemies/Chicken") as GameObject;
		m_objGoat = Resources.Load("Prefabs/Objects/Enemies/Goat") as GameObject;
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
