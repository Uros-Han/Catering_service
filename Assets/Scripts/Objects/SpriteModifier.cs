using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpriteModifier : MonoBehaviour {

	public Sprite m_ModifiedSprite;

	public void SpriteModify()
	{
		GetComponent<SpriteRenderer> ().sprite = m_ModifiedSprite;
	}
}
