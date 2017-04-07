using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectFactory : Singleton<ObjectFactory> {


	void Awake () {		
		DontDestroyOnLoad(gameObject);
	}
	GameObject m_objAleart;
	GameObject m_objStickableDot;
	GameObject m_objPig;
	GameObject m_objWolf;

	public Sprite[] m_sheet_pig;
	public Sprite[] m_sheet_core;
	public Sprite[] m_sheet_wolf;

	// Use this for initialization
	public void ResourcesLoad () {
		m_objAleart = Resources.Load ("Prefabs/Objects/Aleart") as GameObject;
		m_objStickableDot = Resources.Load ("Prefabs/Objects/StickableDot") as GameObject;
		m_objPig = Resources.Load ("Prefabs/Objects/Parts/Pig") as GameObject;
		m_objWolf = Resources.Load ("Prefabs/Objects/Parts/Wolf") as GameObject;

		m_sheet_pig = Resources.LoadAll<Sprite>("Sprites/Sheets/sheet_pig");
		m_sheet_core = Resources.LoadAll<Sprite>("Sprites/Sheets/sheet_core");
		m_sheet_wolf = Resources.LoadAll<Sprite>("Sprites/Sheets/sheet_wolf");
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

	public GameObject Create_Pig(DIRECTION dir)
	{
		GameObject obj = Instantiate (m_objPig) as GameObject;
		obj.transform.parent = GameObject.Find("Enemies").transform;

		obj.GetComponent<Enemy> ().m_headingDirection = dir;
		obj.GetComponent<Part> ().SetDirection ();
		return obj;
	}

	public GameObject Create_Wolf(DIRECTION dir)
	{
		GameObject obj = Instantiate (m_objWolf) as GameObject;
		obj.transform.parent = GameObject.Find("Enemies").transform;
		
		obj.GetComponent<Enemy> ().m_headingDirection = dir;
		obj.GetComponent<Part> ().SetDirection ();
		return obj;
	}
}
