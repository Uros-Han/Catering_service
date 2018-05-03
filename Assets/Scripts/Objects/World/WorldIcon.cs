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

            case (int)WORLDICON_TYPE.RANCH:
                GetComponent<SpriteRenderer>().sprite = ObjectFactory.getInstance.m_sheet_worldicon[2];
                break;

            case (int)WORLDICON_TYPE.VILLAGE:
                GetComponent<SpriteRenderer>().sprite = ObjectFactory.getInstance.m_sheet_worldicon[3];
                GameObject.Find("WorldMapManager").GetComponent<WorldMapManager>().m_iListVillage.Add(m_iGridIdx);
                break;

            case (int)WORLDICON_TYPE.CITY:
                GetComponent<SpriteRenderer>().sprite = ObjectFactory.getInstance.m_sheet_worldicon[4];
                GameObject.Find("WorldMapManager").GetComponent<WorldMapManager>().m_iListCity.Add(m_iGridIdx);
                break;

            case (int)WORLDICON_TYPE.CASTLE:
                GetComponent<SpriteRenderer>().sprite = ObjectFactory.getInstance.m_sheet_worldicon[5];
                GameObject.Find("WorldMapManager").GetComponent<WorldMapManager>().m_iListCastle.Add(m_iGridIdx);
                break;
        }

        GameObject.Find("Geo").transform.GetChild(m_iGridIdx).GetComponent<WorldGeo>().m_worldIcon = gameObject;
    }

}
