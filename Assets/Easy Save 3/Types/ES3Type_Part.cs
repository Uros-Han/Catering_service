using System;
using UnityEngine;
using System.Collections.Generic;

namespace ES3Types
{
	[ES3PropertiesAttribute()]
	public class ES3Type_Part : ES3ObjectType
	{
		public static ES3Type Instance = null;

		public ES3Type_Part() : base(typeof(Part)){ Instance = this; }

		protected override void WriteObject(object obj, ES3Writer writer)
		{
			var instance = (Part)obj;

			writer.WriteProperty<bool> ("attackAvailable", instance.m_bAttackAvailable);
			writer.WriteProperty<bool> ("edgePart", instance.m_bEdgePart);
			writer.WriteProperty<bool> ("needToStickHead", instance.m_bNeedToStickHead);
			writer.WriteProperty<bool> ("reverseBody", instance.m_bReverseBody);
			writer.WriteProperty<bool> ("use32PixelHand", instance.m_bUse32PixelHand);
			writer.WriteProperty<float> ("curHealth", instance.m_fCurHealth);
			writer.WriteProperty<int> ("gridIdx", instance.m_iGridIdx);
			writer.WriteProperty<Dictionary<string, float>> ("dicStat", instance.m_dicStat);
			writer.WriteProperty<Dictionary<string, float>> ("dicStatBuff", instance.m_dicStatBuff);
			writer.WriteProperty<int>("enemyType", instance.m_iEnemyType);
			writer.WriteProperty<int>("saveValue", instance.m_iSaveValue);
			writer.WriteProperty<string> ("nameKey",instance.m_strNameKey);
			writer.WriteProperty<List<string>> ("listStrBuff", instance.m_lstStrBuff);
			writer.WriteProperty<int> ("lastParentPartIdx", instance.m_iLastParentPartIdx);
			writer.WriteProperty<int> ("childPartCount", instance.m_iChildPartCount);
		}

		protected override void ReadObject<T>(ES3Reader reader, object obj)
		{
			var instance = (Part)obj;
			foreach(string propertyName in reader.Properties)
			{
				switch(propertyName)
				{
				case "attackAvailable":
					instance.m_bAttackAvailable = reader.Read<bool>();
					break;
				case "edgePart":
					instance.m_bEdgePart = reader.Read<bool>();
					break;
				case "needToStickHead":
					instance.m_bNeedToStickHead = reader.Read<bool>();
					break;

				case "reverseBody":
					instance.m_bReverseBody = reader.Read<bool>();
					break;

				case "use32PixelHand":
					instance.m_bUse32PixelHand = reader.Read<bool>();
					break;

				case "curHealth":
					instance.m_fCurHealth = reader.Read<float>();
					break;

				case "gridIdx":
					instance.m_iGridIdx = reader.Read<int>();
					break;

				case "dicStat":
					instance.m_dicStat = reader.Read<Dictionary<string, float>>();
					break;

				case "dicStatBuff":
					instance.m_dicStatBuff = reader.Read<Dictionary<string, float>>();
					break;

				case "enemyType":
					instance.m_iEnemyType = reader.Read<int>();
					break;

				case "saveValue":
					instance.m_iSaveValue = reader.Read<int>();
					break;

				case "nameKey":
					instance.m_strNameKey = reader.Read<string> ();
					break;

				case "listStrBuff":
					instance.m_lstStrBuff = reader.Read<List<string>> ();
					break;

				case "lastParentPartIdx":
					instance.m_iLastParentPartIdx = reader.Read<int> ();
					break;

				case "childPartCount":
					instance.m_iChildPartCount = reader.Read<int>();
					break;

				default:
					reader.Skip();
					break;
				}
			}
		}

		protected override object ReadObject<T>(ES3Reader reader)
		{
			var instance = new Part();
			ReadObject<T>(reader, instance);
			return instance;
		}
	}

	public class ES3Type_PartArray : ES3ArrayType
	{
		public static ES3Type Instance;

		public ES3Type_PartArray() : base(typeof(Part[]), ES3Type_Part.Instance)
		{
			Instance = this;
		}
	}
}