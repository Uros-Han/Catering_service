using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Com.LuisPedroFonseca.ProCamera2D;

public class Tangled : MonoBehaviour
{

    List<Vector3> m_listCurve;
    Vector3 m_vecBeforeP1;

    float m_fTangledPointX;
    float m_fTangledPointY;


    public bool m_bTangledReady;

    public Vector3 m_vecTangledEdge;

    public GameObject m_DragingObject;

    // Use this for initialization
    void Start()
    {
        m_bTangledReady = true;

        m_listCurve = new List<Vector3>();
        StartCoroutine(TangledPoint());
    }

    //IEnumerator TangledAttackDelay()
    //{
    //    m_bTangledReady = false;
    //    yield return new WaitForSeconds(m_fTangledDelay);

    //    m_bTangledReady = true;
    //}

    public void ChangeEatAvailable(bool bCantEat)
    {
        this.bCantEat = bCantEat;
    }

    public void ChangeGrabAvailable(bool bCantGrab)
    {
        this.bCantGrab = bCantGrab;
    }

    bool bCantEat = false;
    bool bCantGrab = false;
    IEnumerator TangledDrag_Coroutine(Transform targetTransform, bool bHealGrab = false)
    {
        m_bTangledReady = false;
        bool bDoneDrag = false;
        bool bReadyToEat = false;

        float fCurTime = 0f;
        float fMaxReachTime = 0.1f;


        float fTangledDelay = 2f;

        if (GameObject.Find("Player").GetComponent<CoreAbilityMgr>().HasAbility(5))
            fTangledDelay = 1f;

        int iJointCount = 5;
        Vector3 target = Vector3.zero;

        bool bExit = false;

        m_DragingObject = targetTransform.gameObject;

        Unit targetUnit = targetTransform.GetComponent<Unit>();
        bool bCantGrab = false;
        bool bGrabForceExit = false;

        if (targetUnit.m_enemyType == ENEMY_TYPE.HERO)
        {
            if (targetUnit.m_fCurMorale > 0f)
            {
                targetUnit.m_bCatched = false;
                bCantGrab = true;
            }
            else
                targetUnit.m_bCatched = true;
        }
        else
            targetUnit.m_bCatched = true;

        Collider2D coreCollider = GameObject.Find("Core").GetComponent<Collider2D>();
        MouthPanel mouthPanel = GameObject.Find("MouthPanel").GetComponent<MouthPanel>();

        Camera.main.GetComponent<ProCamera2DPanAndZoom>().enabled = false;

        UISprite grabSprite = GameObject.Find("Abil_Grab").transform.Find("frontSprite").GetComponent<UISprite>();

        grabSprite.fillAmount = 0f;
        grabSprite.color = new Color(183f / 255f, 40f / 255f, 72f / 255f);

        for (int i = 0; i < targetTransform.childCount; ++i)
        {
            targetTransform.GetChild(i).GetComponent<SpriteRenderer>().sortingLayerName = "FrontObject";
        }

        do
        {
            if (targetTransform == null)
            {
                m_bTangledReady = true;
                Camera.main.GetComponent<ProCamera2DPanAndZoom>().enabled = true;
                break;
            }

            if (!bHealGrab)
            {
                if (!bDoneDrag)
                {

                    target = Camera.main.ScreenToWorldPoint(Input.mousePosition);
                    targetTransform.position = new Vector3(target.x, target.y);

                    if (coreCollider.OverlapPoint(target) && !mouthPanel.isMouthFull() && !bCantEat)
                    {
                        targetTransform.localScale = new Vector3(1.25f, 1.25f, 1f);
                        bReadyToEat = true;
                    }
                    else if (bReadyToEat && !coreCollider.OverlapPoint(target))
                    {
                        targetTransform.localScale = Vector3.one;
                        bReadyToEat = false;
                    }
                }
            }
            else
            {
                target = targetTransform.position;

                if (targetUnit.m_fCurHealth <= 0f)
                {
                    bGrabForceExit = true;
                    targetUnit.Death();
                }
            }

            Vector3 m_vecP1 = new Vector3(m_fTangledPointX, m_fTangledPointY);

            m_listCurve.Clear();

            for (int i = 0; i < iJointCount; ++i)
            {
                m_listCurve.Add(BezierCurve(((float)i / (float)(iJointCount - 1)) * (fCurTime / fMaxReachTime), coreCollider.transform.position, m_vecP1, target));

                if (i == iJointCount - 1)
                {
                    m_vecTangledEdge = BezierCurve(((float)i / (float)(iJointCount - 1)) * (fCurTime / fMaxReachTime), Vector3.zero, m_vecP1, target);
                }
            }

            for (int i = 0; i < iJointCount - 1; ++i)
            {
                if (i == iJointCount - 2)
                    DrawLine(m_listCurve[i], m_listCurve[i + 1], new Color(80 / 255f, 25 / 255f, 100 / 255f), i, true);
                else
                    DrawLine(m_listCurve[i], m_listCurve[i + 1], new Color(80 / 255f, 25 / 255f, 100 / 255f), i);
            }

            m_vecBeforeP1 = m_vecP1;

            if (!bDoneDrag)
            {
                if (fCurTime < fMaxReachTime)
                {
                    fCurTime += Time.unscaledDeltaTime;
                }
                else
                {
                    fCurTime = fMaxReachTime;
                    if (bCantGrab)
                    {
                        bGrabForceExit = true;
                    }
                }
            }
            else
            {
                if (fCurTime > 0f)
                {
                    fCurTime -= Time.unscaledDeltaTime * fMaxReachTime / fTangledDelay;

                    grabSprite.fillAmount = 1f - (fCurTime * 10f);

                }
                else
                {
                    fCurTime = 0f;

                    grabSprite.color = Color.white;
                    m_bTangledReady = true;

                    break;
                }
            }

            if ((!bHealGrab && !Input.GetMouseButton(0)) || bGrabForceExit)
            {
                if (!bDoneDrag)
                {
                    bDoneDrag = true;
                    m_DragingObject = null;
                    Camera.main.GetComponent<ProCamera2DPanAndZoom>().enabled = true;
                    targetUnit.m_bCatched = false;
                    if (targetTransform.GetComponent<FSM_Enemy>() != null && targetTransform.GetComponent<FSM_Enemy>().m_AiState == AI_STATE.PANIC)
                        targetTransform.GetComponent<FSM_Enemy>().m_AiState = AI_STATE.MOVE;

                    for (int i = 0; i < targetTransform.childCount; ++i)
                    {
                        targetTransform.GetChild(i).GetComponent<SpriteRenderer>().sortingLayerName = "Objects";
                    }

                    if (GameMgr.getInstance.m_bIsTutorial && TutorialMgr.getInstance.tutoState == TutorialMgr.TUTO_STATE.EAT_BATTLE_1)
                        TutorialMgr.getInstance.SkipTutorial();
                }

                if (bReadyToEat)
                {
                    //targetTransform.localScale = Vector3.one;
                    StartCoroutine(GameObject.Find("Core").GetComponent<Core>().Eat(targetTransform.gameObject));
                    if (GameMgr.getInstance.m_bIsTutorial && TutorialMgr.getInstance.tutoState == TutorialMgr.TUTO_STATE.EAT_BATTLE_2)
                        TutorialMgr.getInstance.SkipTutorial();
                    bReadyToEat = false;
                }
            }

            yield return null;

        } while (true);

        Vector3 corePos = GameObject.Find("Core").transform.position;
        for (int i = 0; i < iJointCount - 1; ++i)
        {
            if (i == iJointCount - 2)
                DrawLine(corePos, corePos, new Color(80 / 255f, 25 / 255f, 100 / 255f), i, true);
            else
                DrawLine(corePos, corePos, new Color(80 / 255f, 25 / 255f, 100 / 255f), i);
        }


    }

    IEnumerator TangledAbil_6(Transform target)
    {
        float fTimer = 0f;
        while (Input.GetMouseButton(0))
        {
            if (fTimer > 1f)
            {
                fTimer = 0f;
                target.GetComponent<FSM>().Weapon_Attack(5f, target.gameObject, true, true);
            }

            fTimer += Time.deltaTime;
            yield return null;
        }
    }

    public void TangledDrag(Transform target)
    {
        if (bCantGrab)
            return;

        StartCoroutine(TangledDrag_Coroutine(target));
        if (GameObject.Find("Player").GetComponent<CoreAbilityMgr>().HasAbility(6))
            StartCoroutine(TangledAbil_6(target));
    }

    public void TangledHeal(Transform target)
    {
        StartCoroutine(TangledDrag_Coroutine(target, true));
    }

    public void TangledAttack(Transform target)
    {
        //StartCoroutine(TangledAttackDelay());
        //StartCoroutine(TangledAttack_Coroutine(target));
    }

    public void TangledMainScene(Transform target)
    {
        StartCoroutine(TangledMainScene_Coroutine(target));
    }

    IEnumerator TangledMainScene_Coroutine(Transform targetTransform)
    {
        m_bTangledReady = false;
        bool bDoneDrag = false;
        bool bReadyToEat = false;

        float fCaptureTime = 0f;
        float fCurTime = 0f;
        float fMaxReachTime = 0.1f;
        int iJointCount = 5;
        Vector3 target;
        Vector3 originTargetPos = targetTransform.position;
        Vector3 corePos = GameObject.Find("Core").transform.position;

        bool bExit = false;

        m_DragingObject = targetTransform.gameObject;

        targetTransform.GetComponent<Unit>().m_bCatched = true;

        Collider2D coreCollider = GameObject.Find("Core").GetComponent<Collider2D>();


        do
        {
            if (targetTransform == null)
            {
                m_bTangledReady = true;
                break;
            }

            fCaptureTime += Time.deltaTime;

            target = Vector3.Lerp(originTargetPos, corePos, Mathf.SmoothStep(0.0f, 1.0f, Mathf.SmoothStep(0.0f, 1.0f, fCaptureTime)));
            targetTransform.position = new Vector3(target.x, target.y);
            Vector3 m_vecP1 = new Vector3(m_fTangledPointX, m_fTangledPointY);

            if (coreCollider.OverlapPoint(target))
            {
                targetTransform.localScale = new Vector3(1.25f, 1.25f, 1f);
                bReadyToEat = true;
            }
            else if (bReadyToEat && !coreCollider.OverlapPoint(target))
            {
                targetTransform.localScale = Vector3.one;
                bReadyToEat = false;
            }

            m_listCurve.Clear();

            for (int i = 0; i < iJointCount; ++i)
            {
                m_listCurve.Add(BezierCurve(((float)i / (float)(iJointCount - 1)) * (fCurTime / fMaxReachTime), Vector3.zero, m_vecP1, target));

                if (i == iJointCount - 1)
                {
                    m_vecTangledEdge = BezierCurve(((float)i / (float)(iJointCount - 1)) * (fCurTime / fMaxReachTime), Vector3.zero, m_vecP1, target);
                }
            }

            for (int i = 0; i < iJointCount - 1; ++i)
            {
                if (i == iJointCount - 2)
                    DrawLine(m_listCurve[i], m_listCurve[i + 1], new Color(80 / 255f, 25 / 255f, 100 / 255f), i, true);
                else
                    DrawLine(m_listCurve[i], m_listCurve[i + 1], new Color(80 / 255f, 25 / 255f, 100 / 255f), i);
            }

            m_vecBeforeP1 = m_vecP1;

            if (!bDoneDrag)
            {
                if (fCurTime < fMaxReachTime)
                {
                    fCurTime += Time.deltaTime;
                }
                else
                {
                    fCurTime = fMaxReachTime;
                }
            }
            else
            {
                if (fCurTime > 0f)
                {
                    fCurTime -= Time.deltaTime;
                }
                else
                {
                    fCurTime = 0f;
                    m_bTangledReady = true;
                    targetTransform.GetComponent<Unit>().m_bCatched = false;
                    //if (targetTransform.GetComponent<FSM_MainScene_Enemy>().m_AiState == AI_STATE.PANIC)
                    //targetTransform.GetComponent<FSM_MainScene_Enemy>().m_AiState = AI_STATE.MOVE;

                    if (bReadyToEat)
                    {
                        targetTransform.localScale = Vector3.one;
                        StartCoroutine(GameObject.Find("Core").GetComponent<FSM_MainScene_Core>().Eat(targetTransform.gameObject));
                    }
                    break;
                }
            }


            if (fCaptureTime > 1f)
            {
                bDoneDrag = true;
                m_DragingObject = null;
            }

            yield return null;

        } while (true);

        for (int i = 0; i < iJointCount - 1; ++i)
        {
            if (i == iJointCount - 2)
                DrawLine(corePos, corePos, new Color(80 / 255f, 25 / 255f, 100 / 255f), i, true);
            else
                DrawLine(corePos, corePos, new Color(80 / 255f, 25 / 255f, 100 / 255f), i);
        }


    }

    //IEnumerator TangledAttack_Coroutine(Transform targetTrans)
    //{
    //    float fTime = 0f;
    //    Vector3 target;
    //    do
    //    {
    //        target = targetTrans.position;
    //        Vector3 m_vecP1 = new Vector3(m_fTangledPointX, m_fTangledPointY);

    //        m_listCurve.Clear();
    //        //			for (int i=0; i<transform.childCount; ++i) {
    //        //				Destroy(transform.GetChild(i).gameObject);
    //        //			}

    //        for (int i = 0; i < 5; ++i)
    //        {
    //            if (fTime < m_fTangledDelay / 2f)
    //                m_listCurve.Add(BezierCurve(i * (fTime / 2f), Vector3.zero, m_vecP1, target));
    //            else
    //                m_listCurve.Add(BezierCurve(i * ((m_fTangledDelay - fTime) / 2f), Vector3.zero, m_vecP1, target));

    //            if (i == 4)
    //            {
    //                if (fTime < m_fTangledDelay / 2f)
    //                    m_vecTangledEdge = BezierCurve(i * (fTime / 2f), Vector3.zero, m_vecP1, target);
    //                else
    //                    m_vecTangledEdge = BezierCurve(i * ((m_fTangledDelay - fTime) / 2f), Vector3.zero, m_vecP1, target);
    //            }
    //        }

    //        for (int i = 0; i < 4; ++i)
    //        {
    //            if (i == 3)
    //                DrawLine(m_listCurve[i], m_listCurve[i + 1], new Color(80 / 255f, 25 / 255f, 100 / 255f), i, true);
    //            else
    //                DrawLine(m_listCurve[i], m_listCurve[i + 1], new Color(80 / 255f, 25 / 255f, 100 / 255f), i);
    //        }

    //        m_vecBeforeP1 = m_vecP1;
    //        fTime += Time.deltaTime;
    //        yield return null;
    //    } while (fTime < 1f);
    //}

    IEnumerator TangledPoint()
    {
        WaitForSeconds wait = new WaitForSeconds(0.5f);
        do
        {
            iTween.ValueTo(gameObject, iTween.Hash("from", m_fTangledPointX, "to", Random.Range(-1f, 1f), "Time", 1f, "onupdate", "TweenValueX"));
            iTween.ValueTo(gameObject, iTween.Hash("from", m_fTangledPointY, "to", Random.Range(-1f, 1f), "Time", 1f, "onupdate", "TweenValueY"));

            yield return wait;
        } while (true);
    }

    void TweenValueX(float newVal)
    {
        m_fTangledPointX = newVal;
    }

    void TweenValueY(float newVal)
    {
        m_fTangledPointY = newVal;
    }

    Vector3 BezierCurve(float t, Vector3 p0, Vector3 p1)
    {
        return ((1 - t) * p0) + ((t) * p1);
    }

    Vector3 BezierCurve(float t, Vector3 p0, Vector3 p1, Vector3 p2)
    {
        Vector3 pa = BezierCurve(t, p0, p1);
        Vector3 pb = BezierCurve(t, p1, p2);
        return BezierCurve(t, pa, pb);
    }

    List<GameObject> m_ListDrawLine;
    void DrawLine(Vector3 start, Vector3 end, Color color, int iIdx, bool bEdge = false)
    {
        if (m_ListDrawLine == null)
        {
            m_ListDrawLine = new List<GameObject>();
        }

        LineRenderer lr;

        if (iIdx >= m_ListDrawLine.Count)
        {
            GameObject myLine = new GameObject();
            myLine.transform.position = start;
            myLine.AddComponent<LineRenderer>();
            myLine.transform.parent = transform;

            lr = myLine.GetComponent<LineRenderer>();
            lr.material = new Material(Shader.Find("Sprites/Default"));
            lr.SetColors(color, color);
            lr.sortingLayerName = "FrontObject";
            lr.sortingOrder = -10;

            if (bEdge)
                lr.SetWidth(0.05f, 0f);
            else
                lr.SetWidth(0.05f, 0.05f);

            m_ListDrawLine.Add(myLine);
        }

        lr = m_ListDrawLine[iIdx].GetComponent<LineRenderer>();
        lr.SetPosition(0, start);
        lr.SetPosition(1, end);
    }

}
