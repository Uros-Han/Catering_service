using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FSM_Enemy : FSM
{

    public GameObject m_objHealthBar;

    List<GameObject> m_AttackAvailableParts;

    // Use this for initialization
    void Start()
    {

        m_AttackAvailableParts = new List<GameObject>();

        //Find AttackAvailable Part
        for (int i = 0; i < transform.childCount; ++i)
        {
            if (transform.GetChild(i).GetComponent<Part>().m_bAttackAvailable)
                m_AttackAvailableParts.Add(transform.GetChild(i).gameObject);
        }

        SetState(AI_STATE.MOVE);
    }

    IEnumerator tremble;

    public void SetState(AI_STATE state)
    {
        m_AiState = state;

        if (m_CurStateCoroutine != null)
        {
            StopCoroutine(m_CurStateCoroutine);
        }

        if (tremble != null)
            StopCoroutine(tremble);

        switch (state)
        {
            case AI_STATE.MOVE:
                m_CurStateCoroutine = State_Move();
                tremble = Tremble();
                StartCoroutine(tremble);
                break;

            case AI_STATE.ATTACK:
                for (int i = 0; i < m_AttackAvailableParts.Count; ++i)
                    StartCoroutine(AttackablePart(m_AttackAvailableParts[i], i));

                m_CurStateCoroutine = State_Attack();
                break;

            case AI_STATE.EATEN:
                m_CurStateCoroutine = State_Eaten();
                break;

            case AI_STATE.GROGGY:
                m_CurStateCoroutine = State_Groggy();
                break;

            case AI_STATE.PANIC:
                m_CurStateCoroutine = State_Panic();
                break;

            case AI_STATE.DISABLED:
                m_CurStateCoroutine = State_Disabled();
                break;

        }

        StartCoroutine(m_CurStateCoroutine);
    }

    public void HitEffect()
    {
        for (int i = 0; i < transform.childCount; ++i)
        {
            StartCoroutine(base.HitEffect(transform.GetChild(i).GetComponent<SpriteRenderer>()));
        }
    }

    public IEnumerator State_Eaten()
    {
        do
        {
            yield return null;

        } while (m_AiState == AI_STATE.EATEN);

        SetState(m_AiState);
    }


    protected override IEnumerator State_Move()
    {
        if (GameObject.Find("Player") == null)
            yield break;

        Transform coreTrans = GameObject.Find("Player").transform.GetChild(0);
        Transform PlayerTrans = GameObject.Find("Player").transform;
        float fMoveSpeed = GetComponent<Unit>().m_fMoveSpeed;

        Unit thisUnit = GetComponent<Unit>();

        float fRange = (float)m_AttackAvailableParts[0].GetComponent<Part>().m_dicStat["Range"] / 100f;

        do
        {
            yield return null;

            Vector3 CoreDirVec = Vector3.Normalize(coreTrans.position - transform.position);

            if (m_AiState == AI_STATE.MOVE)
            {
                if (thisUnit.m_bCatched)
                {
                    m_AiState = AI_STATE.PANIC;
                    break;
                }

                transform.Translate(CoreDirVec * fMoveSpeed * Time.deltaTime);
            }

            //			if((!m_bBornAtLeft && transform.position.x < -fBornPosX) || (m_bBornAtLeft && transform.position.x > -fBornPosX)) //Run Away
            //			{
            //				BattleSceneMgr.getInstance.EnemyEliminatedCheck ();
            //				Destroy (m_objHealthBar);
            //				Destroy (gameObject);
            //			}

            if (m_AttackAvailableParts.Count.Equals(0))
                continue;

            //// TODO : Attack logic modify

            for (int i = 0; i < PlayerTrans.childCount; ++i)
            {
                if ((PlayerTrans.GetChild(i).gameObject.name.Equals("Body") || PlayerTrans.GetChild(i).gameObject.name.Equals("Core")) && Vector3.Distance(PlayerTrans.GetChild(i).transform.position, transform.position) < fRange)
                {
                    if (GameMgr.getInstance.m_bIsTutorial)
                    {
                        if (TutorialMgr.getInstance.tutoState != TutorialMgr.TUTO_STATE.FIGHT_BATTLE_0 && TutorialMgr.getInstance.tutoState != TutorialMgr.TUTO_STATE.FIGHT_BATTLE_1)
                            m_AiState = AI_STATE.PANIC;
                        else
                        {
                            if (PlayerTrans.Find("Body") != null && !PlayerTrans.Find("Body").GetComponent<Part>().m_bDestroied)
                                m_target = PlayerTrans.Find("Body").gameObject;
                            else
                                m_target = PlayerTrans.GetChild(i).gameObject;

                            m_AiState = AI_STATE.ATTACK;
                        }

                        if (TutorialMgr.getInstance.tutoState == TutorialMgr.TUTO_STATE.EAT_BATTLE_0)
                        {
                            TutorialMgr.getInstance.SkipTutorial();
                        }
                        else if (TutorialMgr.getInstance.tutoState == TutorialMgr.TUTO_STATE.FIGHT_BATTLE_0)
                        {
                            m_target = PlayerTrans.Find("Body").gameObject;
                            m_AiState = AI_STATE.ATTACK;
                            TutorialMgr.getInstance.SkipTutorial();
                        }
                    }
                    else
                    {
                        m_target = PlayerTrans.GetChild(i).gameObject;
                        m_AiState = AI_STATE.ATTACK;
                    }
                }
            }

            //			if(!m_AiState.Equals(AI_STATE.ATTACK)){
            //				for(int i=0; i < PlayerTrans.childCount; ++i)
            //				{
            //					if(Vector3.Distance(PlayerTrans.GetChild(i).transform.position, transform.position) < fRange)
            //					{
            //						m_target = PlayerTrans.GetChild(i).gameObject;
            //						m_AiState = AI_STATE.ATTACK;
            //					}
            //				}
            //			}

            //////////////////////////////////

        } while (m_AiState == AI_STATE.MOVE);

        SetState(m_AiState);
    }

    public IEnumerator State_Groggy()
    {
        GetComponent<Unit>().m_bGroggy = true;

        GetComponent<CircleCollider2D>().enabled = false;

        for (int i = 0; i < transform.childCount; ++i)
        {
            transform.GetChild(i).GetComponent<SpriteRenderer>().color = new Color(128 / 255f, 171 / 255f, 255 / 255f);
        }
        GetComponent<FSM_Enemy>().m_AiState = AI_STATE.DISABLED;

        float fGroggyTime = 2f;
        yield return new WaitForSeconds(fGroggyTime);

        if (GetComponent<FSM_Enemy>().m_AiState == AI_STATE.EATEN)
            yield break;

        GetComponent<Unit>().Death();

    }

    public IEnumerator State_Panic()
    {

        do
        {

            yield return null;

        } while (m_AiState == AI_STATE.PANIC);

        SetState(m_AiState);
    }

    public IEnumerator State_Disabled()
    {

        do
        {

            yield return null;

        } while (m_AiState == AI_STATE.DISABLED);

        SetState(m_AiState);
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

        } while (m_AiState == AI_STATE.MOVE);
    }

    protected override IEnumerator State_Attack()
    {
        Unit thisUnit = GetComponent<Unit>();
        float fRange = (float)m_AttackAvailableParts[0].GetComponent<Part>().m_dicStat["Range"] / 100f;

        do
        {
            yield return null;

            if (thisUnit.m_bCatched)
            {
                m_AiState = AI_STATE.PANIC;
                break;
            }

            if (m_target == null)
            {
                m_AiState = AI_STATE.MOVE;
                break;
            }

            if (Vector3.Distance(m_target.transform.position, transform.position) > fRange)
            {
                m_AiState = AI_STATE.MOVE;
                m_target = null;
            }

        } while (m_AiState == AI_STATE.ATTACK);

        yield return null;

        SetState(m_AiState);
    }

    public void Weapon_Attack(Part attackPart)
    {
        float fDamage = attackPart.m_dicStat["Attack"];

        StartCoroutine(Attack(m_target, fDamage, false));
    }

    void InitAttackAnim()
    {
        for (int i = 0; i < m_AttackAvailableParts.Count; ++i)
        {
            Animator anim = m_AttackAvailableParts[i].GetComponent<Animator>();

            anim.SetBool("Hit", false);
            anim.SetBool("Ready_Weapon", false);
        }

    }

    IEnumerator AttackablePart(GameObject AttackPart, int iCount)
    {
        yield return new WaitForSeconds(iCount * 0.5f);

        Part targetPart = m_target.GetComponent<Part>();
        //		Quaternion originRotate = AttackPart.transform.localRotation;
        //		Vector3 originPos = AttackPart.transform.localPosition;

        Part attackPart = AttackPart.GetComponent<Part>();
        float fAttackSpeed = attackPart.m_dicStat["AttackSpeed"];

        fAttackSpeed /= 10f;

        Animator anim = AttackPart.GetComponent<Animator>();
        anim.SetFloat("AttackSpeed", fAttackSpeed);

        while (m_AiState == AI_STATE.ATTACK)
        {

            anim.SetBool("Hit", false);
            anim.SetBool("Ready_Weapon", true);
            anim.SetBool("Cancel_Attack", false);

            float fTimer = 0f;

            do
            {
                fTimer += Time.deltaTime * fAttackSpeed * 0.1f;
                if (m_AiState != AI_STATE.ATTACK || targetPart.m_bDestroied)
                {
                    anim.SetBool("Cancel_Attack", true);
                    break;
                }
                yield return null;

            } while (fTimer < 1f);

            if (targetPart.m_bDestroied)
                m_AiState = AI_STATE.MOVE;

            if (anim.GetBool("Cancel_Attack"))
            {
                anim.SetBool("Hit", false);
                anim.SetBool("Ready_Weapon", false);
                break;
            }

            anim.SetBool("Hit", true);
            yield return null;

            //			if (attackPart.m_weaponType == WEAPON_TYPE.BOW || attackPart.m_weaponType == WEAPON_TYPE.ONE_HAND) {
            //
            //				anim.SetBool ("Hit", false);
            //				anim.SetBool ("Ready_Weapon", true);
            //
            //				float fTimer = 0f;
            //
            //				do{
            //					fTimer += Time.deltaTime;
            //					yield return null;
            //					
            //				}while(fTimer < 10f / fAttackSpeed);
            //
            //				anim.SetBool ("Hit", true);
            //				yield return new WaitForSeconds (0.25f);
            //
            //			} else {
            //				if (GetComponent<Unit>().m_bFlipped)
            //					iTween.RotateTo (AttackPart, iTween.Hash ("z", -100f, "time", fAttackSpeed * 0.2f, "islocal", true));
            //				else
            //					iTween.RotateTo (AttackPart, iTween.Hash ("z", 100f, "time", fAttackSpeed * 0.2f, "islocal", true));
            //			
            //				iTween.MoveTo (AttackPart, iTween.Hash ("x", -0.005f, "y", 0.206f, "time", fAttackSpeed * 0.2f, "islocal", true));
            //				yield return new WaitForSeconds ((fAttackSpeed * 0.2f) + (fAttackSpeed * 0.1f));
            //
            //				if (targetPart.m_bDestroied) {
            //					AttackPart.transform.localRotation = originRotate;
            //					AttackPart.transform.localPosition = originPos;
            //					continue;
            //				}
            //				iTween.RotateTo (AttackPart, iTween.Hash ("z", 0f, "time", fAttackSpeed * 0.02f, "islocal", true));
            //				iTween.MoveTo (AttackPart, iTween.Hash ("x", originPos.x, "y", originPos.y, "time", fAttackSpeed * 0.02f, "islocal", true));
            //
            //				if (transform.Find ("Hand_L") == null) {
            //					SoundMgr.getInstance.PlaySfx ("weapon_twohand");
            //				} else {
            //					SoundMgr.getInstance.PlaySfx ("weapon_onehand");
            //				}
            //
            //				yield return new WaitForSeconds (fAttackSpeed * 0.02f);
            //				if (targetPart.m_bDestroied) {
            //					AttackPart.transform.localRotation = originRotate;
            //					AttackPart.transform.localPosition = originPos;
            //					continue;
            //				}
            //
            //				StartCoroutine (Attack (m_target, fDamage, false));
            //				yield return new WaitForSeconds (fAttackSpeed * 0.1f);
            //			}
        };

        anim.SetBool("Ready_Weapon", false);
    }

}
