using System;
using UnityEngine;

namespace ES3Types
{
	[ES3PropertiesAttribute()]
	public class ES3Type_PartSaveForm : ES3ObjectType
	{
		public static ES3Type Instance = null;

		public ES3Type_PartSaveForm() : base(typeof(SaveManager.PartSaveForm)){ Instance = this; }

		protected override void WriteObject(object obj, ES3Writer writer)
		{
			var instance = (SaveManager.PartSaveForm)obj;

			writer.WriteProperty<Sprite> ("sprite", instance.m_curSprite);
			writer.WriteProperty<Sprite[]> ("spriteSheet", instance.m_curSpriteSheet);
			writer.WriteProperty<Part> ("part", instance.m_part);
		}

		protected override void ReadObject<T>(ES3Reader reader, object obj)
		{
			var instance = (SaveManager.PartSaveForm)obj;
			foreach(string propertyName in reader.Properties)
			{
				switch(propertyName)
				{
					case "sprite":
						instance.m_curSprite = reader.Read<Sprite>();
						break;
					case "spriteSheet":
						instance.m_curSpriteSheet = reader.Read<Sprite[]>();
						break;
					case "part":
						instance.m_part = reader.Read<Part>();
						break;

					default:
						reader.Skip();
						break;
				}
			}
		}

		protected override object ReadObject<T>(ES3Reader reader)
		{
			var instance = new SaveManager.PartSaveForm();
			ReadObject<T>(reader, instance);
			return instance;
		}
	}

	public class ES3Type_PartSaveFormArray : ES3ArrayType
	{
		public static ES3Type Instance;

		public ES3Type_PartSaveFormArray() : base(typeof(SaveManager.PartSaveForm[]), ES3Type_PartSaveForm.Instance)
		{
			Instance = this;
		}
	}
}