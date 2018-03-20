using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class AleartMsg : MonoBehaviour {

	float m_fTimer = 5f;
	// Use this for initialization
	void Start () {
		DontDestroyOnLoad (gameObject);
		SceneManager.activeSceneChanged += ChgParent;
	}

	void OnEnable()
	{
		StartCoroutine (Destroier ());
	}

	IEnumerator Destroier()
	{
		do {
			m_fTimer -= Time.deltaTime;
			yield return null;
		} while(m_fTimer > 0f);

		GetComponent<TweenAlpha> ().Play (false);

		yield return new WaitForSeconds (0.25f);


		SceneManager.activeSceneChanged -= ChgParent;
		Destroy (gameObject);
	}

	void MoveUp()
	{
		iTween.MoveTo (gameObject, iTween.Hash ("x", transform.localPosition.x, "y", transform.localPosition.y + 25, "time", 0.25f, "easetype", "easeInSine", "islocal", true));
	}

	void ChgParent(Scene beforeScene, Scene curScene)
	{
		transform.parent = GameObject.Find ("AleartMsg").transform;
	}
}
