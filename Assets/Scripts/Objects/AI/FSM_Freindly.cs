using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FSM_Freindly : FSM
{
    bool m_bDontAttack = false;

    // Use this for initialization
    void OnEnable()
    {
        SetState(AI_STATE.IDLE);

        if (BattleSceneMgr.getInstance.m_curBattleWorldIcon.m_iconType.Equals((int)WORLDICON_TYPE.ALTAR) || BattleSceneMgr.getInstance.m_curBattleWorldIcon.m_iconType.Equals((int)WORLDICON_TYPE.CLINIC))
        {
            m_bDontAttack = true;
        }
    }

    public void HitEffect()
    {
        StartCoroutine(base.HitEffect(GetComponent<SpriteRenderer>()));
    }

    protected override IEnumerator State_Idle()
    {
        Transform EnemyTrans = GameObject.Find("Enemies").transform;
        bool bAttackAble = GetComponent<Part>().m_bAttackAvailable;

        if (m_bDontAttack)
            bAttackAble = false;

        float fRange = 0f;
        if (bAttackAble)
        {
            StartCoroutine(AnimatorPosSet(GetComponent<Part>().m_weaponType));

            Part attackPart = GetComponent<Part>();
            fRange = (float)attackPart.m_dicStat["Range"];
            for (int i = 0; i < attackPart.m_lstPartBuffed.Count; ++i)
            {
                fRange += attackPart.m_lstPartBuffed[i].m_dicStatBuff["Range"];
            }
            fRange /= 100f;
        }

        bool bSiege = false;
        Wall wall = null;
        if (BattleSceneMgr.getInstance.m_bSiege)
        {
            bSiege = true;
            wall = GameObject.Find("Wall").GetComponent<Wall>();
        }

        do
        {
            yield return null;

            if (bAttackAble)
            {
                if (bSiege && wall.m_fCurHealth > 0f)
                {
                    m_target = wall.gameObject;
                    m_AiState = AI_STATE.ATTACK;
                }
                else
                {
                    for (int i = 0; i < EnemyTrans.childCount; ++i)
                    {
                        if (Vector3.Distance(EnemyTrans.GetChild(i).transform.position, transform.position) < fRange && EnemyTrans.GetChild(i).gameObject.activeInHierarchy && EnemyTrans.GetChild(i).gameObject.GetComponent<Unit>().m_fCurHealth > 0)
                        {
                            m_target = EnemyTrans.GetChild(i).gameObject;
                            m_AiState = AI_STATE.ATTACK;
                        }
                    }
                }
            }

        } while (m_AiState == AI_STATE.IDLE);

        SetState(m_AiState);
    }

    public void Weapon_Attack(Part attackPart)
    {
        float fDamage = attackPart.m_dicStat["Attack"];

        StartCoroutine(Attack(m_target, fDamage, true, false, !bAttackUnit));
    }

    bool bAttackUnit = false;
    protected override IEnumerator State_Attack()
    {
        if (BattleSceneMgr.getInstance.m_turnState.Equals(TURN_STATE.NIGHT) || m_bDontAttack)
        {
            m_AiState = AI_STATE.IDLE;
            m_target = null;
        }

        Unit targetUnit = null;
        Wall targetWall = null;

        if (m_target != null)
        {
            if (m_target.GetComponent<Unit>() != null)
            {
                bAttackUnit = true;
                targetUnit = m_target.GetComponent<Unit>();
            }
            else
            {
                bAttackUnit = false;
                targetWall = m_target.GetComponent<Wall>();
            }

            Part attackPart = GetComponent<Part>();


            float fDmg = attackPart.m_dicStat["Attack"];
            for (int i = 0; i < attackPart.m_lstPartBuffed.Count; ++i)
            {
                fDmg += attackPart.m_lstPartBuffed[i].m_dicStatBuff["Attack"];
            }

            float fAttackSpeed = attackPart.m_dicStat["AttackSpeed"];
            for (int i = 0; i < attackPart.m_lstPartBuffed.Count; ++i)
            {
                fAttackSpeed += attackPart.m_lstPartBuffed[i].m_dicStatBuff["AttackSpeed"];
            }

            fAttackSpeed /= 10f;

            Animator anim = transform.GetChild(0).GetChild(0).GetComponent<Animator>();
            anim.SetFloat("AttackSpeed", fAttackSpeed);

            float fRange = (float)attackPart.m_dicStat["Range"];
            for (int i = 0; i < attackPart.m_lstPartBuffed.Count; ++i)
            {
                fRange += attackPart.m_lstPartBuffed[i].m_dicStatBuff["Range"];
            }
            fRange /= 100f;

            while (m_AiState == AI_STATE.ATTACK)
            {
                anim.SetBool("Hit", false);
                anim.SetBool("Ready_Weapon", true);
                anim.SetBool("Cancel_Attack", false);

                float fTimer = 0f;

                do
                {
                    fTimer += Time.deltaTime * fAttackSpeed * 0.1f;
                    if (m_AiState != AI_STATE.ATTACK || (bAttackUnit && targetUnit.m_bEaten) || (bAttackUnit && targetUnit.m_fCurHealth <= 0f) || (!bAttackUnit && targetWall.m_fCurHealth <= 0f) || m_target == null || !m_target.activeInHierarchy || (bAttackUnit && Vector3.Distance(m_target.transform.position, transform.position) > fRange))
                    {
                        m_AiState = AI_STATE.IDLE;
                        m_target = null;
                        anim.SetBool("Cancel_Attack", true);
                        break;
                    }
                    yield return null;

                } while (fTimer < 1f);

                if (anim.GetBool("Cancel_Attack"))
                {
                    anim.SetBool("Hit", false);
                    anim.SetBool("Ready_Weapon", false);
                    break;
                }

                anim.SetBool("Hit", true);
                yield return null;
            };

            anim.SetBool("Ready_Weapon", false);
        }

        SetState(m_AiState);
    }

    //FSM_MainScene_Core 에도 있음
    IEnumerator AnimatorPosSet(WEAPON_TYPE weaponType)
    {
        yield return null;

        //		transform.GetChild (0).localPosition = -transform.GetChild (0).GetChild (0).localPosition;

        switch (weaponType)
        {
            case WEAPON_TYPE.ONE_HAND:
                transform.GetChild(0).localPosition = new Vector3(0.128f, -0.085f);
                break;

            case WEAPON_TYPE.TWO_HAND:
                transform.GetChild(0).localPosition = new Vector3(0.128f, -0.072f);
                break;

            case WEAPON_TYPE.POLE:
                transform.GetChild(0).localPosition = new Vector3(0.128f, -0.072f);
                break;

            case WEAPON_TYPE.BOW:
                transform.GetChild(0).localPosition = new Vector3(0.128f, -0.088f);
                break;

            case WEAPON_TYPE.CROSSBOW:
                transform.GetChild(0).localPosition = new Vector3(0.128f, -0.088f);
                break;

            case WEAPON_TYPE.JAVELIN:
                transform.GetChild(0).localPosition = new Vector3(0.128f, -0.152f);
                break;

            default:
                Debug.LogError("Unknown weapon");
                break;

        }
    }
}
