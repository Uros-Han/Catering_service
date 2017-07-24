using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectFactory : Singleton<ObjectFactory> {


	void Awake () {		
		DontDestroyOnLoad(gameObject);
	}
	GameObject m_objAleart;
	GameObject m_objStickableDot;
	GameObject m_objCattle;
	GameObject m_objWolf;

	public Sprite m_sprite_meat;
	public Sprite[][] m_sheet_cattle;
	public Sprite[] m_sheet_core;
	public Sprite[] m_sheet_wolf;
	public Sprite[] m_sheet_farmer_0;

	// Use this for initialization
	public void ResourcesLoad () {
		m_objAleart = Resources.Load ("Prefabs/Objects/Aleart") as GameObject;
		m_objStickableDot = Resources.Load ("Prefabs/Objects/StickableDot") as GameObject;
		m_objCattle = Resources.Load ("Prefabs/Objects/Parts/Cattle") as GameObject;
		m_objWolf = Resources.Load ("Prefabs/Objects/Parts/Wolf") as GameObject;

		m_sprite_meat = Resources.Load<Sprite> ("Sprites/Meat");

		m_sheet_cattle = new Sprite[4][];
		for(int i = 0; i < 4; ++i)
			m_sheet_cattle[i] = Resources.LoadAll<Sprite>(string.Format("Sprites/Sheets/sheet_cattle_{0}",i));

		m_sheet_core = Resources.LoadAll<Sprite>("Sprites/Sheets/sheet_core");
		m_sheet_wolf = Resources.LoadAll<Sprite>("Sprites/Sheets/sheet_wolf");
		m_sheet_farmer_0 = Resources.LoadAll<Sprite> ("Sprites/Sheets/sheet_farmer_0");
	}

	public GameObject Create_Aleart(int iIdx)
	{
		GameObject obj = Instantiate (m_objAleart) as GameObject;
		obj.transform.parent = GameObject.Find("PartBorder").transform;
		obj.transform.position = GridMgr.getInstance.GetPosOfIdx(iIdx);
		
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
//
//	public GameObject Create_Cattle(DIRECTION dir)
//	{
//		GameObject obj = Instantiate (m_objCattle) as GameObject;
//		obj.transform.parent = GameObject.Find("Enemies").transform;
//
////		obj.GetComponent<Enemy> ().m_headingDirection = dir;
//		obj.GetComponent<Part> ().SetDirection ();
//		return obj;
//	}
//
//	public GameObject Create_Wolf(DIRECTION dir)
//	{
//		GameObject obj = Instantiate (m_objWolf) as GameObject;
//		obj.transform.parent = GameObject.Find("Enemies").transform;
//		
////		obj.GetComponent<Enemy> ().m_headingDirection = dir;
//		obj.GetComponent<Part> ().SetDirection ();
//		return obj;
//	}
}
