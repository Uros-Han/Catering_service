using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundMgr : Singleton<SoundMgr>
{

    public AudioClip[] m_sound_core;

    public AudioClip[] m_sound_morgue_digest;
    public AudioClip[] m_sound_morgue_place;

    public AudioClip[] m_sound_human_scream;

    public AudioClip[] m_sound_impact_blade;
    public AudioClip[] m_sound_impact_blunt;

    public AudioClip[] m_sound_weapon_onehand;
    public AudioClip[] m_sound_weapon_twohand;

    public AudioClip[] m_sound_UI;

    // Use this for initialization
    void Start()
    {
        DontDestroyOnLoad(gameObject);
    }

    AudioSource m_sfxSource;
    AudioSource m_bgmSource;

    public void SetAudioSources(bool bWorld = false)
    {

        //		m_sfxSource = Camera.main.transform.Find("SFX").GetComponent<AudioSource> ();

        if (!bWorld)
        {
            m_sfxSource = GameObject.Find("SFX").GetComponent<AudioSource>();
        }
        else
        {
            m_sfxSource = GameObject.Find("World").transform.Find("Main").Find("Main Camera").Find("SFX").GetComponent<AudioSource>();
        }
    }

    public void AudioPoolSetting()
    {
        m_sound_core = Resources.LoadAll<AudioClip>("Sounds/SFX/Core");

        m_sound_morgue_digest = Resources.LoadAll<AudioClip>("Sounds/SFX/Morgue/Digest");
        m_sound_morgue_place = Resources.LoadAll<AudioClip>("Sounds/SFX/Morgue/Place");

        m_sound_human_scream = Resources.LoadAll<AudioClip>("Sounds/SFX/Human/Scream");

        m_sound_impact_blade = Resources.LoadAll<AudioClip>("Sounds/SFX/Impact/Blade");
        m_sound_impact_blunt = Resources.LoadAll<AudioClip>("Sounds/SFX/Impact/Blunt");

        m_sound_weapon_onehand = Resources.LoadAll<AudioClip>("Sounds/SFX/Weapon/OneHand");
        m_sound_weapon_twohand = Resources.LoadAll<AudioClip>("Sounds/SFX/Weapon/TwoHand");

        m_sound_UI = Resources.LoadAll<AudioClip>("Sounds/SFX/UI");
    }

    public IEnumerator VolumeChg(bool bToUp, float fTimePara = 0)
    {
        if (GameObject.Find("BGM") == null)
            yield break;

        float fFrom, fTo;
        float fValue = 0f;
        float fTime;

        if (bToUp)
        {

            GameObject.Find("BGM").GetComponent<AudioSource>().Play();

            if (GameObject.Find("AMB") != null)
                GameObject.Find("AMB").GetComponent<AudioSource>().Play();

            AudioListener.volume = 0f;
            fFrom = 0f;
            fTo = 1f;
            fTime = 3f;
        }
        else
        {
            fFrom = 1f;
            fTo = 0f;
            fTime = 1f;
        }

        if (fTimePara != 0)
            fTime = fTimePara;

        if (Camera.main != null)
            Camera.main.GetComponent<AudioListener>().enabled = true;
        else
            UICamera.mainCamera.GetComponent<AudioListener>().enabled = true;

        do
        {
            yield return new WaitForEndOfFrame();

            fValue += (Time.unscaledDeltaTime / fTime);

            if (fValue > 1f)
                fValue = 1f;


            AudioListener.volume = Mathf.Lerp(fFrom, fTo, Mathf.SmoothStep(0.0f, 1.0f, Mathf.SmoothStep(0.0f, 1.0f, fValue)));


        } while (fValue != 1);

    }

    public void PlaySfx(string strSfx, int iBundleIdx = 0, AudioSource audioSource = default(AudioSource))
    {
        float fVolume = 1f;
#if UNITY_STANDALONE
		fVolume = PlayerPrefs.GetFloat("SoundVolume");
#else
        if (GameMgr.getInstance.m_bSFXMute)
            return;

        if (audioSource == default(AudioSource))
            audioSource = m_sfxSource;

#endif
        switch (strSfx)
        {
            case "core":
                audioSource.PlayOneShot(m_sound_core[iBundleIdx], fVolume);
                break;

            case "morgue_digest":
                audioSource.PlayOneShot(m_sound_morgue_digest[Random.Range(0, m_sound_morgue_digest.Length)], fVolume);
                break;

            case "core_place":
                audioSource.PlayOneShot(m_sound_morgue_place[0], fVolume);
                break;

            case "morgue_place":
                audioSource.PlayOneShot(m_sound_morgue_place[Random.Range(1, m_sound_morgue_place.Length)], fVolume);
                break;

            case "human_scream":
                audioSource.PlayOneShot(m_sound_human_scream[Random.Range(0, m_sound_human_scream.Length)], fVolume);
                break;

            case "impact_blade":
                audioSource.PlayOneShot(m_sound_impact_blade[Random.Range(0, m_sound_impact_blade.Length)], fVolume);
                break;
            case "impact_blunt":
                audioSource.PlayOneShot(m_sound_impact_blunt[Random.Range(0, m_sound_impact_blunt.Length)], fVolume);
                break;

            case "weapon_onehand":
                audioSource.PlayOneShot(m_sound_weapon_onehand[Random.Range(0, m_sound_weapon_onehand.Length)], fVolume);
                break;
            case "weapon_twohand":
                audioSource.PlayOneShot(m_sound_weapon_twohand[Random.Range(0, m_sound_weapon_twohand.Length)], fVolume);
                break;

            case "ui":
                audioSource.PlayOneShot(m_sound_UI[iBundleIdx], fVolume);
                break;

            default:
                Debug.LogError("SFX_AudioName Error : " + strSfx);
                break;
        }
    }
}
