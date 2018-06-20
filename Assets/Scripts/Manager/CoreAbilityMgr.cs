using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoreAbilityMgr : MonoBehaviour
{
    public float m_fCurExp;
    public float m_fMaxExp;
    public int m_iLevel;

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
        m_fMaxExp = 24f;
    }

    private void Update()
    {
        if (m_ExpSlider == null)
        {
            m_ExpSlider = GameObject.Find("LevelPanel").transform.Find("slider").GetComponent<UISlider>();
            m_levelLabel = GameObject.Find("LevelPanel").transform.Find("back").Find("level").GetComponent<UILabel>();
        }

        m_ExpSlider.value = m_fCurExp / m_fMaxExp;
        m_levelLabel.text = m_iLevel.ToString();
    }

    public void GainExp(int iGainExp)
    {
        if (iGainExp + m_fCurExp >= m_fMaxExp)
        {
            m_fCurExp = iGainExp + m_fCurExp - m_fMaxExp;
            LevelUp();
        }
        else
        {
            m_fCurExp += iGainExp;
        }
    }

    public void LevelUp()
    {
        m_iLevel += 1;
        MaxExpSet();

        m_bPopUpAbilSelectPanel = true;
    }

    public void MaxExpSet()
    {
        m_fMaxExp = m_iLevel * 24;
    }
}
