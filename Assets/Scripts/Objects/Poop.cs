using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Poop : MonoBehaviour {

	// Use this for initialization
	void Start () {
		iTween.MoveTo (gameObject, iTween.Hash ("x", Random.Range(transform.localPosition.x - 0.2f, transform.localPosition.x + 0.2f), 
		                                        "y", Random.Range(transform.localPosition.y - 0.2f, transform.localPosition.y + 0.2f),
		                                        "z", Random.Range(transform.localPosition.z - 0.2f, transform.localPosition.z + 0.2f),
		                                        "islocal", false, "time", 1f, "easetype", "easeOutCubic"));

		StartCoroutine (DestroyThis());
	}


	IEnumerator DestroyThis()
	{
		yield return new WaitForSeconds (1f);

		SpriteParticleEmitter.DynamicEmitter emitter = GetComponent<SpriteParticleEmitter.DynamicEmitter> ();

		do{
			emitter.EmissionRate -= 3f;
			yield return null;

		}while(emitter.EmissionRate > 0);

		Destroy (gameObject);
	}
}
