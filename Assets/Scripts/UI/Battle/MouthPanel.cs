using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MouthPanel : MonoBehaviour
{

    public GameObject[] m_arrayEatenObjects;

    IEnumerator[] m_DigestBar;

    // Use this for initialization
    void Start()
    {
        m_arrayEatenObjects = new GameObject[3];
        m_DigestBar = new IEnumerator[3];

        for (int i = 0; i < m_DigestBar.Length; ++i)
        {
            m_DigestBar[i] = DigestBar(i);
        }

        m_mouthState = new MOUTH_STATE[iMaxMouthNum];
        for (int i = 0; i < iMaxMouthNum; ++i)
            ChangeMouthState(i, MOUTH_STATE.IDLE);

        if (GameObject.Find("Player").GetComponent<CoreAbilityMgr>().HasAbility(10))
        {
            Transform secondMouth = GameObject.Find("MouthPanel").transform.GetChild(1).transform;
            for (int i = 0; i < secondMouth.childCount; ++i)
            {
                secondMouth.GetChild(i).gameObject.SetActive(true);
            }
        }

        if (GameObject.Find("Player").GetComponent<CoreAbilityMgr>().HasAbility(11))
        {
            Transform thirdMouth = GameObject.Find("MouthPanel").transform.GetChild(2).transform;
            for (int i = 0; i < thirdMouth.childCount; ++i)
            {
                thirdMouth.GetChild(i).gameObject.SetActive(true);
            }
        }
    }

    public enum MOUTH_STATE { IDLE, CHEW };
    int iMaxMouthNum = 3;
    MOUTH_STATE[] m_mouthState;

    public void ChangeMouthState(int iMouthIdx, MOUTH_STATE state)
    {
        Transform teethTrans = GameObject.Find("MouthPanel").transform.GetChild(iMouthIdx).Find("Teeth");

        m_mouthState[iMouthIdx] = state;

        switch (m_mouthState[iMouthIdx])
        {
            case MOUTH_STATE.IDLE:
                teethTrans.GetChild(0).GetComponent<Animator>().SetInteger("mouthState", 0);
                teethTrans.GetChild(1).GetChild(0).GetComponent<Animator>().SetInteger("mouthState", 0);
                break;

            case MOUTH_STATE.CHEW:
                teethTrans.GetChild(0).GetComponent<Animator>().SetInteger("mouthState", 1);
                teethTrans.GetChild(1).GetChild(0).GetComponent<Animator>().SetInteger("mouthState", 1);
                break;
        }
    }

    public int EmptyMouthIdx()
    {
        int iCurMouthNum = 1;
        if (GameObject.Find("Player").GetComponent<CoreAbilityMgr>().HasAbility(10))
            iCurMouthNum += 1;
        if (GameObject.Find("Player").GetComponent<CoreAbilityMgr>().HasAbility(11))
            iCurMouthNum += 1;

        for (int i = 0; i < iCurMouthNum; ++i)
        {
            if (m_arrayEatenObjects[i] == null)
            {
                return i;
            }
        }

        return -1;
    }

    public bool isMouthFull()
    {
        //int iMouthNum = GameObject.Find("Player").GetComponent<CoreAbilityMgr>().m_iMouthNum;

        int iCurMouthNum = 1;
        if (GameObject.Find("Player").GetComponent<CoreAbilityMgr>().HasAbility(10))
            iCurMouthNum += 1;
        if (GameObject.Find("Player").GetComponent<CoreAbilityMgr>().HasAbility(11))
            iCurMouthNum += 1;

        for (int i = 0; i < iCurMouthNum; ++i)
        {
            if (m_arrayEatenObjects[i] == null)
            {
                return false;
            }
        }

        return true;
    }

    public void AddEnemyInMouth(GameObject objEnemy)
    {
        bool bMouthFulled = true;

        int iCurMouthNum = 1;
        if (GameObject.Find("Player").GetComponent<CoreAbilityMgr>().HasAbility(10))
            iCurMouthNum += 1;
        if (GameObject.Find("Player").GetComponent<CoreAbilityMgr>().HasAbility(11))
            iCurMouthNum += 1;

        int iEmptyIdx = 0;
        for (int i = 0; i < iCurMouthNum; ++i)
        {
            if (m_arrayEatenObjects[i] == null)
            {
                bMouthFulled = false;
                iEmptyIdx = i;
                break;
            }
        }

        if (bMouthFulled)
            return;

        ChangeMouthState(iEmptyIdx, MOUTH_STATE.CHEW);
        m_arrayEatenObjects[iEmptyIdx] = objEnemy;

        objEnemy.transform.parent = GameObject.Find("MouthPanel").transform.GetChild(iEmptyIdx).GetChild(0).transform;
        objEnemy.transform.parent.GetComponent<SpriteMask>().updateSprites(objEnemy.transform.parent);

        for (int i = 0; i < objEnemy.transform.childCount; ++i)
        {
            if (objEnemy.transform.GetChild(i).name == "Head")
            {
                objEnemy.transform.GetChild(i).GetComponent<SpriteRenderer>().material = ObjectFactory.getInstance.m_material_SpritePaletteLightingMaterial;
            }
            else if (objEnemy.transform.GetChild(i).name.Contains("Hand"))
            {
                objEnemy.transform.GetChild(i).GetComponent<SpriteRenderer>().enabled = false;
            }
            else
            {
                objEnemy.transform.GetChild(i).GetComponent<DPSpritePalette>().enabled = false;
                objEnemy.transform.GetChild(i).GetComponent<SpriteRenderer>().color = Color.white;
            }
        }

        StartCoroutine(m_DigestBar[iEmptyIdx]);
    }

    IEnumerator DigestBar(int iIdx)
    {
        Unit targetUnit = m_arrayEatenObjects[iIdx].GetComponent<Unit>();
        UISlider slider = GameObject.Find("MouthPanel").transform.GetChild(iIdx).GetChild(3).GetComponent<UISlider>();

        do
        {
            slider.value = targetUnit.m_fCurHealth / targetUnit.m_fHealth;
            yield return null;
        } while (targetUnit.m_fCurHealth > 0f);

        slider.value = 0f;
        m_arrayEatenObjects[iIdx] = null;

        m_DigestBar[iIdx] = DigestBar(iIdx);
    }


    public int iIdx0 = 0;
    public int iIdx1 = 1;
    public int iIdx2 = 2;
    public void MouthClickIdx(int iIdx)
    {
        if (m_arrayEatenObjects[iIdx] == null)
            return;

        StopCoroutine(m_DigestBar[iIdx]);
        GameObject.Find("Core").GetComponent<Core>().StopDigest(iIdx);

        GameObject.Find("MouthPanel").transform.GetChild(iIdx).GetChild(3).GetComponent<UISlider>().value = 0f;

        GameObject target = GameObject.Find("MouthPanel").transform.GetChild(iIdx).GetChild(0).GetChild(0).gameObject;

        target.transform.parent = GameObject.Find("Enemies").transform;
        target.GetComponent<FSM_Enemy>().m_objHealthBar.SetActive(true);
        target.GetComponent<FSM_Enemy>().m_objHealthBar.GetComponent<UIPanel>();
        target.transform.position = GameObject.Find("Core").transform.position + new Vector3(Random.Range(-0.15f, 0.15f), Random.Range(-0.15f, 0.15f));
        target.transform.localScale = Vector3.one;
        target.layer = 0;
        target.transform.SetChildLayer(0);
        target.GetComponent<FSM_Enemy>().m_AiState = AI_STATE.MOVE;
        target.GetComponent<Unit>().m_bEaten = false;

        target.GetComponent<CircleCollider2D>().enabled = true;

        ChangeMouthState(iIdx, MOUTH_STATE.IDLE);

        Material diffuse = ObjectFactory.getInstance.m_material_SpritePaletteLightingMaterial;
        for (int i = 0; i < target.transform.childCount; ++i)
        {
            if (target.transform.GetChild(i).name.Contains("Hand"))
            {
                target.transform.GetChild(i).GetComponent<SpriteRenderer>().enabled = true;
            }
            else
            {
                target.transform.GetChild(i).GetComponent<DPSpritePalette>().enabled = true;
                target.transform.GetChild(i).GetComponent<SpriteRenderer>().color = Color.white;
            }

            target.transform.GetChild(i).GetComponent<SpriteRenderer>().material = diffuse;
        }

        SoundMgr.getInstance.PlaySfx("core", 0);

        m_arrayEatenObjects[iIdx] = null;
    }
}
