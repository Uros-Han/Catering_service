using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FSM_MainScene_Core : FSM
{

    // Use this for initialization
    void Start()
    {
        SetState(AI_STATE.IDLE);
        iTween.MoveTo(gameObject, iTween.Hash("x", 0.01f, "time", 1f));
    }

    public void SetState(AI_STATE state)
    {
        m_AiState = state;

        if (m_CurStateCoroutine != null)
            StopCoroutine(m_CurStateCoroutine);

        switch (state)
        {
            case AI_STATE.IDLE:
                m_CurStateCoroutine = State_Idle();
                break;

            case AI_STATE.ATTACK:
                m_CurStateCoroutine = State_Attack();
                break;
        }

        StartCoroutine(m_CurStateCoroutine);
    }

    protected override IEnumerator State_Idle()
    {
        Transform EnemyTrans = GameObject.Find("Enemies").transform;
        do
        {

            for (int i = 0; i < EnemyTrans.childCount; ++i)
            {
                if (Vector3.Distance(EnemyTrans.GetChild(i).transform.position, transform.position) < 0.5f && EnemyTrans.GetChild(i).gameObject.activeInHierarchy)
                {
                    m_target = EnemyTrans.GetChild(i).gameObject;
                    m_AiState = AI_STATE.ATTACK;
                }
            }

            yield return null;

        } while (m_AiState == AI_STATE.MOVE);

        SetState(m_AiState);
    }

    protected override IEnumerator State_Attack()
    {
        do
        {

            GameObject.Find("Tangled").GetComponent<Tangled>().TangledMainScene(m_target.transform);

            for (int i = 0; i < m_target.transform.childCount; ++i)
            {
                m_target.transform.GetChild(i).GetComponent<SpriteRenderer>().sortingLayerName = "FrontObject";
            }

            yield return new WaitForSeconds(1.5f);

            m_AiState = m_AiState = AI_STATE.IDLE;
            m_target = null;

        } while (m_AiState == AI_STATE.ATTACK);

        SetState(m_AiState);
    }

    public IEnumerator Eat(GameObject objTarget)
    {
        int iCount = objTarget.transform.childCount;

        objTarget.transform.parent = GameObject.Find("Mouth").transform;

        for (int i = 0; i < iCount; ++i)
        {
            objTarget.transform.GetChild(i).GetComponent<SpriteRenderer>().enabled = false;
        }


        Transform PlayerTrans = GameObject.Find("Player").transform;
        for (int i = 0; i < iCount; ++i)
        {

            GameObject targetObj = objTarget.transform.GetChild(0).gameObject;
            Part targetPart = targetObj.GetComponent<Part>();

            if (targetObj.name.Equals("Hand_L"))
            {
                Destroy(targetObj.gameObject);
                targetObj.transform.parent = GameObject.Find("Tangled").transform;
                continue;
            }
            else if (targetPart.m_partType != PART_TYPE.BODY && Random.Range(0.0f, 1.0f) < 0.4f)
            {
                Destroy(targetObj.gameObject);
                targetObj.transform.parent = GameObject.Find("Tangled").transform;
                continue;
            }

            CalculateStickableSeat();

            if (m_StickAvailableSeat.Count == 0)
            { // no more room
                int PlayerChildCount = PlayerTrans.childCount;
                MainManager mainMgr = GameObject.Find("MainManager").GetComponent<MainManager>();
                for (int j = 1; j < PlayerChildCount; ++j)
                {
                    mainMgr.BlowPart(PlayerTrans.GetChild(j).gameObject);
                }
                PlayerTrans.GetChild(0).GetComponent<SpriteRenderer>().sprite = PlayerTrans.GetChild(0).GetComponent<SpriteSheet>().m_sheet_sprite[0];

                break;
            }

            int iSeatIdx = m_StickAvailableSeat[Random.Range(0, m_StickAvailableSeat.Count)];
            targetObj.transform.position = GridMgr.getInstance.GetPosOfIdx(iSeatIdx);
            targetObj.GetComponent<SpriteRenderer>().enabled = true;
            targetObj.GetComponent<SpriteRenderer>().sortingLayerName = "Objects";

            if (targetObj.GetComponent<DPPaletteCombiner>() != null)
            {
                targetObj.GetComponent<DPPaletteCombiner>().SetPalette1Index(1);
            }
            else
                targetObj.GetComponent<DPSpritePalette>().PaletteIndex = 1;

            if (targetPart.m_bAttackAvailable)
            {
                ObjectFactory.getInstance.Create_PartAnimator(targetObj.transform);
                targetObj.GetComponent<SpriteRenderer>().enabled = false;
                targetObj.GetComponent<Animator>().enabled = false;
                targetObj.transform.GetChild(0).GetChild(0).GetComponent<SpriteRenderer>().enabled = true;
                targetObj.transform.GetChild(0).GetChild(0).GetComponent<Animator>().enabled = true;
                targetObj.transform.GetChild(0).GetChild(0).GetComponent<DPSpritePalette>().PaletteIndex = 1;
                AnimatorPosSet(targetObj, targetPart.m_weaponType);
            }

            targetPart.m_iGridIdx = iSeatIdx;
            targetPart.m_headingDirection = PartRotate(targetObj, iSeatIdx);
            StartCoroutine(PartScale(targetObj));

            targetObj.transform.parent = PlayerTrans;
            targetObj.GetComponent<SpriteSheet>().CheckAround(false);


            yield return new WaitForSeconds(0.25f);
        }

        Destroy(objTarget);


        yield return null;
    }

    IEnumerator PartScale(GameObject targetObj)
    {
        Vector3 originScale = targetObj.transform.localScale;
        targetObj.transform.localScale = new Vector3(0, 0, 1);
        iTween.ScaleTo(targetObj, iTween.Hash("x", originScale.x, "y", originScale.y, "time", 0.3f, "isLocal", true, "easeType", "easeInElastic"));
        yield return new WaitForSeconds(0.2f);
    }

    public DIRECTION PartRotate(GameObject targetObj, int iSeatIdx)
    {

        //붙는방향으로 파츠 회전하도록
        Transform PlayerTrans = GameObject.Find("Player").transform;
        GameObject ClosestPart = null;
        GridMgr grid = GridMgr.getInstance;

        Part part = targetObj.GetComponent<Part>();
        Vector3 partPos = targetObj.transform.position;

        DIRECTION m_headingDirection = DIRECTION.EVERYWHERE;

        if (part.m_partType.Equals(PART_TYPE.BODY))
        {
            targetObj.transform.localRotation = Quaternion.AngleAxis(0, Vector3.forward);
            targetObj.transform.localScale = Vector3.one;
            return DIRECTION.EVERYWHERE;
        }
        else if (part.m_partType.Equals(PART_TYPE.HEAD))
        {
            part.m_bNeedToStickHead = true;
        }

        for (int j = 0; j < PlayerTrans.childCount; ++j)
        {
            GameObject target;
            target = PlayerTrans.GetChild(j).gameObject;

            if (target.GetComponent<Part>().m_bBreakedPath)
                continue;

            if (ClosestPart == null)
                ClosestPart = target;

            if (!target.GetComponent<Part>().m_bEdgePart && Vector3.Distance(partPos, ClosestPart.transform.position) > Vector3.Distance(partPos, target.transform.position))
            {
                ClosestPart = target;
            }
        }

        int iIdx = iSeatIdx;
        int iTargetIdx = grid.GetGridIdx(ClosestPart.transform.position);

        if (iIdx + 1 == iTargetIdx)
        {
            m_headingDirection = DIRECTION.LEFT;
            if (part.m_bEdgePart && targetObj.name != "Head" || part.m_bReverseBody)
            {
                if (part.m_partType.Equals(PART_TYPE.ARM))
                {
                    targetObj.transform.localScale = new Vector3(1, targetObj.transform.localScale.y);
                }
                iTween.RotateTo(targetObj, iTween.Hash("z", 270f + part.m_fHandRotater, "time", 0.2f));
            }
            else
            {
                if (part.m_bNeedToStickHead)
                    targetObj.transform.position = new Vector3(targetObj.transform.position.x + 0.04f, targetObj.transform.position.y);
                iTween.RotateTo(targetObj, iTween.Hash("z", 90f, "time", 0.2f));
            }
        }
        else if (iIdx - 1 == iTargetIdx)
        {
            m_headingDirection = DIRECTION.RIGHT;
            if (part.m_bEdgePart && targetObj.name != "Head" || part.m_bReverseBody)
            {
                if (part.m_partType.Equals(PART_TYPE.ARM))
                {
                    targetObj.transform.localScale = new Vector3(-1, targetObj.transform.localScale.y);
                    iTween.RotateTo(targetObj, iTween.Hash("z", -90f + part.m_fHandRotater, "time", 0.2f));
                }
                else
                    iTween.RotateTo(targetObj, iTween.Hash("z", 90f + part.m_fHandRotater, "time", 0.2f));
            }
            else
            {
                if (part.m_bNeedToStickHead)
                    targetObj.transform.position = new Vector3(targetObj.transform.position.x - 0.04f, targetObj.transform.position.y);
                iTween.RotateTo(targetObj, iTween.Hash("z", 270f, "time", 0.2f));
            }
        }
        else if (iIdx - grid.m_iXcount == iTargetIdx)
        {
            m_headingDirection = DIRECTION.DOWN;
            if (part.m_bEdgePart && targetObj.name != "Head" || part.m_bReverseBody)
            {
                if (part.m_partType.Equals(PART_TYPE.ARM))
                {
                    targetObj.transform.localScale = new Vector3(1, targetObj.transform.localScale.y);
                }
                iTween.RotateTo(targetObj, iTween.Hash("z", 0f + part.m_fHandRotater, "time", 0.2f));
            }
            else
            {
                if (part.m_bNeedToStickHead)
                    targetObj.transform.position = new Vector3(targetObj.transform.position.x, targetObj.transform.position.y + 0.04f);
                iTween.RotateTo(targetObj, iTween.Hash("z", 180f, "time", 0.2f));
            }
        }
        else if (iIdx + grid.m_iXcount == iTargetIdx)
        {
            m_headingDirection = DIRECTION.UP;
            if (part.m_bEdgePart && targetObj.name != "Head" || part.m_bReverseBody)
            {
                if (part.m_partType.Equals(PART_TYPE.ARM))
                {
                    targetObj.transform.localScale = new Vector3(1, targetObj.transform.localScale.y);
                }
                iTween.RotateTo(targetObj, iTween.Hash("z", 180f + part.m_fHandRotater, "time", 0.2f));
            }
            else
            {
                if (part.m_bNeedToStickHead)
                    targetObj.transform.position = new Vector3(targetObj.transform.position.x, targetObj.transform.position.y - 0.04f);
                iTween.RotateTo(targetObj, iTween.Hash("z", 0f, "time", 0.2f));
            }
        }
        else
        {
            Debug.Log("Error");
        }

        return m_headingDirection;
    }

    public List<int> m_StickAvailableSeat;
    void CalculateStickableSeat()
    {
        m_StickAvailableSeat.Clear();
        List<int> TakenSeat = new List<int>();

        int iPartGrid = 0;
        bool bEdgePart = false;
        GridMgr grid = GridMgr.getInstance;
        TakenSeat.Add(grid.GetGridIdx(transform.position));

        for (int i = 0; i < transform.parent.childCount; ++i)
        {
            bEdgePart = false;

            iPartGrid = grid.GetGridIdx(transform.parent.GetChild(i).position);
            if (i != 0)
                bEdgePart = transform.parent.GetChild(i).GetComponent<Part>().m_bEdgePart;
            else
                bEdgePart = false;

            TakenSeat.Add(iPartGrid);

            ///check A* CoreSide

            int iStart = iPartGrid;
            int iEnd = grid.GetGridIdx(transform.position);

            if (AStar.getInstance.AStarStart_CoreFind(iStart, iEnd) && !bEdgePart)
            { //코어 쪽 붙은애들에만 붙을수있음
                if (!m_StickAvailableSeat.Contains(iPartGrid - 1) && SeatBoundaryCheck(iPartGrid - 1))
                    m_StickAvailableSeat.Add(iPartGrid - 1);
                if (!m_StickAvailableSeat.Contains(iPartGrid + 1) && SeatBoundaryCheck(iPartGrid + 1))
                    m_StickAvailableSeat.Add(iPartGrid + 1);
                if (!m_StickAvailableSeat.Contains(iPartGrid - grid.m_iXcount) && SeatBoundaryCheck(iPartGrid - grid.m_iXcount))
                    m_StickAvailableSeat.Add(iPartGrid - grid.m_iXcount);
                if (!m_StickAvailableSeat.Contains(iPartGrid + grid.m_iXcount) && SeatBoundaryCheck(iPartGrid + grid.m_iXcount))
                    m_StickAvailableSeat.Add(iPartGrid + grid.m_iXcount);
            }

            for (int j = 0; j < TakenSeat.Count; ++j)
            {
                m_StickAvailableSeat.Remove(TakenSeat[j]);
            }

        }

    }

    bool SeatBoundaryCheck(int iIdx)
    {
        GridMgr grid = GridMgr.getInstance;
        int iX = iIdx % grid.m_iXcount;
        int iY = iIdx / grid.m_iXcount;

        int iCenterX = grid.m_iXcount / 2;
        int iCenterY = grid.m_iYcount / 2;

        if (iX < iCenterX - 4 || iX > iCenterX + 4)
            return false;
        else if (iY < iCenterY - 1 || iY > iCenterY + 1)
            return false;
        else
            return true;
    }

    void AnimatorPosSet(GameObject target, WEAPON_TYPE weaponType)
    {

        target.transform.GetChild(0).localRotation = Quaternion.AngleAxis(0, Vector3.forward);

        //		transform.GetChild (0).localPosition = -transform.GetChild (0).GetChild (0).localPosition;

        switch (weaponType)
        {
            case WEAPON_TYPE.ONE_HAND:
                target.transform.GetChild(0).localPosition = new Vector3(0.128f, -0.085f);
                break;

            case WEAPON_TYPE.TWO_HAND:
                target.transform.GetChild(0).localPosition = new Vector3(0.128f, -0.072f);
                break;

            case WEAPON_TYPE.POLE:
                target.transform.GetChild(0).localPosition = new Vector3(0.128f, -0.072f);
                break;

            case WEAPON_TYPE.BOW:
                target.transform.GetChild(0).localPosition = new Vector3(0.128f, -0.088f);
                break;

            case WEAPON_TYPE.CROSSBOW:
                target.transform.GetChild(0).localPosition = -transform.GetChild(0).GetChild(0).localPosition;
                break;

        }
    }
}
