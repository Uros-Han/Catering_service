using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WorldGenerator : Singleton<WorldGenerator> {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void GenerateWorldMap()
	{

		int iCityNum = 20;
		int iCastleNum = 10;

		GridMgr grid = GridMgr.getInstance;
		ObjectFactory objFac = ObjectFactory.getInstance;
		List<int> idxList = new List<int> ();

		for (int i = 0; i < grid.m_iXcount * grid.m_iYcount; ++i) {
			// idx -> x, y
			int x = i % grid.m_iXcount;
			int y = i / grid.m_iXcount;

			//x normalize 클수록 중심으로부터 멀다 
			if (x > grid.m_iXcount / 2)
				x -= grid.m_iXcount/2;
			else
				x = grid.m_iXcount/2 - x;

			//y normalize 클수록 중심으로부터 멀다 
			if (y > grid.m_iYcount / 2)
				y -= grid.m_iYcount/2;
			else
				y = grid.m_iYcount/2 - y;

			float fChance = 1 - (((float)x + (float)y) / ((float)(grid.m_iXcount / 2f) + (float)(grid.m_iYcount / 2f)));

			Debug.Log (GenerateNormalRandom (0.5f, 0.1f));
			if (GenerateNormalRandom(0.5f, 0.1f) < fChance)
				idxList.Add (i);
		}

		for (int i = 0; i < iCastleNum; ++i) {
//			int iRandomIdx = idxList[(int)GenerateNormalRandom(idxList.Count/2f, 10f)];
			int iRandomIdx = idxList[Random.Range (0, idxList.Count)];

			objFac.Create_WorldIcon (grid.GetPosOfIdx (iRandomIdx), (int)WORLDICON_TYPE.CASTLE);
			idxList.Remove (iRandomIdx);
		}

		for (int i = 0; i < iCityNum; ++i) {
			int iRandomIdx = idxList[Random.Range (0, idxList.Count)];

			objFac.Create_WorldIcon (grid.GetPosOfIdx (iRandomIdx), (int)WORLDICON_TYPE.CITY);
			idxList.Remove (iRandomIdx);
		}

		for (int i = 0; i < idxList.Count; ++i) {
			int iRandom = Random.Range (0, 100);
			if(iRandom < 33)
				objFac.Create_WorldIcon (grid.GetPosOfIdx (idxList[i]), (int)WORLDICON_TYPE.FARM);
			else if(iRandom < 66)
				objFac.Create_WorldIcon (grid.GetPosOfIdx (idxList[i]), (int)WORLDICON_TYPE.RANCH);
			else if(iRandom < 88)
				objFac.Create_WorldIcon (grid.GetPosOfIdx (idxList[i]), (int)WORLDICON_TYPE.VILLAGE);
			else if(iRandom < 88)
				objFac.Create_WorldIcon (grid.GetPosOfIdx (idxList[i]), (int)WORLDICON_TYPE.EMPTY);
		}
	}

	float GenerateNormalRandom(float mean, float stdDev) //평균, 표준편차
	{
		float rand1 = Random.Range(0.0f, 1.0f);
		float rand2 = Random.Range(0.0f, 1.0f);

		float randStdNormal = Mathf.Sqrt(-2.0f * Mathf.Log(rand1)) * Mathf.Sin(2.0f * Mathf.PI * rand2); //random normal(0,1)
		float randNormal = mean + stdDev * randStdNormal; //random normal(mean,stdDev^2)

		return randNormal;
	}
}
