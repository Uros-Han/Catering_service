using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Unit : MonoBehaviour
{

    public float m_fHealth;
    public float m_fCurHealth;
    public float m_fMorale;
    public float m_fCurMorale;

    public float m_fDefense;

    public float m_fAttackDmg;
    public float m_fMoveSpeed;
    public ENEMY_TYPE m_enemyType;

    public bool m_bEaten = false;
    public bool m_bGroggy = false;
    public bool m_bCatched = false;
    public bool m_bFlipped = false;

    void Start()
    {
        if (!Application.loadedLevelName.Equals("Main"))
            StartCoroutine(CoreTangleCheck());

        m_fDefense = transform.Find("Body").GetComponent<Part>().m_dicStat["Defense"];

        m_fHealth = transform.Find("Body").GetComponent<Part>().m_dicStat["Health"];

        m_fCurHealth = m_fHealth;
        m_fMorale = m_fHealth;
        m_fCurMorale = m_fMorale;

        StartCoroutine(FlipCheck());
        StartCoroutine(layerOrderHandler());

        if (m_enemyType.Equals(ENEMY_TYPE.HERO))
            ObjectFactory.getInstance.Create_HeroAura(gameObject);
    }

    public void Death()
    {
        if (GetComponent<FSM_Enemy>().m_AiState == AI_STATE.EATEN)
            return;

        Transform FieldTrans = GameObject.Find("Field").transform;
        Vector3 groundPos = transform.position - new Vector3(0, 0.03f);
        Vector3 corePos = GameObject.Find("Core").transform.position;
        Vector3 RandomPos = new Vector3(Random.Range(-0.1f, 0.1f), Random.Range(-0.1f, 0.1f));
        //bodyPos += RandomPos;

        GetComponent<FSM_Enemy>().StopAllCoroutines();
        for (int i = 0; i < transform.childCount; ++i)
        {
            if (transform.GetChild(i).GetComponent<Animator>() != null)
                transform.GetChild(i).GetComponent<Animator>().enabled = false;

            //transform.GetChild(i).GetComponent<SpriteRenderer>().color = Color.white;
            //transform.GetChild(i).GetComponent<SpriteRenderer>().sprite = ObjectFactory.getInstance.m_sprite_meat;

            transform.GetChild(i).GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
            transform.GetChild(i).GetComponent<Rigidbody2D>().AddForce(Vector3.Normalize(new Vector3(transform.GetChild(i).position.x - corePos.x, Random.Range(1f, 1.1f))) * 10f, ForceMode2D.Impulse);
            if (transform.GetChild(i).GetComponent<Part>().m_partType != PART_TYPE.ARM)
                transform.GetChild(i).GetComponent<Rigidbody2D>().AddTorque(Random.Range(-220, 220));
            transform.GetChild(i).GetComponent<SpriteRenderer>().color = Color.white;
            //transform.GetChild(i).GetComponent<SpriteRenderer>().color = new Color(160 / 255f, 160 / 255f, 160 / 255f);

            StartCoroutine(ChangeParentToField(transform.GetChild(i).gameObject, groundPos));
        }

        StartCoroutine(DestroyThis());
    }

    IEnumerator FlipCheck()
    {
        Transform coreTrans = GameObject.Find("Player").transform.GetChild(0);

        do
        {
            if (!m_bFlipped && coreTrans.position.x > transform.position.x)
            {
                yield return StartCoroutine(SpriteFlip());
            }
            else if (m_bFlipped && coreTrans.position.x < transform.position.x)
            {
                yield return StartCoroutine(SpriteFlip());
            }

            yield return null;

        } while (true);
    }

    IEnumerator ChangeParentToField(GameObject target, Vector3 groundPos)
    {
        yield return null;
        target.transform.parent = GameObject.Find("Field").transform;
        BattleSceneMgr.getInstance.OnField(target, groundPos);
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            Death();
        }
    }

    IEnumerator CoreTangleCheck()
    {
        Vector2 mousePosition = Vector2.zero;
        CircleCollider2D collider2D = GetComponent<CircleCollider2D>();
        Core core = GameObject.Find("Core").GetComponent<Core>();
        Tangled tangled = GameObject.Find("Tangled").GetComponent<Tangled>();
        BattleSceneMgr battleScene = BattleSceneMgr.getInstance;

        while (!m_bEaten)
        {
            mousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            transform.localRotation = Quaternion.AngleAxis(0, Vector3.forward);

            if (battleScene.m_mouseState.Equals(MOUSE_STATE.HEAL))
            {
                yield return null;
                continue;
            }

            if (tangled.m_bTangledReady && Input.GetMouseButtonDown(0) && collider2D.OverlapPoint(mousePosition))
            {
                tangled.TangledDrag(transform);
            }

            yield return null;
        }
    }

    IEnumerator layerOrderHandler()
    {
        int iSortingOrder = 0;
        List<SpriteRenderer> listSpriteRenderer = new List<SpriteRenderer>();

        for (int i = 0; i < transform.childCount; ++i)
        {
            listSpriteRenderer.Add(transform.GetChild(i).GetComponent<SpriteRenderer>());
        }

        do
        {
            iSortingOrder = (int)(-transform.localPosition.y * 1000f);

            for (int i = 0; i < listSpriteRenderer.Count; ++i)
            {
                if (listSpriteRenderer[i] == null)
                {
                    listSpriteRenderer.RemoveAt(i);
                    continue;
                }

                if (listSpriteRenderer[i].gameObject.name.Equals("Head") || listSpriteRenderer[i].gameObject.name.Contains("Hand"))
                    listSpriteRenderer[i].sortingOrder = iSortingOrder + 1;
                else
                    listSpriteRenderer[i].sortingOrder = iSortingOrder;
            }

            yield return null;

        } while (true);
    }

    IEnumerator SpriteFlip()
    {


        if (!m_bFlipped)
        {
            transform.localScale = new Vector3(-1, 1, 1);
            //			for (int i = 0; i < transform.childCount; ++i) {
            //				transform.GetChild (i).localPosition = new Vector3 (-transform.GetChild (i).localPosition.x, transform.GetChild (i).localPosition.y);
            //				transform.GetChild (i).localRotation = Quaternion.AngleAxis (-transform.GetChild (i).localRotation.z, Vector3.forward);
            //				transform.GetChild (i).GetComponent<SpriteRenderer> ().flipX = true;
            //			}
            //
            //			for (int i = 0; i < m_AttackAvailableParts.Count; ++i) {
            //				Part attackPart = m_AttackAvailableParts [i].GetComponent<Part> ();
            //				if (attackPart.m_weaponType == WEAPON_TYPE.BOW) {
            //					attackPart.GetComponent<Animator> ().SetBool ("HeadingRight", true);
            //				}
            //			}
            m_bFlipped = true;
        }
        else
        {
            transform.localScale = new Vector3(1, 1, 1);
            //			for (int i = 0; i < transform.childCount; ++i) {
            //				transform.GetChild (i).localPosition = new Vector3 (-transform.GetChild (i).localPosition.x, transform.GetChild (i).localPosition.y);
            //				transform.GetChild (i).localRotation = Quaternion.AngleAxis (-transform.GetChild (i).localRotation.z, Vector3.forward);
            //				transform.GetChild (i).GetComponent<SpriteRenderer> ().flipX = false;
            //			}
            //
            //			for (int i = 0; i < m_AttackAvailableParts.Count; ++i) {
            //				Part attackPart = m_AttackAvailableParts [i].GetComponent<Part> ();
            //				if (attackPart.m_weaponType == WEAPON_TYPE.BOW) {
            //					attackPart.GetComponent<Animator> ().SetBool ("HeadingRight", false);
            //				}
            //			}
            m_bFlipped = false;
        }

        yield return null;

    }

    public IEnumerator DestroyThis(float fDelay = 0.01f)
    {
        transform.parent = GameObject.Find("Field").transform;
        Destroy(GetComponent<FSM_Enemy>().m_objHealthBar);

        yield return new WaitForSeconds(fDelay);

        BattleSceneMgr.getInstance.EnemyEliminatedCheck();
        Destroy(gameObject);
    }
}
