using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FSM : MonoBehaviour
{

    public AI_STATE m_AiState;
    public GameObject m_target;
    protected IEnumerator m_CurStateCoroutine;

    public void SetState(AI_STATE state)
    {
        if (m_CurStateCoroutine != null)
            StopCoroutine(m_CurStateCoroutine);

        m_AiState = state;

        switch (state)
        {
            case AI_STATE.IDLE:
                m_CurStateCoroutine = State_Idle();
                break;

            case AI_STATE.MOVE:
                m_CurStateCoroutine = State_Move();
                break;

            case AI_STATE.ATTACK:
                m_CurStateCoroutine = State_Attack();
                break;

            case AI_STATE.DISABLED:
                m_CurStateCoroutine = State_Disabled();
                break;
        }

        StartCoroutine(m_CurStateCoroutine);
    }

    protected IEnumerator HitEffect(SpriteRenderer targetSprite)
    {
        float fcurTime = 0f;
        float fTime = 0.3f;

        Color HitColor = new Color(183 / 255f, 40 / 255f, 72 / 255f);

        do
        {
            targetSprite.color = Color.Lerp(HitColor, Color.white, fcurTime * (1 / fTime));
            fcurTime += Time.deltaTime;

            yield return null;
        } while (fcurTime < 1f);
    }

    protected virtual IEnumerator State_Idle()
    {
        do
        {
            yield return null;

        } while (m_AiState == AI_STATE.IDLE);

        SetState(m_AiState);
    }

    protected virtual IEnumerator State_Move()
    {
        do
        {
            yield return null;

        } while (m_AiState == AI_STATE.MOVE);

        SetState(m_AiState);
    }

    protected virtual IEnumerator State_Attack()
    {
        do
        {
            yield return null;

        } while (m_AiState == AI_STATE.ATTACK);

        SetState(m_AiState);
    }

    float fDefenseFactor = 0.06f;
    protected IEnumerator Attack(GameObject target, float fDamage, bool bEnemy, bool bWall = false)
    {
        if (target == null)
            yield break;
        if (bWall)
        {
            Wall wall = target.GetComponent<Wall>();
            fDamage = fDamage + (Random.Range(-2, 3));
            float fBlockDmg = (fDamage * ((wall.m_fDefense * fDefenseFactor) / (1 + fDefenseFactor * wall.m_fDefense)));
            float fDealedDmg = fDamage - fBlockDmg;

            wall.HitEffect();

            wall.m_fCurHealth -= fDealedDmg;

            ObjectFactory.getInstance.Create_DamageUI(target, fDamage, true, fBlockDmg);
            SoundMgr.getInstance.PlaySfx("impact_blade");

            if (wall.m_fCurHealth <= 0)
            {
                wall.m_fCurHealth = 0;
                wall.Destroied();
            }
        }
        else if (bEnemy)
        { /// Attack Enemy
			Unit targetUnit = target.GetComponent<Unit>();
            fDamage = fDamage + (Random.Range(-2, 3));
            float fBlockDmg = (fDamage * ((targetUnit.m_fDefense * fDefenseFactor) / (1 + fDefenseFactor * targetUnit.m_fDefense)));
            float fDealedDmg = fDamage - fBlockDmg;

            target.GetComponent<FSM_Enemy>().HitEffect();

            if (targetUnit.m_enemyType.Equals(ENEMY_TYPE.HERO))
            {
                if (targetUnit.m_fCurMorale > 0f)
                {
                    targetUnit.m_fCurHealth -= fDealedDmg * 0.25f;
                    targetUnit.m_fCurMorale -= fDealedDmg * 0.75f;
                }
                else
                {
                    targetUnit.m_fCurHealth -= fDealedDmg;
                }
            }
            else
                targetUnit.m_fCurHealth -= fDealedDmg;
            ObjectFactory.getInstance.Create_DamageUI(target, fDamage, true, fBlockDmg);
            SoundMgr.getInstance.PlaySfx("impact_blade");
            SoundMgr.getInstance.PlaySfx("human_scream");

            for (int i = 0; i < target.transform.childCount; ++i)
            {
                target.transform.GetChild(i).GetComponent<Part>().AdjustEmissionRate();
            }

            if (target.GetComponent<Unit>().m_fCurHealth <= 0)
            {
                if (GameMgr.getInstance.m_bIsTutorial)
                    TutorialMgr.getInstance.SkipTutorial();

                target.GetComponent<Unit>().m_fCurHealth = 0;
                target.GetComponent<FSM_Enemy>().SetState(AI_STATE.GROGGY);
                yield break;
            }
        }
        else
        { //Attack Friendly

            Part targetPart = target.GetComponent<Part>();
            float fDodgePercent = targetPart.m_dicStat["Dodge"];
            for (int i = 0; i < targetPart.m_lstPartBuffed.Count; ++i)
            {
                fDodgePercent += targetPart.m_lstPartBuffed[i].m_dicStatBuff["Dodge"];
            }
            //			fDodgePercent *= 10f;

            SoundMgr.getInstance.PlaySfx("impact_blade");

            float fDefense = targetPart.m_dicStat["Defense"];
            fDamage = fDamage + (Random.Range(-2, 3));
            float fBlockDmg = (fDamage * ((fDefense * fDefenseFactor) / (1 + fDefenseFactor * fDefense)));
            //float fDealedDmg = fDamage - fBlockDmg;
            float fDealedDmg = 0f;
            bool bCoreDead = false;

            if (Random.Range(0, 100) < (int)fDodgePercent && !GameMgr.getInstance.m_bIsTutorial)
            { // Dodge!!
                ObjectFactory.getInstance.Create_DamageUI(target, 0, true, 0f, true);
                yield break;
            }
            else
            {
                if (fDealedDmg > 0)
                {
                    bool bTutorialDodge = false;
                    if (targetPart.gameObject.name.Equals("Core"))
                    {
                        if (targetPart.m_fCurHealth - fDealedDmg > 0f)
                            GameObject.Find("Health").GetComponent<TopBarUI>().ChangeValue(targetPart.m_fCurHealth - fDealedDmg);
                        else if (GameMgr.getInstance.m_bIsTutorial)
                        {
                            bTutorialDodge = true;
                        }
                        else
                        {
                            GameObject.Find("Health").GetComponent<TopBarUI>().ChangeValue(0f);
                            bCoreDead = true;
                        }
                    }
                    else
                    {
                        if (targetPart.m_fCurHealth - fDealedDmg > 0f)
                            targetPart.m_fCurHealth -= fDealedDmg;
                        else if (GameMgr.getInstance.m_bIsTutorial)
                        {
                            targetPart.m_fCurHealth = 0f;
                            TutorialMgr.getInstance.SkipTutorial();
                        }
                        else
                            targetPart.m_fCurHealth = 0f;
                    }

                    if (bTutorialDodge)
                        ObjectFactory.getInstance.Create_DamageUI(target, 0, true, 0f, true);
                    else
                        ObjectFactory.getInstance.Create_DamageUI(target, fDamage, true, fBlockDmg);
                }
                else
                {
                    ObjectFactory.getInstance.Create_DamageUI(target, 0f, true, fBlockDmg);
                }

                if (target.GetComponent<FSM_Freindly>() != null)
                    target.GetComponent<FSM_Freindly>().HitEffect();
            }

            //targetPart.AdjustEmissionRate();
            if (targetPart.m_fCurHealth <= 0 || bCoreDead)
            {
                targetPart.PartDestroyed();

                if (targetPart.gameObject.name.Equals("Core"))
                {
                    ObjectFactory.getInstance.Create_MessageBox_OneButton("GameOver", "GameOver");
                }
                yield break;
            }
        }

        //yield return new WaitForSeconds(0.15f);

        //if (target == null)
        //yield break;

        //if (bEnemy)
        //{
        //    for (int i = 0; i < target.transform.childCount; ++i)
        //    {
        //        //				target.transform.GetChild (i).GetComponent<SpriteRenderer> ().color = Color.white;
        //    }
        //}
        //else
        //{
        //    //			target.GetComponent<SpriteRenderer> ().color = Color.white;
        //}

    }

    protected virtual IEnumerator State_Disabled()
    {
        do
        {
            yield return null;

        } while (m_AiState == AI_STATE.DISABLED);

        SetState(m_AiState);
    }

    public void Weapon_Attack(float fDmg, GameObject target, bool bEnemy)
    {
        StartCoroutine(Attack(target, fDmg, bEnemy));
    }

}
