using UnityEngine;
using System.Collections;

public class DebugLine : MonoBehaviour {
	public bool m_bVertical;

	public void Init(Vector3 pos, bool bVertical,float fSize,int iCountX, int iCountY)
	{
		m_bVertical = bVertical;

		transform.position = pos;

		if(m_bVertical)
			transform.localScale = new Vector2 (0.1f,fSize * 10 *iCountY);
		else
			transform.localScale = new Vector2 (fSize * 10 *iCountX,0.1f);
	}

	public IEnumerator AlphToggle(bool bToWhite)
	{
		SpriteRenderer sprite = GetComponent<SpriteRenderer> ();

		if (bToWhite) {
			do{
				sprite.color = new Color(1,1,1, sprite.color.a + 0.01f);
				yield return null;
			}while(sprite.color.a < 0.5f);
		} else {
			do{
				sprite.color = new Color(1,1,1, sprite.color.a - 0.01f);
				yield return null;
			}while(sprite.color.a > 0f);
		}
	}
}