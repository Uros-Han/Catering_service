using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MouthPanel : MonoBehaviour {

	public GameObject[] m_arrayEatenObjects;

	IEnumerator[] m_DigestBar;

	// Use this for initialization
	void Start () {
		m_arrayEatenObjects = new GameObject[3];
		m_DigestBar = new IEnumerator[3];

		for (int i = 0; i < m_DigestBar.Length; ++i) {
			m_DigestBar [i] = DigestBar (i);
		}
	}

	public int EmptyMouthIdx(){
		
		int iMouthNum = GameObject.Find ("Player").GetComponent<CoreAbilityMgr> ().m_iMouthNum;

		for (int i = 0; i < iMouthNum; ++i) {
			if (m_arrayEatenObjects [i] == null) {
				return i;
			}
		}

		return -1;
	}

	public bool isMouthFull()
	{
		int iMouthNum = GameObject.Find ("Player").GetComponent<CoreAbilityMgr> ().m_iMouthNum;

		for (int i = 0; i < iMouthNum; ++i) {
			if (m_arrayEatenObjects [i] == null) {
				return false;
			}
		}

		return true;
	}

	public void AddEnemyInMouth(GameObject objEnemy)
	{
		int iMouthNum = GameObject.Find ("Player").GetComponent<CoreAbilityMgr> ().m_iMouthNum;
		bool bMouthFulled = true;
		int iEmptyIdx = 0;
		for (int i = 0; i < iMouthNum; ++i) {
			if (m_arrayEatenObjects [i] == null) {
				bMouthFulled = false;
				iEmptyIdx = i;
				break;
			}
		}

		if (bMouthFulled)
			return;

		m_arrayEatenObjects [iEmptyIdx] = objEnemy;

		objEnemy.transform.parent = GameObject.Find ("MouthList").transform.GetChild(iEmptyIdx);
		objEnemy.transform.parent.GetComponent<SpriteMask> ().updateSprites (objEnemy.transform.parent);

		StartCoroutine (m_DigestBar[iEmptyIdx]);
	}

	IEnumerator DigestBar(int iIdx)
	{
		Unit targetUnit = m_arrayEatenObjects [iIdx].GetComponent<Unit>();
		UISlider slider = GameObject.Find ("MouthList").transform.GetChild (iIdx).GetComponent<UISlider> ();

		do{
			slider.value = targetUnit.m_fCurHealth / targetUnit.m_fHealth;
			yield return null;
		}while(targetUnit.m_fCurHealth > 0f);

		slider.value = 0f;
		m_arrayEatenObjects[iIdx] = null;
	}

	public void MouthClickIdx_0()
	{
		if (m_arrayEatenObjects [0] == null)
			return;

		StopCoroutine (m_DigestBar[0]);
		GameObject.Find ("Core").GetComponent<Core> ().StopDigest (0);

		GameObject.Find ("MouthList").transform.GetChild (0).GetComponent<UISlider> ().value = 0f;

		GameObject target = transform.Find ("MouthList").GetChild (0).GetChild (0).gameObject;

		target.transform.parent = GameObject.Find ("Enemies").transform;
		target.GetComponent<FSM_Enemy> ().m_objHealthBar.SetActive (true);
		target.GetComponent<FSM_Enemy> ().m_objHealthBar.GetComponent<UIPanel> ();
		target.transform.position = GameObject.Find ("Core").transform.position + new Vector3 (Random.Range(-0.15f, 0.15f), Random.Range(-0.15f, 0.15f));
		target.transform.localScale = Vector3.one;
		target.layer = 0;
		target.transform.SetChildLayer(0);
		target.GetComponent<FSM_Enemy> ().m_AiState = AI_STATE.MOVE;

		Material diffuse = ObjectFactory.getInstance.m_material_diffuse;
		for (int i = 0; i < target.transform.childCount; ++i) {
			target.transform.GetChild (i).GetComponent<SpriteRenderer> ().material = diffuse;
		}

		SoundMgr.getInstance.PlaySfx ("core", 0);

		m_arrayEatenObjects [0] = null;
	}
}
