using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Raider : Party
{

    protected override void Start()
    {
        m_strPartyName = Localization.Get("Party_Raider");
        m_partyType = PARTY_TYPE.RAID;
        m_iFatigue = Random.Range(4, 8);

        base.Start();

        ThinkWhatAreDoingNext();
    }

    protected override void SetDestination()
    {
        List<int> coreListMoveIdx = GameObject.Find("Core").GetComponent<Core_World>().m_listMoveIdx;
        int coreIdx = GridMgr.getInstance.GetGridIdx(GameObject.Find("Core").transform.position);

        if (coreListMoveIdx.Count != 0)
        {
            int iExpectRouteGrid = 0;
            for (int i = 0; i < coreListMoveIdx.Count; ++i)
            {
                if (coreListMoveIdx[i] == coreIdx)
                {
                    if (i + 1 < coreListMoveIdx.Count)
                        iExpectRouteGrid = coreListMoveIdx[i + 1];
                }
            }

            if (iExpectRouteGrid == 0)
                m_iDestinationIdx = coreIdx;
            //m_iDestinationIdx = coreListMoveIdx[coreListMoveIdx.Count - 1];
            else
                m_iDestinationIdx = iExpectRouteGrid;
        }
        else
            m_iDestinationIdx = coreIdx;

        m_listMoveIdx = AStar.getInstance.AStarStart_World(GridMgr.getInstance.GetGridIdx(gameObject.transform.position), m_iDestinationIdx, true);

        base.SetDestination();
    }
}
