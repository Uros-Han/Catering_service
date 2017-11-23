using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WorldMapManager : Singleton<WorldMapManager> {
	
	public int m_KingLocIdx;
	public WORLDTURN_STATE m_worldTurnState;

	// Use this for initialization
	void Start () {
		StartCoroutine(WorldGenerator.getInstance.GenerateWorldMap ());
		m_worldTurnState = WORLDTURN_STATE.IDLE;
	}

}
