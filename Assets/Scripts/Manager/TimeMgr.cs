using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TimeMgr : Singleton<TimeMgr>
{

    public float m_fHour;
    public float m_fMinute;

    Light m_sunLight;

    public TIME_STATE m_timeState = TIME_STATE.STOP;

    // Use this for initialization
    void Start()
    {
        m_sunLight = GameObject.Find("Sun").GetComponent<Light>();

        m_fHour = 6;

        InitLight();
    }

    void InitLight()
    {
        switch ((int)m_fHour)
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

    public void Play(bool bWait = false)
    {
        if (m_sunLight == null)
            m_sunLight = GameObject.Find("Sun").GetComponent<Light>();

        if (!GameMgr.getInstance.m_bIsTutorial)
        {
            //GameObject.Find("Party").BroadcastMessage("Idling", SendMessageOptions.DontRequireReceiver);
            GameObject.Find("Party").BroadcastMessage("MoveOrder", SendMessageOptions.DontRequireReceiver);
            //StartCoroutine(Play_Coroutine());
        }

        m_timeState = TIME_STATE.PLAY;
        bPressPause = false;

        if (bWait)
            StartCoroutine(Wait_Coroutine());

    }

    public void Stop()
    {
        GameObject.Find("Party").BroadcastMessage("Halt", SendMessageOptions.DontRequireReceiver);
        GameObject.Find("WorldMapManager").GetComponent<WorldMapManager>().m_worldTurnState = WORLDTURN_STATE.IDLE;
        bPressPause = true;

        m_timeState = TIME_STATE.STOP;
    }

    public float m_fWaitTimeTick;
    bool bPressPause = false;
    IEnumerator Wait_Coroutine()
    {

        TopBarUI hungerBar = GameObject.Find("Hunger").GetComponent<TopBarUI>();
        TopBarUI healthBar = GameObject.Find("Health").GetComponent<TopBarUI>();
        GameMgr gameMgr = GameMgr.getInstance;
        Core core = GameObject.Find("Player").transform.GetChild(0).GetComponent<Core>();
        Core_World coreWorld = GameObject.Find("Core").GetComponent<Core_World>();

        float fTickWasteHunger = 5f;
        float fTickGenHealth = 2.5f;

        do
        {
            if (m_fWaitTimeTick <= 0f)
            {
                m_fWaitTimeTick = 2f;


                if (GameObject.Find("PartyManager") != null)
                    GameObject.Find("PartyManager").GetComponent<PartyManager>().CalculateDepolying();

                if (gameMgr.m_iHunger - fTickWasteHunger > 0)
                    hungerBar.ChangeValue(gameMgr.m_iHunger - fTickWasteHunger);
                else
                {
                    float fGainHunger = coreWorld.fPartEatHunger + GameMgr.getInstance.m_iHunger - fTickWasteHunger;
                    GameObject.Find("Hunger").GetComponent<TopBarUI>().ChangeValue(0);
                    StartCoroutine(coreWorld.EatMyPart(fGainHunger));
                }

                if (core.m_fCurHealth + fTickGenHealth <= 100f)
                    healthBar.ChangeValue(core.m_fCurHealth + fTickGenHealth);
                else
                    healthBar.ChangeValue(100f);
            }

            m_fWaitTimeTick -= Time.deltaTime;

            yield return null;

        } while (!bPressPause);

        bPressPause = false;
    }

    //IEnumerator Play_Coroutine()
    //{
    //GameObject.Find("Party").BroadcastMessage("Idling", SendMessageOptions.DontRequireReceiver);
    //GameObject.Find("Party").BroadcastMessage("MoveOrder", SendMessageOptions.DontRequireReceiver);

    //float fValue = 0f;
    //float fTime = 1f;

    //float fStart = m_fHour;
    //float fTarget = m_fHour + 6f;

    //Color colorStart = m_sunLight.color;
    //Color colorTarget = Color.white;
    //float fIntensityStart = m_sunLight.intensity;
    //float fIntensityTarget = 0f;

    //switch ((int)fTarget)
    //{
    //    case 6:
    //        //			colorTarget = Color.white;
    //        //			fIntensityTarget = 0.75f;
    //        colorTarget = Color.white;
    //        fIntensityTarget = 1f;
    //        break;

    //    case 12:
    //        colorTarget = Color.white;
    //        fIntensityTarget = 1f;
    //        break;

    //    case 18:
    //        //			colorTarget = new Color (255 / 255f, 168 / 255f, 0 / 255f);
    //        //			fIntensityTarget = 1f;
    //        colorTarget = Color.white;
    //        fIntensityTarget = 1f;
    //        break;

    //    case 24:
    //        //			m_sunLight.color = new Color (218 / 255f, 226 / 255f, 255 / 255f);
    //        //			m_sunLight.intensity = 0.15f;
    //        colorTarget = Color.white;
    //        fIntensityTarget = 1f;
    //        break;
    //}


    //do
    //{
    //    yield return null;

    //    fValue += (Time.unscaledDeltaTime / fTime);

    //    if (fValue > 1f)
    //        fValue = 1f;

    //    float fSmoothStep = Mathf.SmoothStep(0.0f, 1.0f, Mathf.SmoothStep(0.0f, 1.0f, fValue));
    //    m_fHour = Mathf.Lerp(fStart, fTarget, fSmoothStep);
    //    m_sunLight.color = Color.Lerp(colorStart, colorTarget, fSmoothStep);
    //    m_sunLight.intensity = Mathf.Lerp(fIntensityStart, fIntensityTarget, fSmoothStep);

    //    m_fMinute = (m_fHour - (int)m_fHour) * 60f;

    //    if (m_fHour >= 24f)
    //    {
    //        m_fHour -= 24f;
    //    }

    //    if (m_fMinute >= 60f)
    //        m_fMinute -= 60f;

    //} while (fValue != 1);

    //if (fTarget == 24f)
    //GameMgr.getInstance.m_iDay += 1;

    //yield return new WaitForSeconds(0.1f);

    //do
    //{
    //    yield return null;
    //} while (Application.loadedLevelName.Equals("Battle"));

    //yield return new WaitForSeconds(0.25f);

    //}


}
