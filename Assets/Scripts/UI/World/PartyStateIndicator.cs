using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PartyStateIndicator : MonoBehaviour {

	// Use this for initialization
	void OnEnable () {
		StartCoroutine (Tweener ());
	}

	IEnumerator Tweener()
	{
		bool bUpward = true;
		WaitForSeconds waitSecond = new WaitForSeconds (1f);
		do {
			if(bUpward){
				iTween.MoveTo(gameObject, iTween.Hash("y", 0.01f, "isLocal", true, "time" , 1f, "easetype", "easeInSine"));
				bUpward = false;
			}else{
				iTween.MoveTo(gameObject, iTween.Hash("y", 0f, "isLocal", true, "time" , 1f, "easetype", "easeInSine"));
				bUpward = true;
			}

			yield return waitSecond;

		} while(true);
	}

}
