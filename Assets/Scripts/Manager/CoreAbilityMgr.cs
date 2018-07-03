using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoreAbilityMgr : MonoBehaviour
{
    public int m_iCurExp;
    public int m_iMaxExp;
    public int m_iLevel;

    int m_iGainExp;
    int m_iTargetExp; // ChangeValue heading exp;
    int m_iTargetLvl;

    public List<int> m_listAbil;
    public bool m_bPopUpAbilSelectPanel = false;

    UISlider m_ExpSlider;
    UILabel m_levelLabel;

    // Use this for initialization
    void Start()
    {
        m_listAbil = new List<int>();
        m_listAbil.Add(0);

        m_iLevel = 1;
        MaxExpSet();
    }

    public void SetTargetValue()
    {
        m_iTargetLvl = m_iLevel;
        m_iTargetExp = m_iCurExp;
    }

    public bool HasAbility(int index)
    {
        if (m_listAbil.Contains(index))
            return true;
        else
            return false;
    }

    private void Update()
    {
        if (m_ExpSlider == null || !m_ExpSlider.gameObject.activeInHierarchy && GameObject.Find("LevelPanel") != null)
        {
            m_ExpSlider = GameObject.Find("LevelPanel").transform.Find("slider").GetComponent<UISlider>();
            m_levelLabel = GameObject.Find("LevelPanel").transform.Find("back").Find("level").GetComponent<UILabel>();
        }

        if (m_iGainExp > 0)
        {
            if (m_iGainExp + m_iTargetExp >= m_iMaxExp)
            {
                m_iTargetExp = m_iGainExp + m_iTargetExp;
                while (24 + ((m_iTargetLvl - 1) * 12) <= m_iTargetExp)
                {
                    m_bPopUpAbilSelectPanel = true;
                    m_iTargetExp = m_iTargetExp - (24 + ((m_iTargetLvl - 1) * 12));
                    m_iTargetLvl += 1;
                }
            }
            else
            {
                m_iTargetExp = m_iTargetExp + m_iGainExp;
            }

            StopAllCoroutines();
            StartCoroutine(ChangeValue());
            m_iGainExp = 0;
        }

        m_ExpSlider.value = (float)m_iCurExp / (float)m_iMaxExp;
        m_levelLabel.text = m_iLevel.ToString();
    }

    public void GainExp(int iGainExp)
    {
        m_iGainExp += iGainExp;
    }

    public void MaxExpSet()
    {
        m_iMaxExp = 24 + ((m_iLevel - 1) * 12);
    }

    IEnumerator chgVal;
    IEnumerator ChangeValue()
    {
        iTween.Stop(gameObject);

        while (m_iTargetLvl != m_iLevel)
        {
            iTween.ValueTo(gameObject, iTween.Hash("from", m_iCurExp, "to", m_iMaxExp, "time", 0.5f, "onupdate", "TweenVal", "easetype", "easeInSine"));
            yield return new WaitForSeconds(0.51f);
            m_iLevel += 1;
            m_iCurExp = 0;
            MaxExpSet();
        }

        iTween.ValueTo(gameObject, iTween.Hash("from", m_iCurExp, "to", m_iTargetExp, "time", 0.5f, "onupdate", "TweenVal", "easetype", "easeInSine"));
    }

    void TweenVal(int newVal)
    {
        m_iCurExp = newVal;
    }
}
