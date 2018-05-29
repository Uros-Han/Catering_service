using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Party : MonoBehaviour
{
    public string m_strPartyName;
    public int m_iGridIdx;
    public int m_iDestinationIdx;
    public float m_iSpeed; // 0 ~ 10
    public List<int> m_listMoveIdx;
    public List<int> m_list_enemyType;
    public int m_iHero = -1;

    public int m_iDepartureIdx;
    public GameObject m_departureLoc;

    public AI_WORLD_STATE m_state = AI_WORLD_STATE.END;
    public PARTY_TYPE m_partyType;

    public float m_fCampingTimer = 0;
    public int m_iFatigue = 0;

    protected bool m_bWasMovingBeforeChgedScene = false;

    protected bool bLoaded = false;

    protected SpriteRenderer m_sprite_partyStateIndicator;

    IEnumerator tremble;

    // Use this for initialization
    protected virtual void Start()
    {

        if (m_iDestinationIdx != 0)
            bLoaded = true;

        m_listMoveIdx = new List<int>();
        m_iGridIdx = GridMgr.getInstance.GetGridIdx(transform.position);

        if (!bLoaded)
        {
            m_iDepartureIdx = m_iGridIdx;
        }

        m_departureLoc = GameObject.Find("Geo").transform.GetChild(m_iDepartureIdx).GetComponent<WorldGeo>().m_worldIcon;

        if (!bLoaded)
            SetEnemyList();

        m_sprite_partyStateIndicator = transform.Find("PartyStateIndicator").GetComponent<SpriteRenderer>();

        if (TimeMgr.getInstance.m_timeState.Equals(TIME_STATE.PLAY))
        {
            //Idling();
            MoveOrder();
        }

    }

    protected virtual void SetEnemyList()
    {
        m_list_enemyType = new List<int>();

        if (m_iHero != -1)
        {
            m_list_enemyType.Add((int)ENEMY_TYPE.HERO);

            switch (m_iHero)
            {
                case (int)HERO.WALLACE:
                    m_list_enemyType.Add((int)ENEMY_TYPE.CIVILIAN);
                    m_list_enemyType.Add((int)ENEMY_TYPE.CIVILIAN);
                    m_list_enemyType.Add((int)ENEMY_TYPE.CIVILIAN);
                    m_list_enemyType.Add((int)ENEMY_TYPE.CIVILIAN);
                    m_list_enemyType.Add((int)ENEMY_TYPE.CIVILIAN);
                    break;


                case (int)HERO.ROBIN:
                    m_list_enemyType.Add((int)ENEMY_TYPE.CIVILIAN);
                    m_list_enemyType.Add((int)ENEMY_TYPE.CIVILIAN);
                    m_list_enemyType.Add((int)ENEMY_TYPE.CIVILIAN);
                    m_list_enemyType.Add((int)ENEMY_TYPE.CIVILIAN);
                    m_list_enemyType.Add((int)ENEMY_TYPE.CIVILIAN);
                    break;

                case (int)HERO.ADAM:
                    m_list_enemyType.Add((int)ENEMY_TYPE.CIVILIAN);
                    m_list_enemyType.Add((int)ENEMY_TYPE.CIVILIAN);
                    m_list_enemyType.Add((int)ENEMY_TYPE.CIVILIAN);
                    m_list_enemyType.Add((int)ENEMY_TYPE.CIVILIAN);
                    m_list_enemyType.Add((int)ENEMY_TYPE.CIVILIAN);
                    break;

                case (int)HERO.HANK:
                    m_list_enemyType.Add((int)ENEMY_TYPE.CIVILIAN);
                    m_list_enemyType.Add((int)ENEMY_TYPE.CIVILIAN);
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    break;

                case (int)HERO.GAWEN:
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    break;

                case (int)HERO.OWIN:
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    break;

                case (int)HERO.GALE:
                    m_list_enemyType.Add((int)ENEMY_TYPE.CIVILIAN);
                    m_list_enemyType.Add((int)ENEMY_TYPE.CIVILIAN);
                    m_list_enemyType.Add((int)ENEMY_TYPE.CIVILIAN);
                    m_list_enemyType.Add((int)ENEMY_TYPE.CIVILIAN);
                    m_list_enemyType.Add((int)ENEMY_TYPE.CIVILIAN);
                    m_list_enemyType.Add((int)ENEMY_TYPE.CIVILIAN);
                    m_list_enemyType.Add((int)ENEMY_TYPE.CIVILIAN);
                    m_list_enemyType.Add((int)ENEMY_TYPE.CIVILIAN);
                    m_list_enemyType.Add((int)ENEMY_TYPE.CIVILIAN);
                    break;

                case (int)HERO.RICHARD:
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    break;

                case (int)HERO.ROLF:
                    m_list_enemyType.Add((int)ENEMY_TYPE.CIVILIAN);
                    m_list_enemyType.Add((int)ENEMY_TYPE.CIVILIAN);
                    m_list_enemyType.Add((int)ENEMY_TYPE.CIVILIAN);
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    break;

                case (int)HERO.OTIS:
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    break;

                case (int)HERO.REYNARD:
                    m_list_enemyType.Add((int)ENEMY_TYPE.KNIGHT);
                    m_list_enemyType.Add((int)ENEMY_TYPE.KNIGHT);
                    m_list_enemyType.Add((int)ENEMY_TYPE.KNIGHT);
                    m_list_enemyType.Add((int)ENEMY_TYPE.KNIGHT);
                    m_list_enemyType.Add((int)ENEMY_TYPE.KNIGHT);
                    m_list_enemyType.Add((int)ENEMY_TYPE.KNIGHT);
                    break;

                case (int)HERO.DUMP:
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    m_list_enemyType.Add((int)ENEMY_TYPE.MERCENARY);
                    break;
            }
        }
        else
        {
            m_list_enemyType = WorldGenerator.getInstance.DeployEnemyList(m_departureLoc.GetComponent<WorldIcon>().m_fPopulation / 2f, (WORLDICON_TYPE)m_departureLoc.GetComponent<WorldIcon>().m_iconType);
        }
    }

    bool m_bHalt;
    protected void MoveOrder()
    {
        if (m_partyType == PARTY_TYPE.GARRISON)
            return;

        SetDestination();

        m_bHalt = false;
        if (moveCoroutine == null)
            moveCoroutine = Move();

        StartCoroutine(Move());
    }

    IEnumerator Tremble()
    {
        yield return new WaitForSeconds(Random.Range(0.1f, 0.4f));
        bool bOnGround = true;

        float fJumpPower = 0.25f;
        float fJumpResistance = 0.04f;
        float fCurJumpSpeed = 0f;

        float fOriginYPos = transform.position.y;

        do
        {
            if (bOnGround)
            {
                bOnGround = false;
                fCurJumpSpeed = fJumpPower;
            }

            transform.Translate(new Vector3(0, 1) * fCurJumpSpeed * Time.deltaTime);

            fCurJumpSpeed -= fJumpResistance;

            if (fCurJumpSpeed < -fJumpPower)
            {
                bOnGround = true;
            }

            yield return null;

        } while (m_state == AI_WORLD_STATE.MOVE);
    }

    IEnumerator moveCoroutine;
    protected IEnumerator Move()
    {

        GridMgr grid = GridMgr.getInstance;

        Transform geoTrans = GameObject.Find("Geo").transform;
        float fSpeedMultiplier = 0.06f;
        float fSpeed = 0.15f + m_iSpeed * 0.015f;
        float fSpeedAdjuster = 0f;

        Core_World core_World = GameObject.Find("Core").GetComponent<Core_World>();

        while (m_listMoveIdx.Count != 0 && !m_bHalt)
        {
            while (m_fCampingTimer > 0f && !m_bHalt)
            {
                m_fCampingTimer -= Time.deltaTime;
                yield return null;
            }

            if (m_state == AI_WORLD_STATE.CAMP && !m_bHalt)
            {
                m_fCampingTimer = 0f;
                m_state = AI_WORLD_STATE.MOVE;
                m_sprite_partyStateIndicator.sprite = ObjectFactory.getInstance.m_sheet_PartyStateIndicator[(int)m_state];
                SetDestination();
            }

            Vector3 destPos = grid.GetPosOfIdx(m_listMoveIdx[0]);
            bool bAttackCore = false;

            while (Vector3.Distance(destPos, transform.position) > 0.01f && !m_bHalt)
            {
                m_iGridIdx = grid.GetGridIdx(transform.position);

                fSpeedAdjuster = 0f;
                WorldGeo geo = geoTrans.GetChild(m_iGridIdx).GetComponent<WorldGeo>();
                if (geo.m_geoStatus.Equals(WORLD_GEO.FOREST))
                    fSpeedAdjuster -= fSpeedMultiplier;

                if (isOnPath())
                {
                    fSpeedAdjuster += fSpeedMultiplier;
                }

                if (m_partyType.Equals(PARTY_TYPE.RAID))
                {
                    bool bFollowCoreTrigger = false;
                    if (!bFollowCoreTrigger && m_iGridIdx == core_World.m_iGridIdx)
                    {
                        bFollowCoreTrigger = true;
                        bAttackCore = true;
                        destPos = core_World.transform.position;
                    }
                    else if (bFollowCoreTrigger && m_iGridIdx != core_World.m_iGridIdx)
                    {
                        bFollowCoreTrigger = false;
                        bAttackCore = false;
                        SetDestination();

                        destPos = grid.GetPosOfIdx(m_listMoveIdx[0]);
                    }
                }

                transform.Translate(Vector3.Normalize(destPos - transform.position) * (fSpeed + fSpeedAdjuster) * Time.deltaTime);
                yield return null;
            }

            if (m_bHalt)
                break;

            transform.position = destPos;

            if (!bAttackCore)
                m_iFatigue -= 1;

            if (bAttackCore)
            {
                core_World.CheckEnmeyInThisArea(true);
                core_World.EncountEnemy();
            }

            DrawPath();

            if (m_iFatigue <= 0)
            {
                Camping();
            }

            m_listMoveIdx.RemoveAt(0);

            //Reach Destination
            if (m_partyType == PARTY_TYPE.CARAVAN)
            {
                if (m_listMoveIdx.Count == 0)
                    ThinkWhatAreDoingNext();
            }

            SetDestination();
        }
    }

    public void Halt()
    {
        m_bHalt = true;
        //if (moveCoroutine != null)
        //StopCoroutine(moveCoroutine);
        //m_listMoveIdx.Clear();
    }

    //protected void Idling()
    //{
    //    if (m_partyType == PARTY_TYPE.GARRISON)
    //        return;

    //    if (m_fCampingTimer > 0)
    //        m_fCampingTimer -= Time.deltaTime;

    //    if (m_fCampingTimer <= 0f)
    //    {
    //        SetDestination();

    //        m_fCampingTimer = 0f;
    //    }
    //}

    protected void Camping()
    {
        m_fCampingTimer = Random.Range(5f, 10f);
        m_iFatigue = Random.Range(4, 8);

        m_state = AI_WORLD_STATE.CAMP;
        m_sprite_partyStateIndicator.sprite = ObjectFactory.getInstance.m_sheet_PartyStateIndicator[(int)m_state];
    }

    protected virtual void ThinkWhatAreDoingNext()
    {
        //Move
        SetDestination();
        m_state = AI_WORLD_STATE.MOVE;
        m_sprite_partyStateIndicator.sprite = ObjectFactory.getInstance.m_sheet_PartyStateIndicator[(int)m_state];
    }

    protected virtual void SetDestination()
    {
        if (m_fCampingTimer == 0f)
        {
            m_state = AI_WORLD_STATE.MOVE;
            m_sprite_partyStateIndicator.sprite = ObjectFactory.getInstance.m_sheet_PartyStateIndicator[(int)m_state];
        }
        DrawPath();
    }

    bool isOnPath()
    {
        RaycastHit2D[] hit = Physics2D.RaycastAll(transform.position + new Vector3(0, 0, 1f), Vector3.forward); //edit in your raycast settings
        for (int i = 0; i < hit.Length; ++i)
        {
            if (hit[i] && hit[i].transform.gameObject.name.Equals("Road(Clone)"))
            {
                return true;
            }
        }

        return false;
    }

    GameObject path;
    void DrawPath()
    {
        if (GameObject.Find("DeveloperTools") == null)
            return;

        GridMgr grid = GridMgr.getInstance;

        Destroy(path);

        int count = m_listMoveIdx.Count;
        DeveloperTool devTool = GameObject.Find("DeveloperTools").GetComponent<DeveloperTool>();

        if (!devTool.m_bFogDisabled)
            count = 1;
        else
        {
            path = new GameObject();
            path.transform.parent = GameObject.Find("PartyPath").transform;
        }

        int iCurPath = 0;
        if (!devTool.m_bFogDisabled)
        {
            for (int i = 0; i < m_listMoveIdx.Count; ++i)
            {
                if (m_listMoveIdx[i] == m_iGridIdx)
                {
                    iCurPath = i + 1;
                    break;
                }
            }
        }

        if (m_iDestinationIdx == m_iGridIdx)
            return;

        for (int i = 0; i < count; ++i)
        {
            GameObject myLine = new GameObject();
            if (!devTool.m_bFogDisabled)
                path = myLine;

            if (devTool.m_bFogDisabled)
                iCurPath = i;

            myLine.transform.position = grid.GetPosOfIdx(m_listMoveIdx[iCurPath]);
            myLine.AddComponent<LineRenderer>();
            LineRenderer lr = myLine.GetComponent<LineRenderer>();
            lr.material = new Material(Shader.Find("Sprites/Default"));
            lr.SetColors(new Color(255 / 255f, 0 / 255f, 0 / 255f), new Color(255 / 255f, 0 / 255f, 0 / 255f));
            lr.SetWidth(0.05f, 0.05f);
            if (i == 0)
            {
                lr.SetPosition(0, transform.position);
                lr.SetPosition(1, grid.GetPosOfIdx(m_listMoveIdx[iCurPath]));
            }
            else
            {
                lr.SetPosition(0, grid.GetPosOfIdx(m_listMoveIdx[iCurPath - 1]));
                lr.SetPosition(1, grid.GetPosOfIdx(m_listMoveIdx[iCurPath]));
            }
            lr.sortingLayerName = "Default";
            lr.sortingOrder = -1;

            if (!devTool.m_bFogDisabled)
                lr.transform.parent = GameObject.Find("PartyPath").transform;
            else
                lr.transform.parent = path.transform;
        }
    }

    public void DestroyThis()
    {
        Destroy(path);
        Destroy(gameObject);
    }
}
