using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WantedReward : MonoBehaviour {

	UILabel m_RewardMoneyLabel;

	// Use this for initialization
	void Start () {
		m_RewardMoneyLabel = transform.FindChild ("Reward").GetComponent<UILabel> ();
	}

	void Update()
	{
		m_RewardMoneyLabel.text = BattleSceneMgr.getInstance.m_iReward.ToString();
	}

	public IEnumerator WantedPop()
	{
		TweenPosition tween = GetComponent<TweenPosition> ();

//		tween.ResetToBeginning ();
		tween.Play ();

		yield return new WaitForSeconds (tween.duration + 3f);

		tween.Play (false);
	}
}
