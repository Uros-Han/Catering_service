using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainManager : MonoBehaviour
{

    public float m_fSpawnTime = 5f;

    void Awake()
    {
        if (GameObject.Find("GameMgr") == null) //if gameMgr doesn't exist, make one.
        {
            GameObject gameMgr = Instantiate(Resources.Load("Prefabs/GameMgr") as GameObject) as GameObject;
            gameMgr.name = gameMgr.name.Replace("(Clone)", "");
        }

        SoundMgr.getInstance.SetAudioSources();

        StartCoroutine(Spawner());
        GridMgr.getInstance.ChgGridInfo();

        GameMgr.getInstance.m_bIsTutorial = false;
    }


    IEnumerator Spawner()
    {
        ObjectFactory objFac = ObjectFactory.getInstance;
        WaitForSeconds wfs = new WaitForSeconds(m_fSpawnTime);
        do
        {
            float fRand = Random.Range(0, 100f);
            if (fRand < 50f)
                objFac.Create_Civilian(100f);
            else
                objFac.Create_Mercenary(100f);

            yield return wfs;
        } while (true);
    }

    public void BlowPart(GameObject target)
    {
        StartCoroutine(BlowPart_Coroutine(target));
    }

    IEnumerator BlowPart_Coroutine(GameObject target)
    {
        yield return null;

        target.transform.parent = GameObject.Find("Tangled").transform;
        Rigidbody2D targetRigid = target.GetComponent<Rigidbody2D>();

        targetRigid.isKinematic = false;
        targetRigid.AddTorque(Random.Range(-180f, 180f));
        targetRigid.AddForce(1f * Vector3.Normalize(target.transform.position), ForceMode2D.Impulse);

        yield return new WaitForSeconds(0.25f);

        do
        {
            targetRigid.gravityScale += Time.deltaTime * 4f;
            yield return null;
        } while (targetRigid.gravityScale < 4f);

        yield return new WaitForSeconds(1f);

        Destroy(target);
    }
}
