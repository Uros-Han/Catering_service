using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Com.LuisPedroFonseca.ProCamera2D;
using UnityEngine.SceneManagement;

public class TutorialMgr : Singleton<TutorialMgr>
{

    public enum TUTO_STATE
    {
        BEFORE_RAID,
        EAT_BATTLE_0, EAT_BATTLE_1, EAT_BATTLE_2, EAT_BATTLE_3,
        ASSEMBLE_BODY, ASSEMBLE_LEG, ASSEMBLE_HAND, ASSEMBLE_HEAD,
        AFTER_RAID,
        FIGHT_BATTLE_0, FIGHT_BATTLE_1
    };

    public TUTO_STATE tutoState;

    public void Init()
    {
        tutoState = TUTO_STATE.BEFORE_RAID;

        StartCoroutine(Tutorial());
    }

    UIPanel highLight_1_battle;
    IEnumerator Tutorial()
    {
        #region Before Raid
        tutoState = TUTO_STATE.BEFORE_RAID;

        Transform tutoPanel_world = GameObject.Find("TutorialPanel").transform;
        Transform tooltipPanel = tutoPanel_world.transform.GetChild(0).Find("Tooltip").transform;
        Transform beforeRaidTrans = tooltipPanel.Find("Before Raid").transform;
        UIPanel skipPanel = tooltipPanel.Find("Skip").GetComponent<UIPanel>();
        UIPanel highLight_0 = tutoPanel_world.transform.GetChild(0).Find("HighLight_0").GetComponent<UIPanel>();
        UIPanel highLight_1 = tutoPanel_world.transform.GetChild(0).Find("HighLight_1").GetComponent<UIPanel>();
        GridMgr grid = GridMgr.getInstance;

        Camera.main.GetComponent<ProCamera2DPanAndZoom>().MaxZoomInAmount = 1f;
        ProCamera2DNumericBoundaries boundaries = Camera.main.GetComponent<ProCamera2DNumericBoundaries>();
        boundaries.TopBoundary = 0.7f;
        boundaries.BottomBoundary = -0.7f;
        boundaries.LeftBoundary = -1f;
        boundaries.RightBoundary = 1f;

        Core_World coreWorld = GameObject.Find("Core").GetComponent<Core_World>();
        coreWorld.ChangeBlockStatus(true);


        //모든 버튼 비활성화
        GameObject.Find("Assembly").transform.GetChild(0).GetComponent<BoxCollider>().enabled = false;
        GameObject.Find("Stay").transform.GetChild(0).GetComponent<BoxCollider>().enabled = false;
        GameObject.Find("MoveOrderPanel").transform.GetChild(0).GetComponent<BoxCollider>().enabled = false;

        //컨테이너 켜기
        tutoPanel_world.transform.GetChild(0).gameObject.SetActive(true);
        tooltipPanel.GetComponent<UIPanel>().alpha = 1f;

        //TUTO_0
        beforeRaidTrans.GetChild(0).GetComponent<UILabel>().enabled = true;
        skipPanel.alpha = 1f;
        highLight_0.alpha = 1f;
        highLight_0.depth = 3;
        highLight_0.gameObject.GetComponent<UIFollowTarget>().enabled = false;
        highLight_0.transform.position = GameObject.Find("Skip").transform.GetChild(1).position;

        yield return StartCoroutine(WaitUnilSkip());

        //TUTO_1
        beforeRaidTrans.GetChild(0).GetComponent<UILabel>().enabled = false;
        beforeRaidTrans.GetChild(1).GetComponent<UILabel>().enabled = true;
        skipPanel.alpha = 0f;
        highLight_0.depth = -2;
        highLight_0.gameObject.GetComponent<UIFollowTarget>().enabled = true;
        highLight_0.gameObject.GetComponent<UIFollowTarget>().target = GameObject.Find("Geo").transform.GetChild((grid.m_iXcount * (grid.m_iYcount / 2)) + (grid.m_iXcount / 2) + 1);
        coreWorld.ChangeBlockStatus(false);

        yield return StartCoroutine(WaitUnilSkip());

        //TUTO_2
        beforeRaidTrans.GetChild(1).GetComponent<UILabel>().enabled = false;
        beforeRaidTrans.GetChild(2).GetComponent<UILabel>().enabled = true;
        highLight_0.depth = 3;
        highLight_0.gameObject.GetComponent<UIFollowTarget>().enabled = false;
        highLight_0.transform.position = GameObject.Find("Skip").transform.GetChild(1).position;

        boundaries.RightBoundary = 2f;
        Camera.main.GetComponent<ProCamera2D>().OffsetX = 0.3f;
        Camera.main.GetComponent<ProCamera2DPanAndZoom>().enabled = false;
        coreWorld.ChangeBlockStatus(true);
        skipPanel.alpha = 1f;
        GameObject.Find("IconInfo").transform.GetChild(2).gameObject.SetActive(true);

        yield return StartCoroutine(WaitUnilSkip());

        //TUTO_3
        beforeRaidTrans.GetChild(2).GetComponent<UILabel>().enabled = false;
        beforeRaidTrans.GetChild(3).GetComponent<UILabel>().enabled = true;

        yield return StartCoroutine(WaitUnilSkip());

        //TUTO_4
        beforeRaidTrans.GetChild(3).GetComponent<UILabel>().enabled = false;
        beforeRaidTrans.GetChild(4).GetComponent<UILabel>().enabled = true;
        GameObject.Find("IconInfo").transform.GetChild(2).gameObject.SetActive(false);
        GameObject.Find("GeoInfo").transform.GetChild(2).gameObject.SetActive(true);

        yield return StartCoroutine(WaitUnilSkip());

        //TUTO_5
        beforeRaidTrans.GetChild(4).GetComponent<UILabel>().enabled = false;
        beforeRaidTrans.GetChild(5).GetComponent<UILabel>().enabled = true;
        GameObject.Find("GeoInfo").transform.GetChild(2).gameObject.SetActive(false);
        GameObject.Find("EnemyInfo").transform.GetChild(2).gameObject.SetActive(true);

        yield return StartCoroutine(WaitUnilSkip());

        //TUTO_6
        beforeRaidTrans.GetChild(5).GetComponent<UILabel>().enabled = false;
        beforeRaidTrans.GetChild(6).GetComponent<UILabel>().enabled = true;
        GameObject.Find("EnemyInfo").transform.GetChild(2).gameObject.SetActive(false);
        GameObject.Find("HungerInfo").transform.GetChild(2).gameObject.SetActive(true);
        highLight_1.alpha = 1f;
        highLight_1.depth = 3;
        highLight_1.GetComponent<UIFollowTarget>().enabled = false;
        highLight_1.transform.position = GameObject.Find("Hunger").transform.position;

        yield return StartCoroutine(WaitUnilSkip());

        //TUTO_7
        beforeRaidTrans.GetChild(6).GetComponent<UILabel>().enabled = false;
        beforeRaidTrans.GetChild(7).GetComponent<UILabel>().enabled = true;
        GameObject.Find("HungerInfo").transform.GetChild(2).gameObject.SetActive(false);

        skipPanel.alpha = 0f;
        highLight_1.alpha = 0f;

        highLight_0.depth = 3;
        highLight_0.gameObject.GetComponent<UIFollowTarget>().enabled = false;
        highLight_0.transform.position = GameObject.Find("MoveOrderPanel").transform.position + new Vector3(0, -0.025f);
        highLight_0.GetComponent<BoxCollider>().enabled = false;

        GameObject.Find("MoveOrderPanel").transform.GetChild(0).GetComponent<BoxCollider>().enabled = true;

        yield return StartCoroutine(WaitUnilSkip());

        highLight_0.alpha = 0f;
        #endregion

        yield return StartCoroutine(WaitUntilSceneChged(SceneManager.GetSceneByName("World")));

        #region Eat Battle
        tutoState = TUTO_STATE.EAT_BATTLE_0;

        Transform tutoPanel_battle = GameObject.Find("TutorialPanel").transform;
        Transform tooltipPanel_battle = tutoPanel_battle.transform.GetChild(0).Find("Tooltip").transform;
        Transform EatBattleTrans = tooltipPanel_battle.Find("Eat Battle").transform;
        UIPanel skipPanel_battle = tooltipPanel_battle.Find("Skip").GetComponent<UIPanel>();
        UIPanel highLight_0_battle = tutoPanel_battle.transform.GetChild(0).Find("HighLight_0").GetComponent<UIPanel>();
        highLight_1_battle = tutoPanel_battle.transform.GetChild(0).Find("HighLight_1").GetComponent<UIPanel>();

        GameObject.Find("Tangled").GetComponent<Tangled>().ChangeEatAvailable(true);
        GameObject.Find("Tangled").GetComponent<Tangled>().ChangeGrabAvailable(true);

        //컨테이너 켜기
        tutoPanel_battle.transform.GetChild(0).gameObject.SetActive(true);
        tooltipPanel_battle.GetComponent<UIPanel>().alpha = 1f;

        GameObject.Find("MorgueToggle").GetComponent<BoxCollider>().enabled = false;

        //TUTO_0
        EatBattleTrans.GetChild(0).GetComponent<UILabel>().enabled = true;

        yield return StartCoroutine(WaitUnilSkip());

        tutoState = TUTO_STATE.EAT_BATTLE_1;

        //TUTO_1
        EatBattleTrans.GetChild(0).GetComponent<UILabel>().enabled = false;
        EatBattleTrans.GetChild(1).GetComponent<UILabel>().enabled = true;

        skipPanel_battle.alpha = 0f;
        highLight_1_battle.alpha = 1f;
        highLight_1_battle.GetComponent<UIFollowTarget>().enabled = false;
        highLight_1_battle.transform.position = GameObject.Find("Abil_Grab").transform.GetChild(0).position;
        highLight_1_battle.transform.GetChild(0).GetComponent<TweenScale>().to = new Vector3(2.4f, 2.4f, 1f);
        highLight_1_battle.transform.GetChild(0).GetComponent<TweenScale>().to = new Vector3(2f, 2f, 1f);

        highLight_0_battle.alpha = 1f;
        highLight_0_battle.GetComponent<UIFollowTarget>().target = GameObject.Find("Human(Clone)").transform.Find("Body").transform;
        highLight_0_battle.depth = 3;

        GameObject.Find("Tangled").GetComponent<Tangled>().ChangeGrabAvailable(false);

        yield return StartCoroutine(WaitUnilSkip());

        tutoState = TUTO_STATE.EAT_BATTLE_2;

        skipPanel_battle.alpha = 1f;
        highLight_0_battle.GetComponent<UIFollowTarget>().enabled = false;
        highLight_0_battle.transform.position = GameObject.Find("Skip").transform.GetChild(1).position;

        yield return StartCoroutine(WaitUnilSkip());

        //TUTO_2
        EatBattleTrans.GetChild(1).GetComponent<UILabel>().enabled = false;
        EatBattleTrans.GetChild(2).GetComponent<UILabel>().enabled = true;

        skipPanel_battle.alpha = 0f;
        highLight_0_battle.alpha = 1f;
        highLight_0_battle.GetComponent<UIFollowTarget>().enabled = true;
        highLight_0_battle.GetComponent<UIFollowTarget>().target = GameObject.Find("Human(Clone)").transform.Find("Body").transform;
        highLight_1_battle.alpha = 0f;

        GameObject.Find("Tangled").GetComponent<Tangled>().ChangeEatAvailable(false);

        yield return StartCoroutine(WaitUnilSkip());

        tutoState = TUTO_STATE.EAT_BATTLE_3;

        //TUTO_3
        EatBattleTrans.GetChild(2).GetComponent<UILabel>().enabled = false;
        EatBattleTrans.GetChild(3).GetComponent<UILabel>().enabled = true;

        skipPanel_battle.alpha = 0f;
        highLight_0_battle.alpha = 0f;
        highLight_1_battle.alpha = 1f;
        highLight_1_battle.depth = 3;
        highLight_1_battle.transform.position = GameObject.Find("idx_0").transform.position;

        yield return StartCoroutine(WaitUnilSkip());

        Debug.Log(GameObject.Find("Morgue").transform.childCount);
        GameObject.Find("Morgue").BroadcastMessage("ChgBlockAssembleDrag", true, SendMessageOptions.DontRequireReceiver);

        //Digest Done
        skipPanel_battle.alpha = 1f;
        highLight_0_battle.alpha = 1f;
        highLight_1_battle.alpha = 0f;

        highLight_0_battle.GetComponent<UIFollowTarget>().enabled = false;
        highLight_0_battle.transform.position = GameObject.Find("Skip").transform.GetChild(1).position;

        yield return StartCoroutine(WaitUnilSkip());

        //TUTO_4
        EatBattleTrans.GetChild(3).GetComponent<UILabel>().enabled = false;
        EatBattleTrans.GetChild(4).GetComponent<UILabel>().enabled = true;

        highLight_1_battle.alpha = 0f;

        yield return StartCoroutine(WaitUnilSkip());

        //TUTO_5
        EatBattleTrans.GetChild(4).GetComponent<UILabel>().enabled = false;
        EatBattleTrans.GetChild(5).GetComponent<UILabel>().enabled = true;

        highLight_1_battle.alpha = 1f;
        highLight_1_battle.GetComponent<UIFollowTarget>().enabled = true;
        highLight_1_battle.GetComponent<UIFollowTarget>().gameCamera = UICamera.mainCamera;
        highLight_1_battle.GetComponent<UIFollowTarget>().target = GameObject.Find("Morgue").transform.Find("Body").transform;

        yield return StartCoroutine(WaitUnilSkip());

        //TUTO_6
        EatBattleTrans.GetChild(5).GetComponent<UILabel>().enabled = false;
        EatBattleTrans.GetChild(6).GetComponent<UILabel>().enabled = true;

        skipPanel_battle.alpha = 0f;
        highLight_0_battle.alpha = 0f;

        tutoState = TUTO_STATE.ASSEMBLE_BODY;
        GameObject.Find("Morgue").transform.Find("Body").GetComponent<Part>().ChgBlockAssembleDrag(false);

        yield return StartCoroutine(WaitUnilSkip());

        highLight_1_battle.alpha = 0f;
        GameObject.Find("Player").transform.Find("Body").GetComponent<Part>().ChgBlockAssembleDrag(true);

        //TUTO_7
        EatBattleTrans.GetChild(6).GetComponent<UILabel>().enabled = false;
        EatBattleTrans.GetChild(7).GetComponent<UILabel>().enabled = true;

        highLight_1_battle.alpha = 1f;
        highLight_1_battle.GetComponent<UIFollowTarget>().enabled = true;
        highLight_1_battle.GetComponent<UIFollowTarget>().gameCamera = UICamera.mainCamera;
        highLight_1_battle.GetComponent<UIFollowTarget>().target = GameObject.Find("Morgue").transform.Find("Leg").transform;

        skipPanel_battle.alpha = 1f;
        highLight_0_battle.alpha = 1f;

        yield return StartCoroutine(WaitUnilSkip());

        //TUTO_8
        EatBattleTrans.GetChild(7).GetComponent<UILabel>().enabled = false;
        EatBattleTrans.GetChild(8).GetComponent<UILabel>().enabled = true;

        skipPanel_battle.alpha = 0f;
        highLight_0_battle.alpha = 0f;

        tutoState = TUTO_STATE.ASSEMBLE_LEG;
        GameObject.Find("Morgue").transform.Find("Leg").GetComponent<Part>().ChgBlockAssembleDrag(false);

        yield return StartCoroutine(WaitUnilSkip());

        highLight_1_battle.alpha = 0f;
        GameObject.Find("Player").transform.Find("Leg").GetComponent<Part>().ChgBlockAssembleDrag(true);

        //TUTO_9
        EatBattleTrans.GetChild(8).GetComponent<UILabel>().enabled = false;
        EatBattleTrans.GetChild(9).GetComponent<UILabel>().enabled = true;

        highLight_1_battle.alpha = 1f;
        highLight_1_battle.GetComponent<UIFollowTarget>().enabled = true;
        highLight_1_battle.GetComponent<UIFollowTarget>().gameCamera = UICamera.mainCamera;
        highLight_1_battle.GetComponent<UIFollowTarget>().target = GameObject.Find("Morgue").transform.Find("Hand_R").transform;

        skipPanel_battle.alpha = 1f;
        highLight_0_battle.alpha = 1f;

        yield return StartCoroutine(WaitUnilSkip());

        //TUTO_10
        EatBattleTrans.GetChild(9).GetComponent<UILabel>().enabled = false;
        EatBattleTrans.GetChild(10).GetComponent<UILabel>().enabled = true;

        skipPanel_battle.alpha = 0f;
        highLight_0_battle.alpha = 0f;

        tutoState = TUTO_STATE.ASSEMBLE_HAND;
        GameObject.Find("Morgue").transform.Find("Hand_R").GetComponent<Part>().ChgBlockAssembleDrag(false);

        yield return StartCoroutine(WaitUnilSkip());

        highLight_1_battle.alpha = 0f;
        GameObject.Find("Player").transform.Find("Hand_R").GetComponent<Part>().ChgBlockAssembleDrag(true);

        //TUTO_11
        EatBattleTrans.GetChild(10).GetComponent<UILabel>().enabled = false;
        EatBattleTrans.GetChild(11).GetComponent<UILabel>().enabled = true;

        highLight_1_battle.alpha = 1f;
        highLight_1_battle.GetComponent<UIFollowTarget>().enabled = true;
        highLight_1_battle.GetComponent<UIFollowTarget>().gameCamera = UICamera.mainCamera;
        highLight_1_battle.GetComponent<UIFollowTarget>().target = GameObject.Find("Morgue").transform.Find("Head").transform;

        skipPanel_battle.alpha = 1f;
        highLight_0_battle.alpha = 1f;

        yield return StartCoroutine(WaitUnilSkip());

        //TUTO_12
        EatBattleTrans.GetChild(11).GetComponent<UILabel>().enabled = false;
        EatBattleTrans.GetChild(12).GetComponent<UILabel>().enabled = true;

        skipPanel_battle.alpha = 0f;
        highLight_0_battle.alpha = 0f;

        tutoState = TUTO_STATE.ASSEMBLE_HEAD;
        GameObject.Find("Morgue").transform.Find("Head").GetComponent<Part>().ChgBlockAssembleDrag(false);

        yield return StartCoroutine(WaitUnilSkip());

        highLight_1_battle.alpha = 0f;
        GameObject.Find("Player").transform.Find("Head").GetComponent<Part>().ChgBlockAssembleDrag(true);

        //TUTO_12
        EatBattleTrans.GetChild(12).GetComponent<UILabel>().enabled = false;
        EatBattleTrans.GetChild(13).GetComponent<UILabel>().enabled = true;

        highLight_0_battle.alpha = 1f;
        highLight_0_battle.transform.position = GameObject.Find("MorgueToggle").transform.position;
        GameObject.Find("MorgueToggle").GetComponent<BoxCollider>().enabled = true;
        #endregion

        yield return StartCoroutine(WaitUntilSceneChged(SceneManager.GetSceneByName("Battle")));

        #region After Raid
        tutoState = TUTO_STATE.AFTER_RAID;

        beforeRaidTrans.gameObject.SetActive(false);
        Transform afterRaidTrans = tooltipPanel.Find("After Raid").transform;

        coreWorld.ChangeBlockStatus(true);

        boundaries.RightBoundary = 1f;
        Camera.main.GetComponent<ProCamera2D>().OffsetX = 0f;
        Camera.main.GetComponent<ProCamera2DPanAndZoom>().enabled = true;

        //모든 버튼 비활성화
        GameObject.Find("Assembly").transform.GetChild(0).GetComponent<BoxCollider>().enabled = false;
        GameObject.Find("Stay").transform.GetChild(0).GetComponent<BoxCollider>().enabled = false;
        GameObject.Find("MoveOrderPanel").transform.GetChild(0).GetComponent<BoxCollider>().enabled = false;

        //TUTO_0
        afterRaidTrans.GetChild(0).GetComponent<UILabel>().enabled = true;
        skipPanel.alpha = 1f;
        highLight_0.alpha = 1f;
        highLight_0.depth = 3;
        highLight_0.gameObject.GetComponent<UIFollowTarget>().enabled = false;
        highLight_0.transform.position = GameObject.Find("Skip").transform.GetChild(1).position;

        yield return StartCoroutine(WaitUnilSkip());

        //TUTO_1
        afterRaidTrans.GetChild(0).GetComponent<UILabel>().enabled = false;
        afterRaidTrans.GetChild(1).GetComponent<UILabel>().enabled = true;

        highLight_1.depth = 3;
        highLight_1.alpha = 1f;
        highLight_1.gameObject.GetComponent<UIFollowTarget>().enabled = false;
        highLight_1.transform.position = GameObject.Find("PartsNum").transform.GetChild(1).position;

        yield return StartCoroutine(WaitUnilSkip());

        //TUTO_2
        afterRaidTrans.GetChild(1).GetComponent<UILabel>().enabled = false;
        afterRaidTrans.GetChild(2).GetComponent<UILabel>().enabled = true;

        highLight_1.transform.position = GameObject.Find("Sight").transform.GetChild(1).position;

        yield return StartCoroutine(WaitUnilSkip());

        //TUTO_3
        afterRaidTrans.GetChild(2).GetComponent<UILabel>().enabled = false;
        afterRaidTrans.GetChild(3).GetComponent<UILabel>().enabled = true;

        highLight_1.transform.position = GameObject.Find("Speed").transform.GetChild(1).position;

        yield return StartCoroutine(WaitUnilSkip());

        //TUTO_4
        afterRaidTrans.GetChild(3).GetComponent<UILabel>().enabled = false;
        afterRaidTrans.GetChild(4).GetComponent<UILabel>().enabled = true;
        skipPanel.alpha = 0f;
        highLight_1.alpha = 0f;
        highLight_0.depth = -2;
        highLight_0.gameObject.GetComponent<UIFollowTarget>().enabled = true;
        highLight_0.gameObject.GetComponent<UIFollowTarget>().target = GameObject.Find("Geo").transform.GetChild((grid.m_iXcount * (grid.m_iYcount / 2)) + (grid.m_iXcount / 2) - 1);
        coreWorld.ChangeBlockStatus(false);
        highLight_0.GetComponent<BoxCollider>().enabled = true;


        yield return StartCoroutine(WaitUnilSkip());

        //TUTO_5
        afterRaidTrans.GetChild(4).GetComponent<UILabel>().enabled = false;
        afterRaidTrans.GetChild(5).GetComponent<UILabel>().enabled = true;
        skipPanel.alpha = 0f;

        boundaries.RightBoundary = 2f;
        Camera.main.GetComponent<ProCamera2D>().OffsetX = 0.3f;
        Camera.main.GetComponent<ProCamera2DPanAndZoom>().enabled = false;
        GameObject.Find("MoveOrderPanel").transform.GetChild(0).GetComponent<BoxCollider>().enabled = true;

        highLight_0.depth = 3;
        highLight_0.gameObject.GetComponent<UIFollowTarget>().enabled = true;
        highLight_0.gameObject.GetComponent<UIFollowTarget>().target = GameObject.Find("MoveOrderPanel").transform.GetChild(0).transform;
        highLight_0.gameObject.GetComponent<UIFollowTarget>().gameCamera = UICamera.mainCamera;
        highLight_0.GetComponent<BoxCollider>().enabled = false;

        yield return null;
        coreWorld.ChangeBlockStatus(true);

        yield return StartCoroutine(WaitUnilSkip());

        Camera.main.GetComponent<ProCamera2D>().OffsetX = 0f;
        #endregion

        yield return StartCoroutine(WaitUntilSceneChged(SceneManager.GetSceneByName("World")));

        #region Fight Battle
        tutoState = TUTO_STATE.FIGHT_BATTLE_0;

        tutoPanel_battle = GameObject.Find("TutorialPanel").transform;
        tooltipPanel_battle = tutoPanel_battle.transform.GetChild(0).Find("Tooltip").transform;
        Transform FightBattleTrans = tooltipPanel_battle.Find("Fight Battle").transform;
        skipPanel_battle = tooltipPanel_battle.Find("Skip").GetComponent<UIPanel>();
        highLight_0_battle = tutoPanel_battle.transform.GetChild(0).Find("HighLight_0").GetComponent<UIPanel>();
        highLight_1_battle = tutoPanel_battle.transform.GetChild(0).Find("HighLight_1").GetComponent<UIPanel>();

        GameObject.Find("Tangled").GetComponent<Tangled>().ChangeEatAvailable(true);
        GameObject.Find("Tangled").GetComponent<Tangled>().ChangeGrabAvailable(true);

        //컨테이너 켜기
        tutoPanel_battle.transform.GetChild(0).gameObject.SetActive(true);
        tooltipPanel_battle.GetComponent<UIPanel>().alpha = 1f;

        GameObject.Find("MorgueToggle").GetComponent<BoxCollider>().enabled = false;

        //TUTO_0
        FightBattleTrans.GetChild(0).GetComponent<UILabel>().enabled = true;

        yield return StartCoroutine(WaitUnilSkip());

        tutoState = TUTO_STATE.FIGHT_BATTLE_1;

        //TUTO_1
        FightBattleTrans.GetChild(0).GetComponent<UILabel>().enabled = false;
        FightBattleTrans.GetChild(1).GetComponent<UILabel>().enabled = true;

        Time.timeScale = 0f;

        skipPanel_battle.alpha = 1f;
        highLight_0_battle.alpha = 1f;
        highLight_0_battle.depth = 3;
        highLight_0_battle.GetComponent<UIFollowTarget>().enabled = false;
        highLight_0_battle.transform.position = GameObject.Find("Skip").transform.GetChild(1).position;

        yield return StartCoroutine(WaitUnilSkip());

        Time.timeScale = 1f;
        skipPanel_battle.alpha = 0f;
        highLight_0_battle.alpha = 0f;

        yield return StartCoroutine(WaitUnilSkip());

        //TUTO_2
        FightBattleTrans.GetChild(1).GetComponent<UILabel>().enabled = false;
        FightBattleTrans.GetChild(2).GetComponent<UILabel>().enabled = true;

        skipPanel_battle.alpha = 1f;
        highLight_0_battle.alpha = 1f;

        Time.timeScale = 0f;

        yield return StartCoroutine(WaitUnilSkip());

        Time.timeScale = 1f;
        skipPanel_battle.alpha = 0f;
        highLight_0_battle.alpha = 0f;

        yield return StartCoroutine(WaitUnilSkip());

        //TUTO_3
        FightBattleTrans.GetChild(2).GetComponent<UILabel>().enabled = false;
        FightBattleTrans.GetChild(3).GetComponent<UILabel>().enabled = true;

        Time.timeScale = 0f;

        skipPanel_battle.alpha = 1f;
        highLight_0_battle.alpha = 1f;
        highLight_1_battle.alpha = 1f;
        highLight_1_battle.depth = 3;
        highLight_1_battle.GetComponent<UIFollowTarget>().enabled = false;
        highLight_1_battle.transform.position = GameObject.Find("Health").transform.position;

        yield return StartCoroutine(WaitUnilSkip());

        Time.timeScale = 1f;
        skipPanel_battle.alpha = 0f;
        highLight_0_battle.alpha = 0f;

        yield return StartCoroutine(WaitUnilSkip());

        //TUTO_4
        FightBattleTrans.GetChild(3).GetComponent<UILabel>().enabled = false;
        FightBattleTrans.GetChild(4).GetComponent<UILabel>().enabled = true;

        skipPanel_battle.alpha = 1f;
        highLight_0_battle.alpha = 1f;

        Time.timeScale = 0f;

        yield return StartCoroutine(WaitUnilSkip());

        Time.timeScale = 1f;
        skipPanel_battle.alpha = 0f;
        highLight_0_battle.alpha = 0f;

        yield return StartCoroutine(WaitUnilSkip());

        //TUTO_5
        FightBattleTrans.GetChild(4).GetComponent<UILabel>().enabled = false;
        FightBattleTrans.GetChild(5).GetComponent<UILabel>().enabled = true;

        skipPanel_battle.alpha = 0f;
        highLight_0_battle.transform.position = GameObject.Find("Poop").transform.position;

        highLight_1_battle.alpha = 1f;
        highLight_1_battle.depth = 3;
        highLight_1_battle.GetComponent<UIFollowTarget>().enabled = true;
        highLight_1_battle.GetComponent<UIFollowTarget>().gameCamera = UICamera.mainCamera;
        highLight_1_battle.GetComponent<UIFollowTarget>().target = GameObject.Find("Morgue").transform.Find("Head").transform;

        GameObject.Find("Morgue").transform.Find("Head").GetComponent<Part>().ChgBlockAssembleDrag(false);

        yield return StartCoroutine(WaitUnilSkip());

        //TUTO_6
        FightBattleTrans.GetChild(5).GetComponent<UILabel>().enabled = false;
        FightBattleTrans.GetChild(6).GetComponent<UILabel>().enabled = true;

        skipPanel_battle.alpha = 1f;
        highLight_0_battle.transform.position = GameObject.Find("Skip").transform.GetChild(1).position;

        highLight_1_battle.alpha = 0f;

        yield return StartCoroutine(WaitUnilSkip());
        #endregion

        Destroy(GameObject.Find("Player").gameObject);
        Application.LoadLevel("Main");
    }

    public void ChgHighLightCamera(bool bToUIScreen)
    {
        if (bToUIScreen)
        {
            highLight_1_battle.GetComponent<UIFollowTarget>().gameCamera = UICamera.mainCamera;
        }
        else
        {
            highLight_1_battle.GetComponent<UIFollowTarget>().gameCamera = Camera.main;
        }
    }

    IEnumerator WaitUntilSceneChged(Scene curScene)
    {
        do
        {
            yield return null;

        } while (SceneManager.GetActiveScene() == curScene);
    }

    IEnumerator WaitUnilSkip()
    {
        do
        {
            yield return null;

        } while (!bSkipTuto);

        bSkipTuto = false;
    }

    bool bSkipTuto = false;
    public void SkipTutorial()
    {
        bSkipTuto = true;
    }
}
