using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HealthBar : MonoBehaviour
{

    bool m_bEnemy;
    bool m_bHero;
    bool m_bWall;

    Transform m_Target;
    UISlider m_slider;
    UISlider m_slider2;

    // Use this for initialization
    void OnEnable()
    {

        if (!gameObject.name.Equals("WallHealthBar"))
        {
            m_Target = GetComponent<UIFollowTarget>().target;

            if (m_Target == null)
            {
                StartCoroutine(FindTarget());
                return;
            }

            m_slider = transform.GetChild(0).GetComponent<UISlider>();
            m_slider2 = transform.GetChild(2).GetChild(0).GetComponent<UISlider>();

            if (m_Target.parent.name.Equals("Enemies"))
                m_bEnemy = true;

            if (m_bEnemy && m_Target.GetComponent<Unit>().m_enemyType == ENEMY_TYPE.HERO)
            {
                m_bHero = true;
                transform.GetChild(2).gameObject.SetActive(true);
            }
            else
            {
                transform.GetChild(2).gameObject.SetActive(false);
            }

            StartCoroutine(Health());
        }
        else
        {
            StartCoroutine(WallHealthBar());
        }


    }

    IEnumerator FindTarget()
    {
        UIFollowTarget ft = GetComponent<UIFollowTarget>();
        WaitForSeconds wfs = new WaitForSeconds(0.01f);

        do
        {
            yield return wfs;
        } while (ft.target == null);

        OnEnable();
    }

    IEnumerator WallHealthBar()
    {
        yield return null;

        m_Target = GameObject.Find("Wall").transform;

        m_slider = transform.GetChild(0).GetComponent<UISlider>();

        m_bWall = true;

        StartCoroutine(Health());
    }


    IEnumerator Health()
    {
        Part part = null;
        Unit unit = null;
        Wall wall = null;
        UIPanel panel = GetComponent<UIPanel>();
        bool bWallHealthBar = false;

        if (gameObject.name.Equals("WallHealthBar"))
            bWallHealthBar = true;

        if (m_bEnemy)
            unit = m_Target.GetComponent<Unit>();
        else if (m_bWall)
            wall = m_Target.GetComponent<Wall>();
        else
            part = m_Target.GetComponent<Part>();

        float fPartMaxHealth = 0f;
        int iBeforeListBuffedCount = 0;
        if (!m_bEnemy && !m_bWall)
        {
            float fBuffedStat = 0f;
            for (int i = 0; i < part.m_lstPartBuffed.Count; ++i)
            {
                fBuffedStat += part.m_lstPartBuffed[i].m_dicStatBuff["Health"];
            }
            fPartMaxHealth = part.m_dicStat["Health"] + fBuffedStat;
            iBeforeListBuffedCount = part.m_lstPartBuffed.Count;
        }

        do
        {
            if (m_bEnemy)
            {
                m_slider.value = unit.m_fCurHealth / unit.m_fHealth;
                if (m_bHero)
                    m_slider2.value = unit.m_fCurMorale / unit.m_fMorale;
                else
                {
                    transform.GetChild(2).gameObject.SetActive(false);
                }
            }
            else if (m_bWall)
            {
                m_slider.value = wall.m_fCurHealth / wall.m_fHealth;
            }
            else
            {
                if (iBeforeListBuffedCount != part.m_lstPartBuffed.Count)
                {
                    float fBuffedStat = 0f;
                    for (int i = 0; i < part.m_lstPartBuffed.Count; ++i)
                    {
                        fBuffedStat += part.m_lstPartBuffed[i].m_dicStatBuff["Health"];
                    }
                    fPartMaxHealth = part.m_dicStat["Health"] + fBuffedStat;
                }

                m_slider.value = part.m_fCurHealth / fPartMaxHealth;
                iBeforeListBuffedCount = part.m_lstPartBuffed.Count;
            }

            yield return null;

            //if (!bWallHealthBar)
            //{
            //    if (panel.alpha.Equals(1) && m_slider.value == 1)
            //    {
            //        panel.alpha = 0;
            //    }
            //    else if (panel.alpha.Equals(0) && m_slider.value != 1)
            //    {
            //        panel.alpha = 1;
            //    }
            //}

        } while (m_Target != null);
    }
}
