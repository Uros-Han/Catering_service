using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WantedReward : MonoBehaviour {

	UILabel m_RewardMoneyLabel;
	bool m_bWantedReward;
	// Use this for initialization
	void Start () {
		if (gameObject.name.Equals ("WantedReward")) {
			m_RewardMoneyLabel = transform.Find ("Reward").GetComponent<UILabel> ();
			m_bWantedReward = true;
		}else
			m_RewardMoneyLabel = transform.Find ("Num").GetComponent<UILabel> ();
	}

	void Update()
	{
		if(m_bWantedReward)
			m_RewardMoneyLabel.text = BattleSceneMgr.getInstance.m_iReward.ToString();
		else
			m_RewardMoneyLabel.text = BattleSceneMgr.getInstance.m_iDay.ToString();
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
