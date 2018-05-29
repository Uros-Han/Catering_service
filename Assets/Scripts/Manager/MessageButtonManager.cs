using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MessageButtonManager : MonoBehaviour
{

    void HungerCheckerEnforcement()
    {
        GameObject.Find("Core").GetComponent<Core_World>().MoveOrder();
        Destroy(GameObject.Find("MessageBox(Clone)").gameObject);
    }

    void HungerCheckerWait()
    {
        GameObject.Find("WorldMapManager").GetComponent<WorldMapManager>().Wait();
        if (GameObject.Find("MessageBox(Clone)") != null)
            Destroy(GameObject.Find("MessageBox(Clone)").gameObject);
    }

    void DestroyMessageBox()
    {
        Destroy(GameObject.Find("MessageBox(Clone)").gameObject);
    }

    void GameOver()
    {
        BattleSceneMgr.getInstance.m_bSiege = false;
        Application.LoadLevel("Main");
        Destroy(GameObject.Find("Player").gameObject);
    }
}
