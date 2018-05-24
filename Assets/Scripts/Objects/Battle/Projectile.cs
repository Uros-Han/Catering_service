using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Projectile : MonoBehaviour
{
    public bool m_bHeadingToEnemy;
    public GameObject m_objTarget;
    public float m_fSpeed;
    public float m_fDamage;

    public WEAPON_TYPE m_WeaponType;

    bool m_bMissed = false;
    Vector3 m_vecMissPos = Vector3.zero;

    // Use this for initialization
    void Start()
    {
        m_fSpeed = 1.5f;

        if (transform.position.x < m_objTarget.transform.position.x)
            GetComponent<SpriteRenderer>().flipX = true;

        switch (m_WeaponType)
        {
            case WEAPON_TYPE.BOW:
                GetComponent<SpriteRenderer>().sprite = ObjectFactory.getInstance.m_sprites_Projectile[0];
                break;

            case WEAPON_TYPE.CROSSBOW:
                GetComponent<SpriteRenderer>().sprite = ObjectFactory.getInstance.m_sprites_Projectile[0];
                break;

            case WEAPON_TYPE.JAVELIN:
                GetComponent<SpriteRenderer>().sprite = ObjectFactory.getInstance.m_sprites_Projectile[1];
                break;
        }

        StartCoroutine(Flying());
    }

    void CalculateHitPos()
    {
        //TODO : Accuracy stat
        if (Random.Range(0f, 100f) < 30f)
        { // Missed
            m_bMissed = true;
            m_vecMissPos = Vector3.Normalize(new Vector3(Random.Range(-1f, 1f), Random.Range(-1f, 1f))) * 0.25f;
        }
        else
        {
            m_vecMissPos = Vector3.zero;
        }
    }

    Vector3 GetNormalVector(Vector3 vStart, Vector3 vEnd) //법선 벡터
    {
        float fNormalHeight = Vector3.Distance(vStart, vEnd) / 4f;

        Vector3 progressVec = vEnd - vStart;
        progressVec = progressVec / 2f;

        if (progressVec.x < 0f)
            return (Vector3.Normalize(new Vector3(progressVec.y, -progressVec.x)) * fNormalHeight) - progressVec + m_vecMissPos;
        else
            return (Vector3.Normalize(new Vector3(-progressVec.y, progressVec.x)) * fNormalHeight) - progressVec + m_vecMissPos;
    }


    IEnumerator Flying()
    {
        CalculateHitPos();

        Vector3 originPos = transform.position;
        bool bTrailOn = false;
        float fTime = 0f;
        Vector3 targetPos = m_objTarget.transform.position + m_vecMissPos;
        float fDistance = Vector3.Distance(originPos, targetPos);


        Vector3 beforePos = transform.position;

        //		DrawLine(originPos, targetPos, Color.red);
        //		DrawLine(originPos, GetNormalVector(originPos, targetPos), Color.yellow);
        //		DrawLine(GetNormalVector(originPos, targetPos), targetPos, Color.yellow);

        do
        {
            if (!bTrailOn && fTime > 0f)
            {
                bTrailOn = true;
                GetComponent<TrailRenderer>().time = 0.25f;
            }

            transform.position = BezierCurve(fTime, originPos, GetNormalVector(originPos, targetPos), targetPos);

            transform.localRotation = Quaternion.AngleAxis(GetAngle(beforePos, transform.position), Vector3.forward);

            fTime += Time.deltaTime * m_fSpeed / fDistance;

            beforePos = transform.position;

            yield return null;
        } while (fTime < 1f);

        //Hit Enemy
        if (!m_bMissed)
            GameObject.Find("Core").GetComponent<FSM>().Weapon_Attack(m_fDamage, m_objTarget, m_bHeadingToEnemy);
        //		else
        //			GameObject.Find("Core").GetComponent<FSM>().Weapon_Attack(0f, m_objTarget, m_bHeadingToEnemy);


        yield return new WaitForSeconds(5f);

        Destroy(gameObject);

    }

    // return : -180 ~ 180 degree (for unity)
    public float GetAngle(Vector3 vStart, Vector3 vEnd)
    {
        Vector3 v = vEnd - vStart;

        if (vStart.x > vEnd.x)
            v = -v;

        return Mathf.Atan2(v.y, v.x) * Mathf.Rad2Deg;
    }

    Vector3 BezierCurve(float t, Vector3 p0, Vector3 p1)
    {
        return ((1 - t) * p0) + ((t) * p1);
    }

    Vector3 BezierCurve(float t, Vector3 p0, Vector3 p1, Vector3 p2)
    {
        Vector3 pa = BezierCurve(t, p0, p1);
        Vector3 pb = BezierCurve(t, p1, p2);
        return BezierCurve(t, pa, pb);
    }

    void DrawLine(Vector3 start, Vector3 end, Color color)
    {
        LineRenderer lr;

        GameObject myLine = new GameObject();
        myLine.transform.position = start;
        myLine.AddComponent<LineRenderer>();
        myLine.transform.parent = transform;

        lr = myLine.GetComponent<LineRenderer>();
        lr.material = new Material(Shader.Find("Sprites/Default"));
        lr.SetColors(color, color);
        lr.sortingLayerName = "Objects";
        lr.SetWidth(0.02f, 0.02f);
        lr.SetPosition(0, start);
        lr.SetPosition(1, end);

        Destroy(myLine, 2f);
    }
}
