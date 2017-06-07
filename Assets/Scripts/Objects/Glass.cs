using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Glass : MonoBehaviour {

	public IEnumerator ToggleColor(bool bToBlack)
	{
		SpriteRenderer sprite = GetComponent<SpriteRenderer> ();

		if (!bToBlack) {
			do{
				sprite.color = new Color(sprite.color.r + 0.02f, sprite.color.g + 0.02f, sprite.color.b + 0.02f);
				yield return null;
			}while(sprite.color.r < 1f);
		} else {
			do{
				sprite.color = new Color(sprite.color.r - 0.02f, sprite.color.g - 0.02f, sprite.color.b - 0.02f);
				yield return null;
			}while(sprite.color.r > 0f);
		}
	}
}
