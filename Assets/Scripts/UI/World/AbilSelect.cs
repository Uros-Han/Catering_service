using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AbilSelect : MonoBehaviour
{

    List<int> m_iAbilPool; // 배우지 않았고, 선택 가능한 능력 풀 
    List<int> iThreeAbil; //이번에 뽑힌 세개의 어빌 

    // Use this for initialization
    void Start()
    {
        iThreeAbil = new List<int>();
        m_iAbilPool = new List<int>();
    }

    private void OnEnable()
    {
        if (GameObject.Find("Player").GetComponent<CoreAbilityMgr>().m_bPopUpAbilSelectPanel)
            SetAbilPanel();

        GameObject.Find("Player").GetComponent<CoreAbilityMgr>().m_bPopUpAbilSelectPanel = false;
    }

    void SetAbilPool()
    {
        m_iAbilPool.Clear();
        CoreAbilityMgr coreAbilMgr = GameObject.Find("Player").GetComponent<CoreAbilityMgr>();

        for (int i = 0; i < 14; ++i)
        {
            m_iAbilPool.Add(i);
        }

        if (coreAbilMgr.m_listAbil != null)
        {
            for (int i = 0; i < coreAbilMgr.m_listAbil.Count; ++i)
            {
                m_iAbilPool.Remove(coreAbilMgr.m_listAbil[i]);
            }
        }

        //선행 어빌리티 체크 
        if (!coreAbilMgr.m_listAbil.Contains(10))
            m_iAbilPool.Remove(11);
    }

    void RandomingAbil()
    {
        iThreeAbil.Clear();

        for (int i = 0; i < 3; ++i)
        {
            int iPick = m_iAbilPool[Random.Range(0, m_iAbilPool.Count)];
            m_iAbilPool.Remove(iPick);

            iThreeAbil.Add(iPick);
        }
    }

    public void SetAbilPanel()
    {
        SetAbilPool();
        RandomingAbil();

        for (int i = 0; i < 3; ++i)
        {
            Transform abil_trans = transform.Find(string.Format("Abil_{0}", i)).transform;
            abil_trans.GetChild(0).GetComponent<UISprite>().spriteName = string.Format("ability_{0:00}", iThreeAbil[i]);
            abil_trans.GetChild(1).GetComponent<UILabel>().text = Localization.Get(string.Format("abil_{0}_name", iThreeAbil[i]));
            abil_trans.GetChild(2).GetComponent<UILabel>().text = Localization.Get(string.Format("abil_{0}_desc", iThreeAbil[i]));
        }

        GetComponent<UIPanel>().alpha = 1f;
    }

    public int iIdx_0 = 0;
    public int iIdx_1 = 1;
    public int iIdx_2 = 2;

    public void SelectAbil(int iIdx)
    {
        CoreAbilityMgr coreAbilMgr = GameObject.Find("Player").GetComponent<CoreAbilityMgr>();

        coreAbilMgr.m_listAbil.Add(iThreeAbil[iIdx]);

        GetComponent<UIPanel>().alpha = 0f;
        ObjectFactory.getInstance.Create_AbilUI(iThreeAbil[iIdx]);
    }
}
