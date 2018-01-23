using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Battle_Geo : MonoBehaviour {

	public IEnumerator ToggleColor(bool bToBlack)
	{
		SpriteRenderer sprite = GetComponent<SpriteRenderer> ();

		if (!bToBlack) {
			do{
				if(sprite == null)
					yield break;

				sprite.color = new Color(sprite.color.r + 0.02f, sprite.color.g + 0.02f, sprite.color.b + 0.02f);
				yield return null;
			}while(sprite!=null && sprite.color.r < 1f);
		} else {
			do{
				if(sprite == null)
					yield break;
				
				sprite.color = new Color(sprite.color.r - 0.02f, sprite.color.g - 0.02f, sprite.color.b - 0.02f);
				yield return null;
			}while(sprite!=null && sprite.color.r > 0f);
		}
	}
}
