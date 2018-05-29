using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// 이 벽은 월드아이콘 벽이 아닌 배틀씬의 벽.
/// </summary>
public class Wall : MonoBehaviour
{
    public int m_iWallIdx;

    public bool m_bDestroied = false;
    public float m_fHealth;
    public float m_fCurHealth;
    public float m_fDefense;

    // Use this for initialization
    void Start()
    {
        if (!BattleSceneMgr.getInstance.m_bSiege)
        {
            gameObject.SetActive(false);
            return;
        }
        else
        {
            GetComponent<SpriteRenderer>().enabled = true;
            GetComponent<BoxCollider2D>().enabled = true;
        }

        m_iWallIdx = BattleSceneMgr.getInstance.m_iSiegeWallIdx;

        GetComponent<SpriteRenderer>().enabled = true;

        switch (m_iWallIdx)
        {
            case 0: //wooden
                m_fHealth = 500f;
                m_fDefense = 0f;
                break;

            case 1: //lusty stone
                m_fHealth = 1000f;
                m_fDefense = 10f;
                break;

            case 2: // stone
                m_fHealth = 1500f;
                m_fDefense = 20f;
                break;
        }

        m_fCurHealth = m_fHealth;

        GameObject.Find("HealthBar").transform.GetChild(0).gameObject.SetActive(true);
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            m_fCurHealth = 0f;
            Destroied();
        }
    }

    public void Destroied()
    {
        GetComponent<SpriteRenderer>().enabled = false;
        GetComponent<BoxCollider2D>().enabled = false;
    }

    public void HitEffect()
    {
        StartCoroutine(HitEffect_Coroutine());
    }

    IEnumerator HitEffect_Coroutine()
    {
        float fcurTime = 0f;
        float fTime = 0.3f;

        Color HitColor = new Color(183 / 255f, 40 / 255f, 72 / 255f);
        SpriteRenderer targetSprite = GetComponent<SpriteRenderer>();

        do
        {
            targetSprite.color = Color.Lerp(HitColor, Color.white, fcurTime * (1 / fTime));
            fcurTime += Time.deltaTime;

            yield return null;
        } while (fcurTime < 1f);
    }


}
