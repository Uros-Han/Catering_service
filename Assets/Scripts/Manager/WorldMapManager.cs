using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class WorldMapManager : MonoBehaviour
{

    public int m_KingLocIdx;
    public WORLDTURN_STATE m_worldTurnState;

    bool m_bToBattleScene = false;
    public List<int> m_iPollutedIdxList;

    public List<int> m_iListVillage;
    public List<int> m_iListCity;
    public List<int> m_iListCastle;
    public Dictionary<int, int> m_iDicHeroGarrison;// gridIdx, HeroNum

    public List<GameObject> m_encountPartyList;

    void Awake()
    {
        if (GameObject.Find("GameMgr") == null) //if gameMgr doesn't exist, make one.
        {
            GameObject gameMgr = Instantiate(Resources.Load("Prefabs/GameMgr") as GameObject) as GameObject;
            gameMgr.name = gameMgr.name.Replace("(Clone)", "");
        }
    }

    // Use this for initialization
    void Start()
    {
        m_worldTurnState = WORLDTURN_STATE.IDLE;
        GridMgr.getInstance.ChgGridInfo();

        m_iPollutedIdxList = new List<int>();

        m_iListVillage = new List<int>();
        m_iListCity = new List<int>();
        m_iListCastle = new List<int>();

        m_encountPartyList = new List<GameObject>();

        if (!GameMgr.getInstance.m_bDeveloperMode)
            GameObject.Find("DeveloperTools").transform.GetChild(1).gameObject.SetActive(false);

        GameObject.Find("Player").SendMessage("CameBackFromBattleScene");


    }

    void OnEnable()
    {
        if (m_bToBattleScene)
        {
            //			GameObject.Find ("AleartMsg").BroadcastMessage ("ChgParent",SendMessageOptions.DontRequireReceiver);
            SceneManager.SetActiveScene(SceneManager.GetSceneByName("World"));
            GridMgr.getInstance.ChgGridInfo();

            GameObject.Find("World").BroadcastMessage("CameBackFromBattleScene");
            GameObject.Find("Player").SendMessage("CameBackFromBattleScene");
            m_bToBattleScene = false;
            BattleSceneMgr.getInstance.m_turnState = TURN_STATE.DAY;

            if (!GameMgr.getInstance.m_bAssembleOnly)
            { // 지역점령 
                int iPollutedIdx = GridMgr.getInstance.GetGridIdx(GameObject.Find("Core").transform.position);
                ObjectFactory.getInstance.Create_Polluted(iPollutedIdx);

                m_iPollutedIdxList.Add(iPollutedIdx);

                WorldIcon pollutedIcon = GameObject.Find("Geo").transform.GetChild(iPollutedIdx).GetComponent<WorldGeo>().m_worldIcon.GetComponent<WorldIcon>();

                switch (pollutedIcon.m_iconType)
                {
                    case (int)WORLDICON_TYPE.FARM:
                        pollutedIcon.m_iconType = (int)WORLDICON_TYPE.RUIN;
                        pollutedIcon.GetComponent<SpriteRenderer>().sprite = ObjectFactory.getInstance.m_sheet_worldicon[(int)WORLDICON_TYPE.RUIN];
                        break;

                    case (int)WORLDICON_TYPE.VILLAGE:
                        pollutedIcon.m_iconType = (int)WORLDICON_TYPE.ALTAR;
                        pollutedIcon.GetComponent<SpriteRenderer>().sprite = ObjectFactory.getInstance.m_sheet_worldicon[(int)WORLDICON_TYPE.ALTAR];
                        break;

                    case (int)WORLDICON_TYPE.CITY:
                        pollutedIcon.m_iconType = (int)WORLDICON_TYPE.CLINIC;
                        pollutedIcon.GetComponent<SpriteRenderer>().sprite = ObjectFactory.getInstance.m_sheet_worldicon[(int)WORLDICON_TYPE.CLINIC];
                        break;

                    case (int)WORLDICON_TYPE.CASTLE:
                        pollutedIcon.m_iconType = (int)WORLDICON_TYPE.RUIN;
                        pollutedIcon.GetComponent<SpriteRenderer>().sprite = ObjectFactory.getInstance.m_sheet_worldicon[(int)WORLDICON_TYPE.RUIN];
                        break;
                }

                GameMgr.getInstance.m_iReward += (int)pollutedIcon.m_fPopulation * 10;

                pollutedIcon.m_fPopulation = 0f;
                pollutedIcon.m_fProsperity = 0f;
                pollutedIcon.m_iRaided += 1;
                pollutedIcon.m_list_enemyType.Clear();

                List<GameObject> elimatedPartyList = GameObject.Find("WorldMapManager").GetComponent<WorldMapManager>().m_encountPartyList;
                for (int i = 0; i < elimatedPartyList.Count; ++i)
                {
                    elimatedPartyList[i].GetComponent<Party>().DestroyThis();
                    elimatedPartyList.Remove(elimatedPartyList[i]);
                }
            }

            //			SaveManager.getInstance.LocalSave ();
        }

        SoundMgr.getInstance.SetAudioSources(true);
    }

    public void GenerateWorld()
    {
        StartCoroutine(WorldGenerator.getInstance.GenerateWorldMap());
    }

    public void TutorialWorld()
    {
        GameMgr.getInstance.m_bIsTutorial = true;
        StartCoroutine(WorldGenerator.getInstance.GenerateTutorialMap());
    }

    public void LoadWorld()
    {
        SaveManager.getInstance.LocalLoad();

        ObjectFactory objectFactory = ObjectFactory.getInstance;
        foreach (KeyValuePair<int, int> tmp in m_iDicHeroGarrison)
        {
            objectFactory.Create_Party(tmp.Key, PARTY_TYPE.GARRISON, tmp.Value);
        }
    }

    public void Assembly()
    {
        GameMgr.getInstance.m_bAssembleOnly = true;
        SceneToBattle();
    }

    public void EncountEnemy()
    {
        GameMgr.getInstance.m_bAssembleOnly = false;
        SceneToBattle();
    }

    public void SkipTutorial()
    {
        TutorialMgr.getInstance.SkipTutorial();
    }

    public void SceneToBattle()
    {
        Core_World core = GameObject.Find("Core").GetComponent<Core_World>();
        WorldIcon standingIcon = GameObject.Find("Geo").transform.GetChild(core.m_iGridIdx).GetComponent<WorldGeo>().m_worldIcon.GetComponent<WorldIcon>();
        BattleSceneMgr battleScene = BattleSceneMgr.getInstance;

        battleScene.m_curBattleWorldGeo = GameObject.Find("Geo").transform.GetChild(core.m_iGridIdx).GetComponent<WorldGeo>();
        battleScene.m_curBattleWorldIcon = standingIcon;

        SceneManager.LoadScene("Battle", LoadSceneMode.Additive);

        Transform WorldTrans = GameObject.Find("World").transform;
        for (int i = 0; i < 3; ++i)
        {
            WorldTrans.GetChild(i).gameObject.SetActive(false);
        }

        m_bToBattleScene = true;
    }

    public void Pollute(List<int> iPollutedList)
    {
        for (int i = 0; i < iPollutedList.Count; ++i)
        {
            ObjectFactory.getInstance.Create_Polluted(iPollutedList[i]);
        }
    }

    public bool bOn = true;
    public bool bOff = false;
    public void SettingBtn(bool bOn)
    {
        if (bOn)
        {
            GameObject.Find("SettingPanel").GetComponent<UIPanel>().alpha = 1;
        }
        else
        {
            GameObject.Find("SettingPanel").GetComponent<UIPanel>().alpha = 0;
        }
    }

    void ExitBtn()
    {
        if (!GameMgr.getInstance.m_bIsTutorial)
            SaveManager.getInstance.LocalSave();

        Destroy(GameObject.Find("Player").gameObject);

        Application.LoadLevel("Main");
    }


    void Raid()
    {
        Core_World core = GameObject.Find("Core").GetComponent<Core_World>();

        if (!core.m_bAttackAvailableArea)
            return;

        WorldIcon standingIcon = GameObject.Find("Geo").transform.GetChild(core.m_iGridIdx).GetComponent<WorldGeo>().m_worldIcon.GetComponent<WorldIcon>();

        if (standingIcon.m_iconType.Equals((int)WORLDICON_TYPE.VILLAGE) || standingIcon.m_iconType.Equals((int)WORLDICON_TYPE.CITY) || standingIcon.m_iconType.Equals((int)WORLDICON_TYPE.CASTLE))
        {
            BattleSceneMgr battleScene = BattleSceneMgr.getInstance;

            battleScene.m_bSiege = true;
            battleScene.m_iSiegeWallIdx = standingIcon.m_iWallIdx;
        }

        core.CheckEnmeyInThisArea();
        core.EncountEnemy();

    }


    public bool bPausedGame = true;
    public void Wait()
    {
        if (bPausedGame)
        {
            GameObject.Find("Stay").transform.GetChild(1).GetComponent<UILabel>().text = Localization.Get("UI_pause");
            GameObject.Find("Stay").transform.GetChild(0).GetComponent<UISprite>().color = new Color(233 / 255f, 177 / 255f, 56 / 255f);
            GameObject.Find("Core").GetComponent<Core_World>().ChangeBlockStatus(true);
            bPausedGame = false;

            TimeMgr.getInstance.Play(true);
        }
        else
        {
            GameObject.Find("Stay").transform.GetChild(1).GetComponent<UILabel>().text = Localization.Get("UI_wait");
            GameObject.Find("Stay").transform.GetChild(0).GetComponent<UISprite>().color = Color.white;
            GameObject.Find("Core").GetComponent<Core_World>().ChangeBlockStatus(false);
            bPausedGame = true;

            TimeMgr.getInstance.Stop();
        }

        //StartCoroutine(EnemyCheck());
    }

    //IEnumerator EnemyCheck()
    //{
    //    yield return new WaitForSeconds(1f);

    //    GameObject.Find("Core").GetComponent<Core_World>().CheckEnmeyInThisArea();
    //}

}
