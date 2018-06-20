using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BattleSceneSetter : MonoBehaviour
{
    BattleSceneMgr m_battleSceneMgr;
    // Use this for initialization
    void Start()
    {
        //		GameObject.Find ("AleartMsg").BroadcastMessage ("ChgParent",SendMessageOptions.DontRequireReceiver);

        m_battleSceneMgr = BattleSceneMgr.getInstance;

        GameObject.Find("Player").GetComponent<Player>().BattleScene();
        UnityEngine.SceneManagement.SceneManager.SetActiveScene(UnityEngine.SceneManagement.SceneManager.GetSceneByName("Battle"));
        GridMgr.getInstance.ChgGridInfo();

        if (GameMgr.getInstance.m_bAssembleOnly)
            StartCoroutine(m_battleSceneMgr.NightTurn());
        else
        {
            StartCoroutine(m_battleSceneMgr.DayTurn());
        }

        SoundMgr.getInstance.SetAudioSources();

        if (m_battleSceneMgr.m_bSiege)
        {
            GameObject.Find("Player").transform.position = new Vector3(-0.64f, 0f, 0f);

            Transform strongholdFloor = GameObject.Find("StrongholdFloor").transform;
            for (int i = 0; i < strongholdFloor.childCount; ++i)
            {
                strongholdFloor.GetChild(i).gameObject.SetActive(true);
            }
        }

        if (!GameMgr.getInstance.m_bAssembleOnly)
            SetBuilding();
        HealthBarSet();
        InitLight();

        List<int> listAbil = GameObject.Find("Player").GetComponent<CoreAbilityMgr>().m_listAbil;
        for (int i = 1; i < listAbil.Count; ++i)
        {
            ObjectFactory.getInstance.Create_AbilUI(listAbil[i]);
        }
    }

    void SetBuilding()
    {
        Transform buildTrans = GameObject.Find("Buildings").transform;
        bool bBuildOn = false;

        if (m_battleSceneMgr.m_curBattleWorldGeo.m_bRoad)
            GameObject.Find("Road").GetComponent<SpriteRenderer>().enabled = true;

        switch (m_battleSceneMgr.m_curBattleWorldIcon.m_iconType)
        {
            case (int)WORLDICON_TYPE.FARM:
                bBuildOn = true;
                break;

            case (int)WORLDICON_TYPE.VILLAGE:
                bBuildOn = true;
                break;

            case (int)WORLDICON_TYPE.CITY:
                bBuildOn = true;
                break;

            case (int)WORLDICON_TYPE.CASTLE:
                bBuildOn = true;
                break;
        }

        switch (m_battleSceneMgr.m_curBattleWorldGeo.m_geoStatus)
        {
            case WORLD_GEO.GRASS:
                GameObject.Find("GEO").GetComponent<SpriteRenderer>().sprite = ObjectFactory.getInstance.m_sprite_geoFloor[0];
                break;

            case WORLD_GEO.FOREST:
                GameObject.Find("GEO").GetComponent<SpriteRenderer>().sprite = ObjectFactory.getInstance.m_sprite_geoFloor[1];
                GameObject.Find("ForestShade").GetComponent<SpriteRenderer>().enabled = true;
                break;

            default:
                Debug.LogError("Unknown Geo sprite");
                break;
        }

        if (bBuildOn)
        {
            for (int i = 0; i < buildTrans.childCount; ++i)
            {
                if (m_battleSceneMgr.m_bSiege && i > 1)
                    break;

                buildTrans.GetChild(i).gameObject.SetActive(true);

                Sprite[] buildSprites = ObjectFactory.getInstance.m_sprite_geoBuilding[m_battleSceneMgr.m_curBattleWorldIcon.m_iconType];
                buildTrans.GetChild(i).GetComponent<SpriteRenderer>().sprite = buildSprites[Random.Range(0, buildSprites.Length)];
            }
        }

    }

    public void ToWorldMap()
    {
        GameObject.Find("MorgueToggle").GetComponent<BoxCollider>().enabled = false;
        Transform PlayerTrans = GameObject.Find("Player").transform;

        for (int i = 0; i < PlayerTrans.childCount; ++i)
        {
            if (PlayerTrans.GetChild(i).GetComponent<Part>().m_bBreakedPath)
            {
                ObjectFactory.getInstance.Create_MessageBox_OneButton(Localization.Get("Mbox_BreakedPath"), "DestroyMessageBox");
                return;
            }
        }

        if (m_battleSceneMgr.m_bSiege)
        {
            m_battleSceneMgr.m_bSiege = false;

            GameObject.Find("Player").transform.position = new Vector3(0f, 0f, 0f);
        }

        StartCoroutine(ToWorldMap_Coroutine());
    }

    IEnumerator ToWorldMap_Coroutine()
    {
        //Clean Morgue
        Transform morgueTrans = GameObject.Find("Morgue").transform;
        for (int i = 0; i < morgueTrans.childCount; ++i)
        {
            if (morgueTrans.GetChild(i).gameObject.name != "Poop")
            {
                morgueTrans.GetChild(i).GetComponent<SpriteRenderer>().enabled = false;
                ObjectFactory.getInstance.Create_Poop();
                if (GameMgr.getInstance.m_iHunger < 100)
                    yield return new WaitForSeconds(0.51f);
                else
                    yield return new WaitForSeconds(0.4f);
            }
        }
        //Debug.Log(morgueTrans.childCount);
        if (morgueTrans.childCount > 1)
            yield return new WaitForSeconds(1.5f);

        morgueTrans.gameObject.BroadcastMessage("DestroyThis", SendMessageOptions.DontRequireReceiver);
        GameObject.Find("Morgue").GetComponent<Morgue>().ClearMorgue();
        Transform WorldTrans = GameObject.Find("World").transform;
        for (int i = 0; i < WorldTrans.childCount; ++i)
        {
            WorldTrans.GetChild(i).gameObject.SetActive(true);
        }

        m_battleSceneMgr.m_transformGridParent.gameObject.SetActive(false);

        UnityEngine.SceneManagement.SceneManager.UnloadSceneAsync("Battle");
    }

    void HealthBarSet()
    {
        Transform PlayerTrans = GameObject.Find("Player").transform;
        ObjectFactory objFac = ObjectFactory.getInstance;

        for (int i = 1; i < PlayerTrans.childCount; ++i)
        {
            if (PlayerTrans.GetChild(i).GetComponent<Part>().m_objHealthBar == null)
            {
                PlayerTrans.GetChild(i).GetComponent<Part>().m_objHealthBar = objFac.Create_HealthBar(PlayerTrans.GetChild(i).gameObject);
            }
        }
    }

    public void SkipTutorial()
    {
        TutorialMgr.getInstance.SkipTutorial();
    }

    void InitLight()
    {
        Light m_sunLight = GameObject.Find("Sun").GetComponent<Light>();

        switch ((int)TimeMgr.getInstance.m_fHour)
        {
            case 0:
                //			m_sunLight.color = new Color (218 / 255f, 226 / 255f, 255 / 255f);
                //			m_sunLight.intensity = 0.15f;
                m_sunLight.color = Color.white;
                m_sunLight.intensity = 1f;
                break;

            case 6:
                //			m_sunLight.color = Color.white;
                //			m_sunLight.intensity = 0.75f;
                m_sunLight.color = Color.white;
                m_sunLight.intensity = 1f;
                break;

            case 12:
                m_sunLight.color = Color.white;
                m_sunLight.intensity = 1f;
                break;

            case 18:
                //			m_sunLight.color = new Color (255 / 255f, 168 / 255f, 0 / 255f);
                //			m_sunLight.intensity = 1f;
                m_sunLight.color = Color.white;
                m_sunLight.intensity = 1f;
                break;
        }
    }
}
