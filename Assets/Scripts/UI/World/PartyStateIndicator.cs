using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PartyStateIndicator : MonoBehaviour
{

    GameObject m_thisUI;
    UILabel m_PartyUILabel;
    Party m_party;

    // Use this for initialization
    void OnEnable()
    {
        StartCoroutine(Tweener());

        m_thisUI = ObjectFactory.getInstance.Create_PartyUI(transform);
        m_PartyUILabel = m_thisUI.transform.GetChild(0).GetComponent<UILabel>();
        m_party = transform.parent.GetComponent<Party>();
    }

    IEnumerator Tweener()
    {
        bool bUpward = true;
        WaitForSeconds waitSecond = new WaitForSeconds(1f);
        do
        {
            if (bUpward)
            {
                iTween.MoveTo(gameObject, iTween.Hash("y", 0.01f, "isLocal", true, "time", 1f, "easetype", "easeInSine"));
                bUpward = false;
            }
            else
            {
                iTween.MoveTo(gameObject, iTween.Hash("y", 0f, "isLocal", true, "time", 1f, "easetype", "easeInSine"));
                bUpward = true;
            }

            yield return waitSecond;

        } while (true);
    }

    private void Update()
    {
        if (m_party == null)
            m_party = transform.parent.GetComponent<Party>();
        else
            m_PartyUILabel.text = m_party.m_iSpeed.ToString();
    }
}
