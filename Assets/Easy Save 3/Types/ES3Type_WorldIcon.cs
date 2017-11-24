using System;
using UnityEngine;

namespace ES3Types
{
	[ES3PropertiesAttribute()]
	public class ES3Type_WorldIcon : ES3ComponentType
	{
		public static ES3Type Instance = null;

		public ES3Type_WorldIcon() : base(typeof(WorldIcon))
		{
			Instance = this;
		}

		protected override void WriteComponent(object obj, ES3Writer writer)
		{
			var instance = (WorldIcon)obj;

			writer.WriteProperty<int>("iconType", instance.m_iconType);
			writer.WriteProperty<int>("gridIdx", instance.m_iGridIdx);
		}

		protected override void ReadComponent<T>(ES3Reader reader, object obj)
		{
			var instance = (WorldIcon)obj;
			foreach(string propertyName in reader.Properties)
			{
				switch(propertyName)
				{
					case "iconType":
					instance.m_iconType = reader.Read<int>();
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
	}

	public class ES3Type_WorldIconArray : ES3ArrayType
	{
		public static ES3Type Instance;

		public ES3Type_WorldIconArray() : base(typeof(WorldIcon[]), ES3Type_WorldIcon.Instance)
		{
			Instance = this;
		}
	}
}