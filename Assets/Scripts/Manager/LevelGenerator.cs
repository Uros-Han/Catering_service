using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelGenerator : Singleton<LevelGenerator> {

	int[] m_iTypeCost; // Cost per type
	int[] m_iTypeDay; // 타입별로 최초 등장 권장하는 날짜

	void Awake()
	{
		m_iTypeCost = new int[(int)ENEMY_TYPE.END - 1];
		m_iTypeDay = new int[(int)ENEMY_TYPE.END - 1];

		m_iTypeCost[(int)ENEMY_TYPE.LIVESTOCK] = 1;
		m_iTypeCost[(int)ENEMY_TYPE.CIVILIAN] = 4;
		m_iTypeCost[(int)ENEMY_TYPE.MERCENARY] = 10;
		m_iTypeCost[(int)ENEMY_TYPE.KNIGHT] = 20;

		m_iTypeDay [(int)ENEMY_TYPE.LIVESTOCK] = 1;
		m_iTypeDay [(int)ENEMY_TYPE.CIVILIAN] = 4;
		m_iTypeDay [(int)ENEMY_TYPE.MERCENARY] = 14;
		m_iTypeDay [(int)ENEMY_TYPE.KNIGHT] = 28;
	}

	void Generate(ENEMY_TYPE enemyType, int iHeroIdx = 0) //적 타입에 맞게 적을 생성해준다.
	{
		switch(enemyType)
		{
		case ENEMY_TYPE.LIVESTOCK:
			ObjectFactory.getInstance.Create_LiveStock();
			break;

		case ENEMY_TYPE.CIVILIAN:
			ObjectFactory.getInstance.Create_Civilian();
			break;

		case ENEMY_TYPE.MERCENARY:
			break;

		case ENEMY_TYPE.KNIGHT:
			break;

		case ENEMY_TYPE.HERO:
			ObjectFactory.getInstance.Create_Hero(iHeroIdx);
			break;
		}
	}

	public void Encount(int iCost, int iDay) //코스트와 날짜에 맞는 적타입을 리스트로 뽑아준다.
	{
		List<ENEMY_TYPE> list_enemyType = new List<ENEMY_TYPE> ();

		float fAdjustProbabilty = 0f;
		bool bDidntChoiced = true;
		bool bHeroContained = false;

		while(iCost > 0)
		{
			bDidntChoiced = true;

			if(iCost >= m_iTypeCost[(int)ENEMY_TYPE.LIVESTOCK] && Random.Range(0f, 1f) < CalculateProbablity(ENEMY_TYPE.LIVESTOCK, iDay) + fAdjustProbabilty){
				bDidntChoiced = false;
				list_enemyType.Add(ENEMY_TYPE.LIVESTOCK);
				iCost -= m_iTypeCost[(int)ENEMY_TYPE.LIVESTOCK];
			}else if(iCost >= m_iTypeCost[(int)ENEMY_TYPE.CIVILIAN] && Random.Range(0f, 1f) < CalculateProbablity(ENEMY_TYPE.CIVILIAN, iDay) + fAdjustProbabilty){
				bDidntChoiced = false;
				list_enemyType.Add(ENEMY_TYPE.CIVILIAN);
				iCost -= m_iTypeCost[(int)ENEMY_TYPE.CIVILIAN];
			}else if(iCost >= m_iTypeCost[(int)ENEMY_TYPE.MERCENARY] && Random.Range(0f, 1f) < CalculateProbablity(ENEMY_TYPE.MERCENARY, iDay) + fAdjustProbabilty){
				bDidntChoiced = false;
				list_enemyType.Add(ENEMY_TYPE.MERCENARY);
				iCost -= m_iTypeCost[(int)ENEMY_TYPE.MERCENARY];
			}else if(iCost >= m_iTypeCost[(int)ENEMY_TYPE.KNIGHT]){
				bDidntChoiced = false;
				list_enemyType.Add(ENEMY_TYPE.KNIGHT);
				iCost -= m_iTypeCost[(int)ENEMY_TYPE.KNIGHT];
			}

			if(bDidntChoiced)
			{
				fAdjustProbabilty += 0.02f;
			}
		}

		if (iDay % 10 == 0) {
			list_enemyType.Add(ENEMY_TYPE.HERO);
			bHeroContained = true;
		}

		StartCoroutine (GenerateQueue (list_enemyType, iDay));

	}

	IEnumerator GenerateQueue(List<ENEMY_TYPE> list_enemyType, int iDay)
	{
		for (int i=0; i<list_enemyType.Count; ++i) {
			if(list_enemyType[i] != ENEMY_TYPE.HERO)
				Generate(list_enemyType[i]);
			else
				Generate(list_enemyType[i], iDay/10 - 1);

			yield return new WaitForSeconds(0.5f);
		}
	}

	float CalculateProbablity(ENEMY_TYPE enemyType, int iDay)
	{
		if(iDay < m_iTypeDay[(int)enemyType + 1])
			return 1f;
		else if(iDay == m_iTypeDay[(int)enemyType + 1])
			return 0.75f;
		else if(iDay == m_iTypeDay[(int)enemyType + 1] + 1)
			return 0.5f;
		else if(iDay == m_iTypeDay[(int)enemyType + 1] + 2)
			return 0.25f;
		else
			return 0f;
	}
}

