using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class WorldMapManager : MonoBehaviour {
	
	public int m_KingLocIdx;
	public WORLDTURN_STATE m_worldTurnState;

	bool m_bToBattleScene = false;
	public List<int> m_iPollutedIdxList;

	public List<int> m_iListVillage;
	public List<int> m_iListCity;
	public List<int> m_iListCastle;

	public List<GameObject> m_encountPartyList;

	void Awake()
	{
		if(GameObject.Find("GameMgr") == null) //if gameMgr doesn't exist, make one.
		{
			GameObject gameMgr = Instantiate(Resources.Load("Prefabs/GameMgr") as GameObject) as GameObject;
			gameMgr.name = gameMgr.name.Replace("(Clone)","");
		}
	}

	// Use this for initialization
	void Start () {
		m_worldTurnState = WORLDTURN_STATE.IDLE;
		GridMgr.getInstance.ChgGridInfo ();

		m_iPollutedIdxList = new List<int> ();

		m_iListVillage = new List<int> ();
		m_iListCity = new List<int> ();
		m_iListCastle = new List<int> ();

		m_encountPartyList = new List<GameObject> ();

		if (!GameMgr.getInstance.m_bDeveloperMode)
			GameObject.Find ("DeveloperTools").transform.GetChild (1).gameObject.SetActive (false);

		GameObject.Find ("Player").SendMessage ("CameBackFromBattleScene");
	}

	void OnEnable()
	{
		if (m_bToBattleScene) {	
//			GameObject.Find ("AleartMsg").BroadcastMessage ("ChgParent",SendMessageOptions.DontRequireReceiver);
			SceneManager.SetActiveScene (SceneManager.GetSceneByName("World"));
			GridMgr.getInstance.ChgGridInfo ();

			GameObject.Find ("World").BroadcastMessage ("CameBackFromBattleScene");
			GameObject.Find ("Player").SendMessage ("CameBackFromBattleScene");
			m_bToBattleScene = false;
			BattleSceneMgr.getInstance.m_turnState = TURN_STATE.DAY;

			if (!GameMgr.getInstance.m_bAssembleOnly) { // 지역점령 
				int iPollutedIdx = GridMgr.getInstance.GetGridIdx(GameObject.Find("Core").transform.position);
				ObjectFactory.getInstance.Create_Polluted(iPollutedIdx);
				m_iPollutedIdxList.Add (iPollutedIdx);

				WorldIcon pollutedIcon = GameObject.Find ("Geo").transform.GetChild (iPollutedIdx).GetComponent<WorldGeo> ().m_worldIcon.GetComponent<WorldIcon>();

				GameMgr.getInstance.m_iReward += (int)pollutedIcon.m_fPopulation * 10;

				pollutedIcon.m_fPopulation = 0f;
				pollutedIcon.m_fProsperity = 0f;
				pollutedIcon.m_iRaided += 1;
				pollutedIcon.m_list_enemyType.Clear ();

				List<GameObject> elimatedPartyList = GameObject.Find("WorldMapManager").GetComponent<WorldMapManager>().m_encountPartyList;
				for (int i = 0; i < elimatedPartyList.Count; ++i) {
					elimatedPartyList [i].GetComponent<Party> ().DestroyThis ();
					elimatedPartyList.Remove (elimatedPartyList [i]);
				}
			}

//			SaveManager.getInstance.LocalSave ();
		}

		SoundMgr.getInstance.SetAudioSources (true);
	}

	public void GenerateWorld()
	{
		StartCoroutine(WorldGenerator.getInstance.GenerateWorldMap ());
	}

	public void LoadWorld()
	{
		SaveManager.getInstance.LocalLoad ();
	}

	public void Assembly()
	{
		GameMgr.getInstance.m_bAssembleOnly = true;
		SceneToBattle ();
	}

	public void EncountEnemy()
	{
		GameMgr.getInstance.m_bAssembleOnly = false;
		SceneToBattle ();
	}

	public void SceneToBattle()
	{
		SceneManager.LoadScene ("Battle", LoadSceneMode.Additive);

		Transform WorldTrans = GameObject.Find ("World").transform;
		for (int i = 0; i < 3; ++i) {
			WorldTrans.GetChild (i).gameObject.SetActive (false);
		}

		m_bToBattleScene = true;
	}

	public void Pollute(List<int> iPollutedList)
	{
		for (int i = 0; i < iPollutedList.Count; ++i) {
			ObjectFactory.getInstance.Create_Polluted (iPollutedList [i]);
		}
	}

	public bool bOn = true;
	public bool bOff = false;
	public void SettingBtn(bool bOn)
	{
		if (bOn) {
			GameObject.Find ("SettingPanel").GetComponent<UIPanel> ().alpha = 1;
		} else {
			GameObject.Find ("SettingPanel").GetComponent<UIPanel> ().alpha = 0;
		}
	}

	void ExitBtn()
	{
		SaveManager.getInstance.LocalSave ();

		Destroy (GameObject.Find ("Player").gameObject);

		Application.LoadLevel ("Main");
	}

	void WaitCheck()
	{
		if (GameMgr.getInstance.m_iHunger - 20 <= 0) {
			ObjectFactory.getInstance.Create_MessageBox_TwoButton(Localization.Get("Mbox_HungerChecker"), "HungerCheckerWait", "DestroyMessageBox");
		} else
			Wait ();
	}

	public void Wait()
	{
		TimeMgr.getInstance.Play ();

		Core_World coreWorld = GameObject.Find ("Core").GetComponent<Core_World> ();

//		coreWorld.m_listMoveIdx.Clear ();

		if (GameMgr.getInstance.m_iHunger - 20 > 0)
			GameObject.Find ("Hunger").GetComponent<TopBarUI> ().ChangeValue (GameMgr.getInstance.m_iHunger - 20);
		else {
			GameObject.Find ("Hunger").GetComponent<TopBarUI> ().ChangeValue (0);
			StartCoroutine(coreWorld.EatMyPart ());
		}

		StartCoroutine (EnemyCheck ());
	}

	IEnumerator EnemyCheck()
	{
		yield return new WaitForSeconds (1f);

		GameObject.Find ("Core").GetComponent<Core_World> ().CheckLocationBreak ();
	}

}
