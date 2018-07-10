using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelGenerator : Singleton<LevelGenerator>
{

    void Generate(ENEMY_TYPE enemyType, int iHeroIdx = 0) //적 타입에 맞게 적을 생성해준다.
    {
        GameObject objEnemy = null;

        switch (enemyType)
        {
            case ENEMY_TYPE.LIVESTOCK:
                objEnemy = ObjectFactory.getInstance.Create_LiveStock();
                break;

            case ENEMY_TYPE.CIVILIAN:
                objEnemy = ObjectFactory.getInstance.Create_Civilian(100f);
                break;

            case ENEMY_TYPE.MERCENARY:
                objEnemy = ObjectFactory.getInstance.Create_Mercenary(100f);
                break;

            case ENEMY_TYPE.KNIGHT:
                objEnemy = ObjectFactory.getInstance.Create_Knight(100f);
                break;

            case ENEMY_TYPE.HERO:
                objEnemy = ObjectFactory.getInstance.Create_Hero(iHeroIdx);
                break;
        }

        if (BattleSceneMgr.getInstance.m_curBattleWorldIcon.m_iconType.Equals((int)WORLDICON_TYPE.ALTAR) && objEnemy != null)
        {
            Destroy(objEnemy.GetComponent<FSM_Enemy>().m_objHealthBar);
            Destroy(objEnemy.GetComponent<FSM_Enemy>());
            objEnemy.transform.position = GameObject.Find("Altar").transform.position;
            objEnemy.transform.position = new Vector3(objEnemy.transform.position.x, -0.03f);
        }
    }


    public void Encount()
    {
        List<int> iEnemyList = new List<int>();
        List<ENEMY_TYPE> enemyList = new List<ENEMY_TYPE>();

        iEnemyList = GameMgr.getInstance.m_ilistCurEnemyList;
        for (int i = 0; i < iEnemyList.Count; ++i)
        {
            enemyList.Add((ENEMY_TYPE)iEnemyList[i]);
        }

        StartCoroutine(GenerateQueue(enemyList));
    }


    IEnumerator GenerateQueue(List<ENEMY_TYPE> list_enemyType/*, int iDay*/)
    {
        int iHeroCounter = 0;

        for (int i = 0; i < list_enemyType.Count; ++i)
        {
            if (list_enemyType[i] != ENEMY_TYPE.HERO)
                Generate(list_enemyType[i]);
            else
            {
                Generate(list_enemyType[i], GameMgr.getInstance.m_ilistCurHeroList[iHeroCounter]);
                iHeroCounter += 1;
            }

            yield return new WaitForSeconds(0.5f);
        }
    }
}

