using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ControlTap : MonoBehaviour {

	void OnPress(bool isDown)
	{
		Core core = GameObject.Find ("Core").GetComponent<Core> ();

		if (isDown) {
			switch(gameObject.name){
			case "Left":
				core.m_bControl[0] = true;
				break;

			case "Up":
				core.m_bControl[1] = true;
				break;

			case "Right":
				core.m_bControl[2] = true;
				break;

			case "Down":
				core.m_bControl[3] = true;
				break;				
			}
		} else {
			switch(gameObject.name){
			case "Left":
				core.m_bControl[0] = false;
				break;
				
			case "Up":
				core.m_bControl[1] = false;
				break;
				
			case "Right":
				core.m_bControl[2] = false;
				break;
				
			case "Down":
				core.m_bControl[3] = false;
				break;				
			}
		}
	}
}
