using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectFactory : MonoBehaviour {

	private static ObjectFactory instance;
	
	public static ObjectFactory getInstance
	{
		get
		{
			if (instance == null)
			{
				instance = FindObjectOfType(typeof(ObjectFactory)) as ObjectFactory;
			}
			
			if (instance == null)
			{
				GameObject obj = new GameObject("ObjectFactory");
				instance = obj.AddComponent(typeof(ObjectFactory)) as ObjectFactory;
			}
			
			return instance;
		}
	}

	void Awake () {
		if (instance == null)
			instance = this;
		
		else if (instance != this)
			Destroy(gameObject);
		
		DontDestroyOnLoad(gameObject);
	}

	GameObject m_objPig;

	// Use this for initialization
	public void ResourcesLoad () {
		m_objPig = Resources.Load ("Prefabs/Objects/Parts/Pig") as GameObject;
	}

	public GameObject Create_Pig(DIRECTION dir)
	{
		GameObject obj = Instantiate (m_objPig) as GameObject;
		obj.transform.parent = GameObject.Find("Enemies").transform;

		obj.GetComponent<Enemy> ().m_headingDirection = dir;

		return obj;
	}
}
