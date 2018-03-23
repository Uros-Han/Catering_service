using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameMgr : MonoBehaviour
{

    public int m_iHunger = 100;
    public bool m_bAssembleOnly = true;
    public List<int> m_ilistCurEnemyList;
    public List<int> m_ilistCurHeroList;

    public bool m_bDeveloperMode;

    public int m_iReward;
    public int m_iDay;

    public bool m_bBGMMute;
    public bool m_bSFXMute;

    public bool m_bIsTutorial;

    private static GameMgr instance;

    public static GameMgr getInstance
    {
        get
        {
            if (instance == null)
            {
                instance = FindObjectOfType(typeof(GameMgr)) as GameMgr;
            }

            if (instance == null)
            {
                GameObject obj = new GameObject("GameMgr");
                instance = obj.AddComponent(typeof(GameMgr)) as GameMgr;
            }

            return instance;
        }
    }

    void OnApplicationQuit()
    {

        instance = null;
    }

    // Use this for initialization
    void Awake()
    {

        if (instance == null)
            instance = this;

        else if (instance != this)
            Destroy(gameObject);

        m_ilistCurEnemyList = new List<int>();
        m_ilistCurHeroList = new List<int>();

        DontDestroyOnLoad(gameObject);

        ObjectFactory.getInstance.ResourcesLoad();
        Localization.language = "Korean";

        Application.targetFrameRate = 60;
    }

    public IEnumerator ContinueGame_Coroutine()
    {
        Application.LoadLevel("World");

        yield return null;

        SaveManager.getInstance.LocalLoad();
    }

    public void ContinueGame()
    {
        StartCoroutine(ContinueGame_Coroutine());
    }

    public IEnumerator CreateGame_Coroutine()
    {
        Application.LoadLevel("World");

        yield return null;

        GameObject.Find("WorldMapManager").GetComponent<WorldMapManager>().GenerateWorld();
    }

    public void CreateGame()
    {
        StartCoroutine(CreateGame_Coroutine());
    }

    public IEnumerator TutorialGame_Coroutine()
    {
        Application.LoadLevel("World");

        yield return null;

        GameObject.Find("WorldMapManager").GetComponent<WorldMapManager>().TutorialWorld();
    }

    public void TutorialGame()
    {
        m_bIsTutorial = true;

        StartCoroutine(TutorialGame_Coroutine());
    }

    public void GameOver()
    {
        ObjectFactory.getInstance.Create_MessageBox_OneButton("GameOver", "GameOver");
    }
}
