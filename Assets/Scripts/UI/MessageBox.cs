using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MessageBox : MonoBehaviour {

	public GameObject m_functionObject;
	public string m_strFunction_0;
	public string m_strFunction_1;

	public void Function_0()
	{
		m_functionObject.SendMessage (m_strFunction_0);
	}

	public void Function_1()
	{
		m_functionObject.SendMessage (m_strFunction_1);
	}
}
