using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WorldGenerator : Singleton<WorldGenerator>
{
    GridMgr grid;
    Transform m_geoTrans;

    public float m_fFarmPopulationStandard = 50f;
    public float m_fRanchPopulationStandard = 50f;
    public float m_fVillagePopulationStandard = 150f; // 1 man per 10
    public float m_fCityPopulationStandard = 250f;
    public float m_fCastlePopulationStandard = 500f;


    float[] m_fTypeCost; // Cost per type

    void Awake()
    {
        m_fTypeCost = new float[(int)ENEMY_TYPE.END - 1];

        m_fTypeCost[(int)ENEMY_TYPE.LIVESTOCK] = 10f;
        m_fTypeCost[(int)ENEMY_TYPE.CIVILIAN] = 10f;
        m_fTypeCost[(int)ENEMY_TYPE.MERCENARY] = 10f;
        m_fTypeCost[(int)ENEMY_TYPE.KNIGHT] = 10f;
    }

    // Use this for initialization
    void Start()
    {
        grid = GridMgr.getInstance;
    }

    public IEnumerator GenerateWorldMap()
    {
        m_geoTrans = GameObject.Find("Geo").transform;

        GameObject.Find("TopLeftUI").GetComponent<UIPanel>().alpha = 0f;
        GameObject.Find("BottomUI").GetComponent<UIPanel>().alpha = 0f;
        GameObject.Find("WorldOverview").GetComponent<UIPanel>().alpha = 0f;

        GameObject.Find("WorldTool").GetComponent<UIPanel>().alpha = 0f;
        GameObject.Find("LoadingBar").GetComponent<UIPanel>().alpha = 1f;

        LoadingProgress(0.01f, "초기화 중");
        yield return new WaitForSeconds(0.3f);

        int iVilNum = 20;
        int iCtyNum = 10;
        int iCastleNum = 5;

        ObjectFactory objFac = ObjectFactory.getInstance;
        List<int> idxList = new List<int>();

        //지형생성
        for (int i = 0; i < grid.m_iXcount * grid.m_iYcount; ++i)
        {
            objFac.Create_WorldGeo(grid.GetPosOfIdx(i));
            if (i % 100 == 0)
            {
                float fProgress = (((float)i / ((float)grid.m_iXcount * (float)grid.m_iYcount)) * 0.3f);
                LoadingProgress(fProgress, string.Format("지형 만드는 중 ({0}/{1})", i, grid.m_iXcount * grid.m_iYcount));
                yield return null;
            }
        }

        //아이콘 생성
        for (int i = 0; i < grid.m_iXcount * grid.m_iYcount; ++i)
        {
            // idx -> x, y
            int x = i % grid.m_iXcount;
            int y = i / grid.m_iXcount;

            //x normalize 클수록 중심으로부터 멀다 
            if (x > grid.m_iXcount / 2)
                x -= grid.m_iXcount / 2;
            else
                x = grid.m_iXcount / 2 - x;

            //y normalize 클수록 중심으로부터 멀다 
            if (y > grid.m_iYcount / 2)
                y -= grid.m_iYcount / 2;
            else
                y = grid.m_iYcount / 2 - y;

            float fChance = 1 - (((float)x + (float)y) / ((float)(grid.m_iXcount / 2f) + (float)(grid.m_iYcount / 2f)));

            if (GenerateNormalRandom(0.5f, 0.1f) < fChance)
                idxList.Add(i);
        }

        for (int i = 0; i < idxList.Count; ++i)
        {
            m_geoTrans.GetChild(idxList[i]).GetComponent<WorldGeo>().m_geoStatus = WORLD_GEO.GRASS;
            m_geoTrans.GetChild(idxList[i]).GetComponent<WorldGeo>().GetComponent<SpriteRenderer>().sprite = objFac.m_sheet_worldGeo[(int)WORLD_GEO.GRASS];
        }

        float scale = 0.3f;
        float xOrg = Random.Range(0f, 999f);
        float yOrg = Random.Range(0f, 999f);

        for (int i = 0; i < grid.m_iXcount; ++i)
        {
            for (int j = 0; j < grid.m_iYcount; ++j)
            {
                if (m_geoTrans.GetChild(i + (j * grid.m_iXcount)).GetComponent<WorldGeo>().m_geoStatus.Equals(WORLD_GEO.WATER))
                    continue;

                float xCoord = xOrg + i * scale;
                float yCoord = yOrg + j * scale;
                float sample = Mathf.PerlinNoise(xCoord, yCoord);

                if (sample < 0.3f)
                {
                    m_geoTrans.GetChild(i + (j * grid.m_iXcount)).GetComponent<WorldGeo>().m_geoStatus = WORLD_GEO.WATER;
                    m_geoTrans.GetChild(i + (j * grid.m_iXcount)).GetComponent<WorldGeo>().GetComponent<SpriteRenderer>().sprite = objFac.m_sheet_worldGeo[(int)WORLD_GEO.WATER];
                }

                else if (sample > 0.7f)
                {
                    m_geoTrans.GetChild(i + (j * grid.m_iXcount)).GetComponent<WorldGeo>().m_geoStatus = WORLD_GEO.CLIFF;
                    m_geoTrans.GetChild(i + (j * grid.m_iXcount)).GetComponent<WorldGeo>().GetComponent<SpriteRenderer>().sprite = objFac.m_sheet_worldGeo[(int)WORLD_GEO.CLIFF];
                }
                else if (sample > 0.5f)
                {
                    m_geoTrans.GetChild(i + (j * grid.m_iXcount)).GetComponent<WorldGeo>().m_geoStatus = WORLD_GEO.FOREST;
                    m_geoTrans.GetChild(i + (j * grid.m_iXcount)).GetComponent<WorldGeo>().GetComponent<SpriteRenderer>().sprite = objFac.m_sheet_worldGeo[(int)WORLD_GEO.FOREST];
                }
            }
        }

        int iCoreIdx = CorePositioning();
        for (int i = idxList.Count - 1; i >= 0; --i)
        {
            if (m_geoTrans.GetChild(idxList[i]).GetComponent<WorldGeo>().CheckAroundAmIAlone(iCoreIdx))
                idxList.RemoveAt(i);
            else if (m_geoTrans.GetChild(idxList[i]).GetComponent<WorldGeo>().m_geoStatus == WORLD_GEO.WATER)
                idxList.RemoveAt(i);

            if (i % 10 == 0)
            {
                float fProgress = 0.5f + ((float)(idxList.Count - i) / (float)idxList.Count * 0.2f);
                LoadingProgress(fProgress, "접근 불가 섬 확인중");
                yield return null;
            }
        }

        List<int> castle_deployableIdx = new List<int>(idxList);
        List<int> city_deployableIdx = new List<int>(idxList);
        List<int> village_deployableIdx = new List<int>(idxList);

        do
        {
            int iRandomIdx = castle_deployableIdx[Random.Range(0, castle_deployableIdx.Count)];
            GameObject objIcon = objFac.Create_WorldIcon(grid.GetPosOfIdx(iRandomIdx), (int)WORLDICON_TYPE.CASTLE);
            EraseDepolyableIdx(iRandomIdx, castle_deployableIdx, 10);
            EraseDepolyableIdx(iRandomIdx, city_deployableIdx, 3);
            EraseDepolyableIdx(iRandomIdx, village_deployableIdx, 3);

            LoadingProgress(0.7f, string.Format("성 심는 중 ({0})", castle_deployableIdx.Count));
            yield return null;

        } while (castle_deployableIdx.Count > 0);

        do
        {
            int iRandomIdx = city_deployableIdx[Random.Range(0, city_deployableIdx.Count)];
            GameObject objIcon = objFac.Create_WorldIcon(grid.GetPosOfIdx(iRandomIdx), (int)WORLDICON_TYPE.CITY);
            EraseDepolyableIdx(iRandomIdx, city_deployableIdx, 5);
            EraseDepolyableIdx(iRandomIdx, village_deployableIdx, 3);

            LoadingProgress(0.8f, string.Format("도시 심는 중 ({0})", city_deployableIdx.Count));
            yield return null;

        } while (city_deployableIdx.Count > 0);

        do
        {
            int iRandomIdx = village_deployableIdx[Random.Range(0, village_deployableIdx.Count)];
            GameObject objIcon = objFac.Create_WorldIcon(grid.GetPosOfIdx(iRandomIdx), (int)WORLDICON_TYPE.VILLAGE);
            EraseDepolyableIdx(iRandomIdx, village_deployableIdx, 3);

            LoadingProgress(0.9f, string.Format("마을 심는 중 ({0})", village_deployableIdx.Count));
            yield return null;

        } while (village_deployableIdx.Count > 0);

        Transform icons = GameObject.Find("WorldIcons").transform;

        for (int i = 0; i < m_geoTrans.childCount; ++i)
        {
            WorldGeo geo = m_geoTrans.GetChild(i).GetComponent<WorldGeo>();
            if (geo.m_worldIcon != null)
                continue;

            float fRandom = Random.Range(0f, 100f);
            if (geo.m_geoStatus == WORLD_GEO.GRASS)
            {
                if (fRandom < 50f)
                {
                    GameObject objIcon = objFac.Create_WorldIcon(m_geoTrans.GetChild(i).transform.position, (int)WORLDICON_TYPE.FARM);
                }
                else
                {
                    GameObject objIcon = objFac.Create_WorldIcon(m_geoTrans.GetChild(i).transform.position, (int)WORLDICON_TYPE.EMPTY);
                }
            }
            else if (geo.m_geoStatus == WORLD_GEO.FOREST)
            {
                GameObject objIcon = objFac.Create_WorldIcon(m_geoTrans.GetChild(i).transform.position, (int)WORLDICON_TYPE.EMPTY);
            }
        }

        //for (int i = 0; i < iCastleNum; ++i)
        //{
        //    //			int iRandomIdx = idxList[(int)GenerateNormalRandom(idxList.Count/2f, 10f)];
        //    int iRandomIdx = idxList[Random.Range(0, idxList.Count)];

        //    GameObject objIcon = objFac.Create_WorldIcon(grid.GetPosOfIdx(iRandomIdx), (int)WORLDICON_TYPE.CASTLE);
        //    //			m_geoTrans.GetChild (iRandomIdx).GetComponent<WorldGeo> ().m_worldIcon = objIcon;
        //    idxList.Remove(iRandomIdx);
        //}

        //LoadingProgress(0.3f, "성 초기화 중");
        //yield return new WaitForSeconds(0.1f);

        //for (int i = 0; i < iCityNum; ++i)
        //{
        //    int iRandomIdx = idxList[Random.Range(0, idxList.Count)];

        //    GameObject objIcon = objFac.Create_WorldIcon(grid.GetPosOfIdx(iRandomIdx), (int)WORLDICON_TYPE.CITY);
        //    //			m_geoTrans.GetChild (iRandomIdx).GetComponent<WorldGeo> ().m_worldIcon = objIcon;
        //    idxList.Remove(iRandomIdx);
        //}

        //LoadingProgress(0.4f, "도시 초기화 중");
        //yield return new WaitForSeconds(0.1f);

        //for (int i = 0; i < idxList.Count; ++i)
        //{
        //    int iRandom = Random.Range(0, 100);
        //    GameObject objIcon = null;

        //    if (iRandom < 20)
        //    {
        //    }
        //    else if (iRandom < 80)
        //        objIcon = objFac.Create_WorldIcon(grid.GetPosOfIdx(idxList[i]), (int)WORLDICON_TYPE.EMPTY);
        //    else if (iRandom < 95)
        //        objIcon = objFac.Create_WorldIcon(grid.GetPosOfIdx(idxList[i]), (int)WORLDICON_TYPE.FARM);
        //    //			else if (iRandom < 95) {
        //    //				objIcon = objFac.Create_WorldIcon (grid.GetPosOfIdx (idxList [i]), (int)WORLDICON_TYPE.RANCH);
        //    //			}
        //    else
        //        objIcon = objFac.Create_WorldIcon(grid.GetPosOfIdx(idxList[i]), (int)WORLDICON_TYPE.VILLAGE);

        //    //			m_geoTrans.GetChild (idxList[i]).GetComponent<WorldGeo> ().m_worldIcon = objIcon;
        //}

        LoadingProgress(0.5f, "지역 초기화 중");
        yield return new WaitForSeconds(0.1f);

        //		GameObject.Find ("WorldIcons").BroadcastMessage ("CheckAroundAmIAlone");



        //LoadingProgress(0.7f, "섬 파괴 중");
        //m_geoTrans.BroadcastMessage("DestroyIfIsland");
        //yield return new WaitForSeconds(0.5f);

        //LoadingProgress(0.8f, "바닷물 퍼내는 중");
        //FloodFill(0, 0, WORLD_GEO.WATER);
        //FloodFill(grid.m_iXcount - 1, 0, WORLD_GEO.WATER);
        //FloodFill(0, grid.m_iYcount - 1, WORLD_GEO.WATER);
        //FloodFill(grid.m_iXcount - 1, grid.m_iYcount - 1, WORLD_GEO.WATER);
        //yield return new WaitForSeconds(0.5f);

        //LoadingProgress(0.9f, "산맥 생성 중");
        //for (int i = 0; i < m_geoTrans.childCount; ++i)
        //{
        //    WorldGeo targetGeo = m_geoTrans.GetChild(i).GetComponent<WorldGeo>();
        //    if (targetGeo.m_worldIcon == null && targetGeo.m_geoStatus == WORLD_GEO.GRASS)
        //    {
        //        targetGeo.m_geoStatus = WORLD_GEO.CLIFF;
        //        targetGeo.gameObject.GetComponent<SpriteRenderer>().sprite = objFac.m_sheet_worldGeo[(int)WORLD_GEO.CLIFF];
        //    }
        //}


        for (int i = 0; i < icons.childCount; ++i)
        {
            int iIdx = grid.GetGridIdx(icons.GetChild(i).position);
            WorldIcon icon = icons.GetChild(i).GetComponent<WorldIcon>();
            SetWorldPropertyAndPopulation(iIdx, icon, (WORLDICON_TYPE)icon.m_iconType);
            if (i % 100 == 0)
            {
                float fProgress = 0.9f + ((float)i / (float)icons.childCount * 0.1f);
                LoadingProgress(fProgress, string.Format("세계 인구수 & 번영도 설정중 ({0}/{1})", i, icons.childCount));
                yield return null;
            }
        }

        LoadingProgress(1f, "완료!");
        yield return new WaitForSeconds(0.5f);

        GameObject.Find("TopLeftUI").GetComponent<UIPanel>().alpha = 1f;
        GameObject.Find("BottomUI").GetComponent<UIPanel>().alpha = 1f;
        GameObject.Find("WorldOverview").GetComponent<UIPanel>().alpha = 1f;
        GameObject.Find("Core").GetComponent<FoW.FogOfWarUnit>().enabled = true;


        GameObject.Find("LoadingBar").GetComponent<UIPanel>().alpha = 0f;
        GameObject.Find("WorldTool").GetComponent<UIPanel>().alpha = 0f;

        SaveManager.getInstance.LocalSave();
    }

    public IEnumerator GenerateTutorialMap()
    {
        m_geoTrans = GameObject.Find("Geo").transform;

        GameObject.Find("TopLeftUI").GetComponent<UIPanel>().alpha = 0f;
        GameObject.Find("BottomUI").GetComponent<UIPanel>().alpha = 0f;
        GameObject.Find("WorldOverview").GetComponent<UIPanel>().alpha = 0f;

        GameObject.Find("WorldTool").GetComponent<UIPanel>().alpha = 0f;
        GameObject.Find("LoadingBar").GetComponent<UIPanel>().alpha = 1f;

        LoadingProgress(0.01f, "초기화 중");
        yield return new WaitForSeconds(0.3f);

        ObjectFactory objFac = ObjectFactory.getInstance;
        List<int> idxList = new List<int>();

        //지형생성
        for (int i = 0; i < grid.m_iXcount * grid.m_iYcount; ++i)
        {
            objFac.Create_WorldGeo(grid.GetPosOfIdx(i));
            if (i % 100 == 0)
            {
                float fProgress = (((float)i / ((float)grid.m_iXcount * (float)grid.m_iYcount)) * 0.3f);
                LoadingProgress(fProgress, string.Format("지형 만드는 중 ({0}/{1})", i, grid.m_iXcount * grid.m_iYcount));
                yield return null;
            }
        }

        //아이콘 생성

        int iCenterIdx = (grid.m_iXcount * (grid.m_iYcount / 2)) + (grid.m_iXcount / 2);


        objFac.Create_WorldIcon(grid.GetPosOfIdx(iCenterIdx - grid.m_iXcount - 1), (int)WORLDICON_TYPE.EMPTY);
        objFac.Create_WorldIcon(grid.GetPosOfIdx(iCenterIdx - grid.m_iXcount), (int)WORLDICON_TYPE.EMPTY);
        objFac.Create_WorldIcon(grid.GetPosOfIdx(iCenterIdx - grid.m_iXcount + 1), (int)WORLDICON_TYPE.EMPTY);

        objFac.Create_WorldIcon(grid.GetPosOfIdx(iCenterIdx - 1), (int)WORLDICON_TYPE.VILLAGE);
        objFac.Create_WorldIcon(grid.GetPosOfIdx(iCenterIdx), (int)WORLDICON_TYPE.EMPTY);
        objFac.Create_WorldIcon(grid.GetPosOfIdx(iCenterIdx + 1), (int)WORLDICON_TYPE.FARM);

        objFac.Create_WorldIcon(grid.GetPosOfIdx(iCenterIdx + grid.m_iXcount - 1), (int)WORLDICON_TYPE.EMPTY);
        objFac.Create_WorldIcon(grid.GetPosOfIdx(iCenterIdx + grid.m_iXcount), (int)WORLDICON_TYPE.EMPTY);
        objFac.Create_WorldIcon(grid.GetPosOfIdx(iCenterIdx + grid.m_iXcount + 1), (int)WORLDICON_TYPE.EMPTY);


        LoadingProgress(0.5f, "지역 초기화 중");
        yield return new WaitForSeconds(0.1f);

        //      GameObject.Find ("WorldIcons").BroadcastMessage ("CheckAroundAmIAlone");

        Transform icons = GameObject.Find("WorldIcons").transform;
        for (int i = 0; i < icons.childCount; ++i)
        {
            icons.GetChild(i).SendMessage("CheckAroundAmIAlone");
            if (i % 10 == 0)
            {
                float fProgress = 0.5f + ((float)i / (float)icons.childCount * 0.2f);
                LoadingProgress(fProgress, string.Format("접근 불가 섬 확인중 ({0}/{1})", i, icons.childCount));
                yield return null;
            }
        }

        LoadingProgress(0.7f, "섬 파괴 중");
        m_geoTrans.BroadcastMessage("DestroyIfIsland");
        yield return new WaitForSeconds(0.5f);

        LoadingProgress(0.8f, "바닷물 퍼내는 중");
        FloodFill(0, 0, WORLD_GEO.WATER);
        FloodFill(grid.m_iXcount - 1, 0, WORLD_GEO.WATER);
        FloodFill(0, grid.m_iYcount - 1, WORLD_GEO.WATER);
        FloodFill(grid.m_iXcount - 1, grid.m_iYcount - 1, WORLD_GEO.WATER);
        yield return new WaitForSeconds(0.5f);

        CorePositioning(true);

        for (int i = 0; i < icons.childCount; ++i)
        {
            int iIdx = grid.GetGridIdx(icons.GetChild(i).position);
            WorldIcon icon = icons.GetChild(i).GetComponent<WorldIcon>();
            SetWorldPropertyAndPopulation(iIdx, icon, (WORLDICON_TYPE)icon.m_iconType, true);
            if (i % 100 == 0)
            {
                float fProgress = 0.8f + ((float)i / (float)icons.childCount * 0.1f);
                LoadingProgress(fProgress, string.Format("세계 인구수 & 번영도 설정중 ({0}/{1})", i, icons.childCount));
                yield return null;
            }
        }

        LoadingProgress(1f, "완료!");
        yield return new WaitForSeconds(0.5f);

        GameObject.Find("TopLeftUI").GetComponent<UIPanel>().alpha = 1f;
        GameObject.Find("BottomUI").GetComponent<UIPanel>().alpha = 1f;
        GameObject.Find("WorldOverview").GetComponent<UIPanel>().alpha = 1f;
        GameObject.Find("Core").GetComponent<FoW.FogOfWarUnit>().enabled = true;


        GameObject.Find("LoadingBar").GetComponent<UIPanel>().alpha = 0f;
        GameObject.Find("WorldTool").GetComponent<UIPanel>().alpha = 0f;

        TutorialMgr.getInstance.Init();
    }

    float GenerateNormalRandom(float mean, float stdDev) //평균, 표준편차
    {
        float rand1 = Random.Range(0.0f, 1.0f);
        float rand2 = Random.Range(0.0f, 1.0f);

        float randStdNormal = Mathf.Sqrt(-2.0f * Mathf.Log(rand1)) * Mathf.Sin(2.0f * Mathf.PI * rand2); //random normal(0,1)
        float randNormal = mean + stdDev * randStdNormal; //random normal(mean,stdDev^2)

        return randNormal;
    }

    int CorePositioning(bool bIsTutorial = false)
    {
        bool bPosioningDone = false;
        int iX = GridMgr.getInstance.m_iXcount;
        int iY = GridMgr.getInstance.m_iYcount;
        int iCoreGrid = 0;
        Transform geoTrans = GameObject.Find("Geo").transform;

        int iPositiongTryCount = 0;
        do
        {
            //무한루프 방지 변수 iAdjuster
            int iAdjuster = iPositiongTryCount / 50;
            if (iAdjuster > 13)
                iAdjuster = 13;

            int iX_Random = Random.Range(13 - iAdjuster, iX - 13 + iAdjuster);
            int iY_Random = Random.Range(13 - iAdjuster, iY - 13 + iAdjuster);
            iCoreGrid = (iX * iY_Random) + iX_Random;

            if (bIsTutorial)
            {
                iCoreGrid = (grid.m_iXcount * (grid.m_iYcount / 2)) + (grid.m_iXcount / 2);
                break;
            }

            WorldGeo RandomGeo = geoTrans.GetChild(iCoreGrid).GetComponent<WorldGeo>();
            if (!RandomGeo.m_geoStatus.Equals(WORLD_GEO.WATER) && !RandomGeo.m_geoStatus.Equals(WORLD_GEO.CLIFF))
                bPosioningDone = true;

            iPositiongTryCount += 1;

        } while (!bPosioningDone);

        GameObject.Find("Core").transform.position = GridMgr.getInstance.GetPosOfIdx(iCoreGrid);

        //GameObject coreIcon = GameObject.Find("Geo").transform.GetChild(iCoreGrid).GetComponent<WorldGeo>().m_worldIcon;

        //if (!coreIcon.GetComponent<WorldIcon>().m_iconType.Equals(WORLDICON_TYPE.EMPTY))
        //{
        //    Destroy(coreIcon);
        //    ObjectFactory.getInstance.Create_WorldIcon(grid.GetPosOfIdx(iCoreGrid), (int)WORLDICON_TYPE.EMPTY);
        //}

        GameObject.Find("PC2DPanTarget").transform.position = GameObject.Find("Core").transform.position;
        Com.LuisPedroFonseca.ProCamera2D.ProCamera2D.Instance.MoveCameraInstantlyToPosition(GameObject.Find("Core").transform.position);

        GameMgr.getInstance.m_iHunger = 100;

        return iCoreGrid;
    }

    public void LoadingProgress(float fProgress, string strLabel)
    {
        GameObject.Find("progress").GetComponent<UISlider>().value = fProgress;
        GameObject.Find("ProgressLabel").GetComponent<UILabel>().text = strLabel;
    }

    public List<int> DeployEnemyList(float fPopulation, WORLDICON_TYPE world_type, bool bIsTutorial = false) //번영도와 인구수에 맞는 적을 리스트로 뽑아준다. (번영도는 적 생성시 적용)
    {
        List<int> list_enemyType = new List<int>();

        bool bHeroContained = false;
        float fRandom = 0f;

        while (fPopulation > 0)
        {
            switch (world_type)
            {
                case WORLDICON_TYPE.FARM:
                    list_enemyType.Add((int)ENEMY_TYPE.CIVILIAN);
                    fPopulation -= m_fTypeCost[(int)ENEMY_TYPE.CIVILIAN];
                    break;
                case WORLDICON_TYPE.RANCH:
                    fRandom = Random.Range(0f, 100f);

                    if (fRandom < 70)
                    {
                        list_enemyType.Add((int)ENEMY_TYPE.LIVESTOCK);
                        fPopulation -= m_fTypeCost[(int)ENEMY_TYPE.LIVESTOCK];
                    }
                    else
                    {
                        list_enemyType.Add((int)ENEMY_TYPE.CIVILIAN);
                        fPopulation -= m_fTypeCost[(int)ENEMY_TYPE.CIVILIAN];
                    }
                    break;
                case WORLDICON_TYPE.VILLAGE:
                    fRandom = Random.Range(0f, 100f);

                    if (fRandom < 70 || bIsTutorial)
                    {
                        list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                        fPopulation -= m_fTypeCost[(int)ENEMY_TYPE.MERCENARY];
                    }
                    else
                    {
                        list_enemyType.Add((int)ENEMY_TYPE.CIVILIAN);
                        fPopulation -= m_fTypeCost[(int)ENEMY_TYPE.CIVILIAN];
                    }
                    break;
                case WORLDICON_TYPE.CITY:
                    fRandom = Random.Range(0f, 100f);

                    if (fRandom < 50)
                    {
                        list_enemyType.Add((int)ENEMY_TYPE.KNIGHT);
                        fPopulation -= m_fTypeCost[(int)ENEMY_TYPE.KNIGHT];
                    }
                    else if (fRandom < 80)
                    {
                        list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                        fPopulation -= m_fTypeCost[(int)ENEMY_TYPE.MERCENARY];
                    }
                    else
                    {
                        list_enemyType.Add((int)ENEMY_TYPE.CIVILIAN);
                        fPopulation -= m_fTypeCost[(int)ENEMY_TYPE.CIVILIAN];
                    }
                    break;
                case WORLDICON_TYPE.CASTLE:
                    list_enemyType.Add((int)ENEMY_TYPE.KNIGHT);
                    fPopulation -= m_fTypeCost[(int)ENEMY_TYPE.KNIGHT];
                    break;
            }
        }

        return list_enemyType;
    }

    void SetWorldPropertyAndPopulation(int iGridIdx, WorldIcon worldIcon, WORLDICON_TYPE type, bool bIsTutorial = false)
    {
        if (type.Equals(WORLDICON_TYPE.EMPTY))
        {
            worldIcon.m_fProsperity = 0f;
            worldIcon.m_fPopulation = 0f;
            return;
        }

        worldIcon.m_iGridIdx = iGridIdx;
        int iCoreIdx = GridMgr.getInstance.GetGridIdx(GameObject.Find("Core").transform.position);
        int iDistanceWithCore = AStar.getInstance.AStarStart_World(iGridIdx, iCoreIdx).Count;

        if (iDistanceWithCore < 3)
        {
            if (bIsTutorial)
            {
                worldIcon.m_fProsperity = 0f;
                worldIcon.m_fPopulation = 10f;
            }
            else
            {
                worldIcon.m_fProsperity = GenerateNormalRandom(20f, 10f);
                worldIcon.m_fPopulation = GenerateNormalRandom(20f, 10f);

                if (worldIcon.m_fPopulation < 10f)
                    worldIcon.m_fPopulation = 10f;
            }

            if (!worldIcon.m_iconType.Equals((int)WORLDICON_TYPE.FARM) && iCoreIdx != iGridIdx && !bIsTutorial)
            {
                GameObject newOne = ObjectFactory.getInstance.Create_WorldIcon(grid.GetPosOfIdx(iGridIdx), (int)WORLDICON_TYPE.FARM);
                SetWorldPropertyAndPopulation(iGridIdx, newOne.GetComponent<WorldIcon>(), WORLDICON_TYPE.FARM);
                Destroy(worldIcon.gameObject);
                return;
            }

        }
        else
        {
            worldIcon.m_fProsperity = Random.Range(40, 80f);
            switch (type)
            {
                case WORLDICON_TYPE.FARM:
                    worldIcon.m_fPopulation = GenerateNormalRandom(m_fFarmPopulationStandard, 10f);
                    break;
                case WORLDICON_TYPE.RANCH:
                    worldIcon.m_fPopulation = GenerateNormalRandom(m_fRanchPopulationStandard, 10f);
                    break;
                case WORLDICON_TYPE.VILLAGE:
                    worldIcon.m_fPopulation = GenerateNormalRandom(m_fVillagePopulationStandard, 50f);
                    break;
                case WORLDICON_TYPE.CITY:
                    worldIcon.m_fPopulation = GenerateNormalRandom(m_fCityPopulationStandard, 50f);
                    break;
                case WORLDICON_TYPE.CASTLE:
                    worldIcon.m_fPopulation = GenerateNormalRandom(m_fCastlePopulationStandard, 50f);
                    break;

                default:
                    Debug.LogError("Fuck you unknown wordld icon type");
                    break;
            }
        }

        worldIcon.m_list_enemyType = DeployEnemyList(worldIcon.m_fPopulation, type, bIsTutorial);
    }

    void FloodFill(int iX, int iY, WORLD_GEO geoTarget)
    {
        if ((iX < 0) || (iX >= grid.m_iXcount))
            return;
        if ((iY < 0) || (iY >= grid.m_iYcount))
            return;

        if (m_geoTrans.GetChild(iY * grid.m_iXcount + iX).GetComponent<WorldGeo>().m_worldIcon != null)
            return;

        if (!m_geoTrans.GetChild(iY * grid.m_iXcount + iX).GetComponent<WorldGeo>().m_geoStatus.Equals(geoTarget))
        {
            m_geoTrans.GetChild(iY * grid.m_iXcount + iX).GetComponent<WorldGeo>().m_geoStatus = geoTarget;
            m_geoTrans.GetChild(iY * grid.m_iXcount + iX).GetComponent<SpriteRenderer>().sprite = ObjectFactory.getInstance.m_sheet_worldGeo[(int)geoTarget];

            FloodFill(iX + 1, iY, geoTarget);
            FloodFill(iX, iY + 1, geoTarget);
            FloodFill(iX - 1, iY, geoTarget);
            FloodFill(iX, iY - 1, geoTarget);
        }
    }

    void EraseDepolyableIdx(int idx, List<int> iTargetList, int iRange)
    {
        int iX = idx % grid.m_iXcount;
        int iY = idx / grid.m_iXcount;

        if ((iX < 0) || (iX >= grid.m_iXcount))
            return;
        if ((iY < 0) || (iY >= grid.m_iYcount))
            return;
        if (iRange == 0)
            return;

        iTargetList.Remove(idx);
        //GameObject.Find("Geo").transform.GetChild(idx).GetComponent<SpriteRenderer>().color = Color.magenta;

        EraseDepolyableIdx(idx + 1, iTargetList, iRange - 1);
        EraseDepolyableIdx(idx - 1, iTargetList, iRange - 1);
        EraseDepolyableIdx(idx + grid.m_iXcount, iTargetList, iRange - 1);
        EraseDepolyableIdx(idx - grid.m_iXcount, iTargetList, iRange - 1);
    }
}
