using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BattleSceneSetter : MonoBehaviour
{

    // Use this for initialization
    void Start()
    {
        //		GameObject.Find ("AleartMsg").BroadcastMessage ("ChgParent",SendMessageOptions.DontRequireReceiver);
        GameObject.Find("Player").GetComponent<Player>().BattleScene();
        UnityEngine.SceneManagement.SceneManager.SetActiveScene(UnityEngine.SceneManagement.SceneManager.GetSceneByName("Battle"));
        GridMgr.getInstance.ChgGridInfo();

        if (GameMgr.getInstance.m_bAssembleOnly)
            StartCoroutine(BattleSceneMgr.getInstance.NightTurn());
        else
        {
            StartCoroutine(BattleSceneMgr.getInstance.DayTurn());
        }

        SoundMgr.getInstance.SetAudioSources();

        HealthBarSet();
        InitLight();
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

        if (morgueTrans.childCount > 0)
            yield return new WaitForSeconds(1.5f);

        morgueTrans.gameObject.BroadcastMessage("DestroyThis", SendMessageOptions.DontRequireReceiver);
        GameObject.Find("Morgue").GetComponent<Morgue>().ClearMorgue();
        Transform WorldTrans = GameObject.Find("World").transform;
        for (int i = 0; i < WorldTrans.childCount; ++i)
        {
            WorldTrans.GetChild(i).gameObject.SetActive(true);
        }

        BattleSceneMgr.getInstance.m_transformGridParent.gameObject.SetActive(false);

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
                m_sunLight.intensity = 1.1f;
                break;

            case 6:
                //			m_sunLight.color = Color.white;
                //			m_sunLight.intensity = 0.75f;
                m_sunLight.color = Color.white;
                m_sunLight.intensity = 1.1f;
                break;

            case 12:
                m_sunLight.color = Color.white;
                m_sunLight.intensity = 1.1f;
                break;

            case 18:
                //			m_sunLight.color = new Color (255 / 255f, 168 / 255f, 0 / 255f);
                //			m_sunLight.intensity = 1f;
                m_sunLight.color = Color.white;
                m_sunLight.intensity = 1.1f;
                break;
        }
    }
}
