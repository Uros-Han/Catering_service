using System;
using UnityEngine;

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
					instance.m_bReverseBodyObjectFactory = reader.Read<bool>();
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