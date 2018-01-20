using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Raider : Party {

	protected override void Start ()
	{
		base.Start ();

		m_strPartyName = Localization.Get ("Party_Raider");
		m_partyType = PARTY_TYPE.RAID;
	}

	protected override void SetDestination()
	{
		m_iDestinationIdx = GridMgr.getInstance.GetGridIdx (GameObject.Find ("Core").transform.position);
		m_iFatigue = Random.Range (4, 8);

		m_listMoveIdx = AStar.getInstance.AStarStart_World(GridMgr.getInstance.GetGridIdx(gameObject.transform.position), m_iDestinationIdx);

		base.SetDestination ();
	}
}
