using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelGenerator : Singleton<LevelGenerator> {

	VictimCrowd[] farmCrowdPool;

	void Awake()
	{
		LevelPool ();
	}

	void LevelPool()
	{
		farmCrowdPool = new VictimCrowd[]{ 
			new VictimCrowd (AREA_STATE.FARM, 1, new VICTIM[] { VICTIM.PIG }),
			new VictimCrowd (AREA_STATE.FARM, 1, new VICTIM[] { VICTIM.PIG, VICTIM.PIG }),
			new VictimCrowd (AREA_STATE.FARM, 1, new VICTIM[] { VICTIM.WOLF }),
			new VictimCrowd (AREA_STATE.FARM, 1, new VICTIM[] { VICTIM.WOLF, VICTIM.PIG }),
			new VictimCrowd (AREA_STATE.FARM, 1, new VICTIM[] { VICTIM.WOLF, VICTIM.WOLF })
		};
		
	}

	public void Encount (AREA_STATE area, int iCost) {

		VictimCrowd[] EncountCrowd = new VictimCrowd[4];
		int iCounter = 0;

		for(int i=0; i < 4; ++i) //코스트에 맞춰서 동서남북 희생자들 풀에서 뽑기
		{
			VictimCrowd randomCrowd = farmCrowdPool[Random.Range(0,5)]; // should be fixed

			EncountCrowd[i] = randomCrowd;
			iCost -= randomCrowd.m_iCost;
			iCounter += 1;

			if(iCost <= 0) // 코스트 다쓰면 브렠
			{
				break;
			}
		}

		for (int i = iCounter; i < 4; ++i) { // 코스트 다썻을경우 나머지 동서남북 없음으로 채우기
			EncountCrowd[i] = new VictimCrowd(area, 0, new VICTIM[0] {});
		}

		//희생자들 배치시킬 방향추첨
		List<DIRECTION> dirList = new List<DIRECTION> ();
		dirList.Add (DIRECTION.LEFT);
		dirList.Add (DIRECTION.RIGHT);
		dirList.Add (DIRECTION.UP);
		dirList.Add (DIRECTION.DOWN);
	
		for(int i = 0 ; i < 4; ++i)
		{
			int iRand = Random.Range(0,4-i);

			//희생자 배치
			VictimPlace(dirList[iRand], EncountCrowd[i].m_victimArray);

			dirList.RemoveAt(iRand);
		}
	}

	void VictimPlace(DIRECTION dir, VICTIM[] victimArr)
	{
		//희생자 배치 자리 리스트 세팅
		List<int> AvailableSeat = new List<int> ();
		for (int i = 0; i < GridMgr.getInstance.m_iXcount; ++i) {
			AvailableSeat.Add(i);
		}

		//랜덤 자리 리스트 채우기
		List<int> RandomSeat = new List<int> ();
		for (int i = 0; i < GridMgr.getInstance.m_iXcount; ++i) {
			int iRand = 0;

			//난수가 정규분포 되도록 여러번 더해주기
			for(int j=0; j< AvailableSeat.Count; ++j)
			{
				iRand += AvailableSeat[Random.Range(0, 2)];
			}

			AvailableSeat.Remove(iRand);
			RandomSeat.Add(iRand);
		}

		//랜덤 자리리스트에 있는애들 순서대로 배치
		for(int i = 0; i < victimArr.Length; ++i)
		{
			GameObject objVictim = null;

			DIRECTION headingDir = (DIRECTION)(3- (int)dir);

			switch(victimArr[i])
			{
			case VICTIM.PIG:
				objVictim = ObjectFactory.getInstance.Create_Pig(headingDir);
				break;

			case VICTIM.WOLF:
				objVictim = ObjectFactory.getInstance.Create_Wolf(headingDir);
				break;
				
			case VICTIM.KNIGHT:
				break;
			}

			float fMaxPos = 0.16f * (float)(GridMgr.getInstance.m_iXcount/2);

			switch(dir)
			{
			case DIRECTION.LEFT:
				objVictim.transform.localPosition = new Vector3(-fMaxPos, fMaxPos - (0.16f * RandomSeat[i]));
				break;
				
			case DIRECTION.RIGHT:
				objVictim.transform.localPosition = new Vector3(fMaxPos, -fMaxPos + (0.16f * RandomSeat[i]));
				break;
				
			case DIRECTION.UP:
				objVictim.transform.localPosition = new Vector3(fMaxPos - (0.16f * RandomSeat[i]), fMaxPos);
				break;
				
			case DIRECTION.DOWN:
				objVictim.transform.localPosition = new Vector3(-fMaxPos + (0.16f * RandomSeat[i]), -fMaxPos);
				break;
			}
		}
	}
}

public class VictimCrowd {
	public AREA_STATE m_area;
	public VICTIM[] m_victimArray;
	public int m_iCost;

	public VictimCrowd(AREA_STATE area, int iCost, VICTIM[] victimArray)
	{
		m_area = area;
		m_iCost = iCost;
		m_victimArray = victimArray;
	}
}
