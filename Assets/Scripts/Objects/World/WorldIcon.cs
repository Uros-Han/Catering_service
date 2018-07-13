using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class WorldIcon : MonoBehaviour
{

    public int m_iconType = 0;
    public int m_iGridIdx = 0;

    public float m_fProsperity = 0f; // 번영도 -> 장비의 질 0~100
    public float m_fPopulation = 0f; // 인구점수 -> 인구의 수a (1 man per 10)
    public int m_iRaided = 0; // 습격 당한 횟수
    public List<int> m_list_enemyType;

    public GameObject m_objWall;
    public int m_iWallIdx;

    public void Init() // Loading 때문에 만듬a
    {
        transform.position = GridMgr.getInstance.GetPosOfIdx(m_iGridIdx);

        switch (m_iconType)
        {
            case (int)WORLDICON_TYPE.EMPTY:
                break;

            case (int)WORLDICON_TYPE.FARM:
                GetComponent<SpriteRenderer>().sprite = ObjectFactory.getInstance.m_sheet_worldicon[1];
                break;

            case (int)WORLDICON_TYPE.LUMBERMILL:
                GetComponent<SpriteRenderer>().sprite = ObjectFactory.getInstance.m_sheet_worldicon[2];
                break;

            case (int)WORLDICON_TYPE.VILLAGE:
                GetComponent<SpriteRenderer>().sprite = ObjectFactory.getInstance.m_sheet_worldicon[3];
                GameObject.Find("WorldMapManager").GetComponent<WorldMapManager>().m_iListVillage.Add(m_iGridIdx);
                ObjectFactory.getInstance.Create_Wall(0, transform.position, gameObject);
                break;

            case (int)WORLDICON_TYPE.CITY:
                GetComponent<SpriteRenderer>().sprite = ObjectFactory.getInstance.m_sheet_worldicon[4];
                GameObject.Find("WorldMapManager").GetComponent<WorldMapManager>().m_iListCity.Add(m_iGridIdx);
                ObjectFactory.getInstance.Create_Wall(1, transform.position, gameObject);
                break;

            case (int)WORLDICON_TYPE.CASTLE:
                GetComponent<SpriteRenderer>().sprite = ObjectFactory.getInstance.m_sheet_worldicon[5];
                GameObject.Find("WorldMapManager").GetComponent<WorldMapManager>().m_iListCastle.Add(m_iGridIdx);
                ObjectFactory.getInstance.Create_Wall(2, transform.position, gameObject);
                break;

            case (int)WORLDICON_TYPE.RUIN:
                GetComponent<SpriteRenderer>().sprite = ObjectFactory.getInstance.m_sheet_worldicon[6];
                break;

            case (int)WORLDICON_TYPE.ALTAR:
                GetComponent<SpriteRenderer>().sprite = ObjectFactory.getInstance.m_sheet_worldicon[7];
                if (!m_bReadySacrifice)
                    GetComponent<SpriteRenderer>().color = Color.gray;
                break;

            case (int)WORLDICON_TYPE.CLINIC:
                GetComponent<SpriteRenderer>().sprite = ObjectFactory.getInstance.m_sheet_worldicon[8];
                if (!m_bReadySacrifice)
                    GetComponent<SpriteRenderer>().color = Color.gray;
                break;
        }

        GameObject.Find("Geo").transform.GetChild(m_iGridIdx).GetComponent<WorldGeo>().m_worldIcon = gameObject;

    }

    public float m_fCoolTime;
    public float m_fCurCoolTime;
    public bool m_bReadySacrifice;
    void ActivateTimer()
    {
        if (m_fCoolTime == 0)
            return;

        if (!m_bReadySacrifice)
            StartCoroutine(CoolTimer());
    }

    IEnumerator CoolTimer()
    {
        TimeMgr timeMgr = TimeMgr.getInstance;
        do
        {
            m_fCurCoolTime += Time.deltaTime;

            if (m_fCoolTime < m_fCurCoolTime)
            {
                m_fCurCoolTime = 0f;
                m_bReadySacrifice = true;
                GetComponent<SpriteRenderer>().color = Color.white;
                m_list_enemyType.Add((int)ENEMY_TYPE.CIVILIAN);
            }

            yield return null;
        } while (timeMgr.m_timeState.Equals(TIME_STATE.PLAY) && !m_bReadySacrifice);
    }
}
