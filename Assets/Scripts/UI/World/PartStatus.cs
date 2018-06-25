using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PartStatus : MonoBehaviour
{

    UILabel m_PartCountLabel;
    UILabel m_SightLabel;
    UILabel m_SpeedLabel;

    public int m_iPartCount;
    public int m_iSight;
    public int m_iSpeed;

    Transform m_PlayerTrans;

    CoreAbilityMgr coreAbility;

    // Use this for initialization
    void Start()
    {
        m_PartCountLabel = transform.Find("PartsNum").Find("Count").GetComponent<UILabel>();
        m_SightLabel = transform.Find("Sight").Find("Count").GetComponent<UILabel>();
        m_SpeedLabel = transform.Find("Speed").Find("Count").GetComponent<UILabel>();

        m_PlayerTrans = GameObject.Find("Player").transform;
        coreAbility = GameObject.Find("Player").GetComponent<CoreAbilityMgr>();
    }

    // Update is called once per frame
    void Update()
    {
        m_iPartCount = m_PlayerTrans.childCount - 1;
        m_PartCountLabel.text = m_iPartCount.ToString();

        if (!coreAbility.HasAbility(1))
            m_iSight = 0;
        else
            m_iSight = 3;

        m_iSpeed = 0;
        for (int i = 0; i < m_PlayerTrans.childCount; ++i)
        {
            if (m_PlayerTrans.GetChild(i).gameObject.name.Equals("Leg"))
                m_iSpeed += 1;
            else if (m_PlayerTrans.GetChild(i).gameObject.name.Equals("Head"))
                m_iSight += 1;
        }
        m_SightLabel.text = m_iSight.ToString();
        m_SpeedLabel.text = m_iSpeed.ToString();
    }
}
