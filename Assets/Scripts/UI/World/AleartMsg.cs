using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AleartMsg : MonoBehaviour {

	// Use this for initialization
	void Start () {
		StartCoroutine (Destroier ());
	}

	IEnumerator Destroier()
	{
		yield return new WaitForSeconds (5f);

		GetComponent<TweenAlpha> ().Play (false);

		yield return new WaitForSeconds (0.25f);

		Destroy (gameObject);
	}

	void MoveUp()
	{
		iTween.MoveTo (gameObject, iTween.Hash ("x", transform.localPosition.x, "y", transform.localPosition.y + 25, "time", 0.25f, "easetype", "easeInSine", "islocal", true));
	}

}
