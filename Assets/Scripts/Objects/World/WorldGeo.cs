using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WorldGeo : MonoBehaviour
{
    public WORLD_GEO m_geoStatus;
    public GameObject m_worldIcon;
    public bool m_bPolluted;
    public bool m_bRoad;

    //public bool bIsThisIsland = false;

    void Start()
    {

    }

    public bool CheckAroundAmIAlone(int iCoreIdx = -1) // 주변타일 검사해서 자신 혼자떨어져 있는지 검사
    {
        GridMgr grid = GridMgr.getInstance;
        int iMyIdx = grid.GetGridIdx(transform.position);

        if (iCoreIdx == -1) iCoreIdx = grid.m_iXcount * grid.m_iYcount / 2;
        int iDestIdx = iCoreIdx;

        if (AStar.getInstance.AStarStart_World(iMyIdx, iDestIdx).Count.Equals(0))
        {
            m_geoStatus = WORLD_GEO.WATER;
            GetComponent<SpriteRenderer>().sprite = ObjectFactory.getInstance.m_sheet_worldGeo[(int)WORLD_GEO.WATER];
            return true;
        }

        //여기서부턴 건물 건설 불가지형 제외 
        if (m_geoStatus == WORLD_GEO.CLIFF)
            return true;

        if (SurroundLandCheck() < 4)
        {
            return true;
        }

        return false;
    }

    int SurroundLandCheck()
    {
        int iSurLand = 0;
        GridMgr grid = GridMgr.getInstance;
        int iGridIdx = grid.GetGridIdx(transform.position);
        int m_iTileCountX = grid.m_iXcount;
        int m_iTileCountY = grid.m_iYcount;
        Transform geoTrans = GameObject.Find("Geo").transform;

        // 위
        if (iGridIdx >= m_iTileCountX // up check
            && geoTrans.GetChild(iGridIdx - m_iTileCountX).GetComponent<WorldGeo>().m_geoStatus != WORLD_GEO.WATER)
        {
            iSurLand += 1;
        }

        // 오위
        if (iGridIdx >= m_iTileCountX // up check
            && (iGridIdx + 1) % m_iTileCountX != 0 // right check
            && geoTrans.GetChild(iGridIdx - m_iTileCountX + 1).GetComponent<WorldGeo>().m_geoStatus != WORLD_GEO.WATER)
        {
            iSurLand += 1;
        }

        // 오
        if ((iGridIdx + 1) % m_iTileCountX != 0 // right check
            && geoTrans.GetChild(iGridIdx + 1).GetComponent<WorldGeo>().m_geoStatus != WORLD_GEO.WATER)
        {
            iSurLand += 1;
        }

        // 오아
        if (iGridIdx < m_iTileCountX * m_iTileCountY - m_iTileCountX // down check
            && (iGridIdx + 1) % m_iTileCountX != 0 // right check
            && geoTrans.GetChild(iGridIdx + 1 + m_iTileCountX).GetComponent<WorldGeo>().m_geoStatus != WORLD_GEO.WATER)
        {
            iSurLand += 1;
        }

        // 아
        if (iGridIdx < m_iTileCountX * m_iTileCountY - m_iTileCountX // down check
            && geoTrans.GetChild(iGridIdx + m_iTileCountX).GetComponent<WorldGeo>().m_geoStatus != WORLD_GEO.WATER)
        {
            iSurLand += 1;
        }

        // 왼아
        if (iGridIdx % m_iTileCountX != 0 // left check
            && iGridIdx < m_iTileCountX * m_iTileCountY - m_iTileCountX // down check
            && geoTrans.GetChild(iGridIdx + m_iTileCountX - 1).GetComponent<WorldGeo>().m_geoStatus != WORLD_GEO.WATER)
        {
            iSurLand += 1;
        }

        // 왼
        if (iGridIdx % m_iTileCountX != 0 // left check
            && geoTrans.GetChild(iGridIdx - 1).GetComponent<WorldGeo>().m_geoStatus != WORLD_GEO.WATER)
        {
            iSurLand += 1;
        }

        // 왼위
        if (iGridIdx >= m_iTileCountX // up check
            && iGridIdx % m_iTileCountX != 0 // left check
            && geoTrans.GetChild(iGridIdx - 1 - m_iTileCountX).GetComponent<WorldGeo>().m_geoStatus != WORLD_GEO.WATER)
        {
            iSurLand += 1;
        }

        return iSurLand;
    }

    public void CreateRoad(int iTargetIdx)
    {
        /// int iDir
        /// 0 -  1  - 2
        /// 3 - (4) - 5
        /// 6 -  7  - 8
        /// 

        GridMgr grid = GridMgr.getInstance;
        int iGridIdx = grid.GetGridIdx(transform.position);
        int m_iTileCountX = grid.m_iXcount;
        int m_iTileCountY = grid.m_iYcount;
        Transform geoTrans = GameObject.Find("Geo").transform;
        ObjectFactory objFac = ObjectFactory.getInstance;

        // 위
        if (iGridIdx >= m_iTileCountX // up check
            && iTargetIdx == iGridIdx - m_iTileCountX)
        {
            objFac.Create_Road(1, transform.position);
        }

        // 오위
        else if (iGridIdx >= m_iTileCountX // up check
            && (iGridIdx + 1) % m_iTileCountX != 0 // right check
            && iTargetIdx == iGridIdx - m_iTileCountX + 1)
        {
            objFac.Create_Road(2, transform.position);
        }

        // 오
        else if ((iGridIdx + 1) % m_iTileCountX != 0 // right check
            && iTargetIdx == iGridIdx + 1)
        {
            objFac.Create_Road(5, transform.position);
        }

        // 오아
        else if (iGridIdx < m_iTileCountX * m_iTileCountY - m_iTileCountX // down check
            && (iGridIdx + 1) % m_iTileCountX != 0 // right check
            && iTargetIdx == iGridIdx + m_iTileCountX + 1)
        {
            objFac.Create_Road(8, transform.position);
        }

        // 아
        else if (iGridIdx < m_iTileCountX * m_iTileCountY - m_iTileCountX // down check
            && iTargetIdx == iGridIdx + m_iTileCountX)
        {
            objFac.Create_Road(7, transform.position);
        }

        // 왼아
        else if (iGridIdx % m_iTileCountX != 0 // left check
            && iGridIdx < m_iTileCountX * m_iTileCountY - m_iTileCountX // down check
            && iTargetIdx == iGridIdx + m_iTileCountX - 1)
        {
            objFac.Create_Road(6, transform.position);
        }

        // 왼
        else if (iGridIdx % m_iTileCountX != 0 // left check
            && iTargetIdx == iGridIdx - 1)
        {
            objFac.Create_Road(3, transform.position);
        }

        // 왼위
        else if (iGridIdx >= m_iTileCountX // up check
            && iGridIdx % m_iTileCountX != 0 // left check
            && iTargetIdx == iGridIdx - m_iTileCountX - 1)
        {
            objFac.Create_Road(0, transform.position);
        }

        else
        {
            Debug.LogError("Unknown Index");
        }

        m_bRoad = true;
    }
}
