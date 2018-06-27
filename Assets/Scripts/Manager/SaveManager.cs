using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SaveManager : Singleton<SaveManager>
{

    // Use this for initialization
    void Start()
    {
        DontDestroyOnLoad(gameObject);
    }

    public void LocalSave()
    {
        SaveWorld();
        SaveCore();
    }

    public void LocalLoad()
    {
        LoadWorld();
        LoadCore();
        GameObject.Find("Core").GetComponent<FoW.FogOfWarUnit>().enabled = true;
        Com.LuisPedroFonseca.ProCamera2D.ProCamera2D.Instance.MoveCameraInstantlyToPosition(GameObject.Find("Core").transform.position);
    }

    void SaveCore()
    {
        List<PartSaveForm> listPartSaveForm = new List<PartSaveForm>();

        Transform playerTrans = GameObject.Find("Player").transform;
        for (int i = 0; i < playerTrans.childCount; ++i)
        {
            if (playerTrans.GetChild(i).gameObject.name.Contains("Core"))
                continue;

            PartSaveForm partSave = new PartSaveForm();
            partSave.m_part = playerTrans.GetChild(i).GetComponent<Part>();
            partSave.m_name = playerTrans.GetChild(i).gameObject.name;
            partSave.m_fRotation = playerTrans.GetChild(i).transform.localRotation.eulerAngles.z;
            partSave.m_fScaleX = playerTrans.GetChild(i).transform.localScale.x;

            listPartSaveForm.Add(partSave);
        }

        ES3.Save<List<PartSaveForm>>("partSaveForm", listPartSaveForm, "core.txt");

        ES3.Save<float>("health", GameObject.Find("Player").transform.Find("Core").GetComponent<Core>().m_fCurHealth, "core.txt");
        ES3.Save<int>("hunger", GameMgr.getInstance.m_iHunger, "core.txt");
        ES3.Save<int>("reward", GameMgr.getInstance.m_iReward, "core.txt");

        CoreAbilityMgr coreAbility = GameObject.Find("Player").GetComponent<CoreAbilityMgr>();
        ES3.Save<int>("level", coreAbility.m_iLevel, "core.txt");
        ES3.Save<int>("curExp", coreAbility.m_iCurExp, "core.txt");
        ES3.Save<List<int>>("listAbil", coreAbility.m_listAbil, "core.txt");

    }

    void LoadCore()
    {
        List<PartSaveForm> listPartSaveForm = ES3.Load<List<PartSaveForm>>("partSaveForm", "core.txt");
        ObjectFactory objFac = ObjectFactory.getInstance;

        for (int i = 0; i < listPartSaveForm.Count; ++i)
        {
            PartSaveForm sf = listPartSaveForm[i];
            objFac.Create_Part(sf.m_part, sf.m_name, sf.m_fRotation, sf.m_fScaleX).SetActive(false);
        }

        GameObject.Find("Player").transform.Find("Core").GetComponent<Core>().m_fCurHealth = ES3.Load<float>("health", "core.txt");
        GameMgr.getInstance.m_iHunger = ES3.Load<int>("hunger", "core.txt");
        GameMgr.getInstance.m_iReward = ES3.Load<int>("reward", "core.txt");

        CoreAbilityMgr coreAbility = GameObject.Find("Player").GetComponent<CoreAbilityMgr>();
        coreAbility.m_iLevel = ES3.Load<int>("level", "core.txt");
        coreAbility.m_iCurExp = ES3.Load<int>("curExp", "core.txt");
        coreAbility.m_listAbil = ES3.Load<List<int>>("listAbil", "core.txt");
        for (int i = 1; i < coreAbility.m_listAbil.Count; ++i)
        {
            ObjectFactory.getInstance.Create_AbilUI(coreAbility.m_listAbil[i]);
            if (coreAbility.m_listAbil[i] == 4)
            {
                GameObject.Find("Player").transform.GetChild(0).GetComponent<Core>().m_dicStat["Health"] += 100;
            }
            else if (coreAbility.m_listAbil[i] == 12)
            {
                GameObject.Find("Player").transform.GetChild(0).GetComponent<Core>().m_lstStrBuff.Add("HealthBuff");
                GameObject.Find("Player").transform.GetChild(0).GetComponent<Core>().m_dicStatBuff["Health"] = 150;
            }
        }
        coreAbility.SetTargetValue();
    }

    void SaveWorld()
    {
        ES3.Save<Vector3>("corePos", GameObject.Find("Core").transform.position, "world.txt");

        Transform geoTrans = GameObject.Find("Geo").transform;
        List<int> objGeoList = new List<int>();
        for (int i = 0; i < geoTrans.childCount; ++i)
        {
            objGeoList.Add((int)geoTrans.GetChild(i).GetComponent<WorldGeo>().m_geoStatus);
        }
        ES3.Save<List<int>>("geoList", objGeoList, "world.txt");

        int iIconCount = 0;
        Transform iconTrans = GameObject.Find("WorldIcons").transform;
        List<WorldIcon> objIconList = new List<WorldIcon>();
        for (int i = 0; i < iconTrans.childCount; ++i)
        {
            objIconList.Add(iconTrans.GetChild(i).gameObject.GetComponent<WorldIcon>());
            iIconCount += 1;
        }
        ES3.Save<List<WorldIcon>>("iconList", objIconList, "world.txt");
        ES3.Save<int>("iconCount", iIconCount, "world.txt");

        List<byte> fogList = new List<byte>();
        for (int i = 0; i < 128 * 128; ++i)
        {
            fogList.Add(FoW.FogOfWar.GetFogOfWarTeam(0).fogValues[i]);
        }
        ES3.Save<List<byte>>("fogValues", fogList, "world.txt");

        ES3.Save<List<int>>("pollutedList", GameObject.Find("WorldMapManager").GetComponent<WorldMapManager>().m_iPollutedIdxList, "world.txt");
        ES3.Save<int>("day", GameMgr.getInstance.m_iDay, "world.txt");

        ES3.Save<Dictionary<int, int>>("heroGarrison", GameObject.Find("WorldMapManager").GetComponent<WorldMapManager>().m_iDicHeroGarrison, "world.txt");
    }

    void LoadWorld()
    {
        ObjectFactory objFac = ObjectFactory.getInstance;
        GridMgr gridMgr = GridMgr.getInstance;

        GameObject.Find("Core").transform.position = ES3.Load<Vector3>("corePos", "world.txt");
        WorldMapManager worldMapManager = GameObject.Find("WorldMapManager").GetComponent<WorldMapManager>();

        List<int> iGeoList = new List<int>();
        iGeoList = ES3.Load<List<int>>("geoList", "world.txt");
        for (int i = 0; i < iGeoList.Count; ++i)
        {
            objFac.Create_WorldGeo(gridMgr.GetPosOfIdx(i), iGeoList[i]);
        }

        List<WorldIcon> iconList = new List<WorldIcon>();
        int iCount = ES3.Load<int>("iconCount", "world.txt");
        for (int i = 0; i < iCount; ++i)
        {
            GameObject obj = objFac.Create_WorldIcon(Vector3.zero);
            iconList.Add(obj.GetComponent<WorldIcon>());
        }
        ES3.LoadInto<List<WorldIcon>>("iconList", "world.txt", iconList);
        for (int i = 0; i < iconList.Count; ++i)
        {
            iconList[i].Init();
        }

        List<byte> FogList = ES3.Load<List<byte>>("fogValues", "world.txt");
        byte[] fogByte = new byte[128 * 128];
        for (int i = 0; i < fogByte.Length; ++i)
        {
            fogByte[i] = FogList[i];
        }
        FoW.FogOfWar.GetFogOfWarTeam(0).fogValues = fogByte;

        worldMapManager.m_iPollutedIdxList = ES3.Load<List<int>>("pollutedList", "world.txt");
        worldMapManager.Pollute(GameObject.Find("WorldMapManager").GetComponent<WorldMapManager>().m_iPollutedIdxList);

        GameObject.Find("PC2DPanTarget").transform.position = GameObject.Find("Core").transform.position;
        GameObject.Find("WorldTool").GetComponent<UIPanel>().alpha = 0f;

        GameMgr.getInstance.m_iDay = ES3.Load<int>("day", "world.txt");

        worldMapManager.m_iDicHeroGarrison = ES3.Load<Dictionary<int, int>>("heroGarrison", "world.txt");
        ObjectFactory objectFactory = ObjectFactory.getInstance;
        foreach (KeyValuePair<int, int> tmp in worldMapManager.m_iDicHeroGarrison)
        {
            objectFactory.Create_Party(tmp.Key, PARTY_TYPE.GARRISON, tmp.Value);
        }

        Transform m_geoTrans = GameObject.Find("Geo").transform;
        for (int i = 0; i < worldMapManager.m_iListCity.Count / 3; ++i)
        {

            int iTargetIdx = worldMapManager.m_iListCity[i + worldMapManager.m_iListCity.Count / 2];
            if (Vector3.Distance(m_geoTrans.GetChild(iTargetIdx).transform.position, m_geoTrans.GetChild(i).transform.position) > 10f)
                continue;

            List<int> iRoadList = AStar.getInstance.AStarStart_World(worldMapManager.m_iListCity[i], iTargetIdx);
            if (iRoadList.Count == 0)
                continue;

            iRoadList.Insert(0, worldMapManager.m_iListCity[i]);

            for (int j = 0; j < iRoadList.Count; ++j)
            {
                WorldGeo wg = m_geoTrans.GetChild(iRoadList[j]).GetComponent<WorldGeo>();

                if (j == 0)
                {
                    wg.CreateRoad(iRoadList[j + 1]);
                }
                else if (j != iRoadList.Count - 1)
                {
                    wg.CreateRoad(iRoadList[j - 1]);
                    wg.CreateRoad(iRoadList[j + 1]);
                }
                else
                {
                    wg.CreateRoad(iRoadList[j - 1]);
                }
            }
        }
    }

    public class PartSaveForm
    {
        public Part m_part;
        public string m_name;
        public float m_fRotation;
        public float m_fScaleX;
    }
}
