using System;
using UnityEngine;
using System.Collections.Generic;

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
            writer.WriteProperty<float>("fProsperity", instance.m_fProsperity);
            writer.WriteProperty<float>("fPopulation", instance.m_fPopulation);
            writer.WriteProperty<int>("iRaided", instance.m_iRaided);
            writer.WriteProperty<List<int>>("list_enemyType", instance.m_list_enemyType);
            writer.WriteProperty<float>("coolTime", instance.m_fCoolTime);
            writer.WriteProperty<float>("curCoolTime", instance.m_fCurCoolTime);
            writer.WriteProperty<bool>("readySacrifice", instance.m_bReadySacrifice);
        }

        protected override void ReadComponent<T>(ES3Reader reader, object obj)
        {
            var instance = (WorldIcon)obj;
            foreach (string propertyName in reader.Properties)
            {
                switch (propertyName)
                {
                    case "iconType":
                        instance.m_iconType = reader.Read<int>();
                        break;
                    case "gridIdx":
                        instance.m_iGridIdx = reader.Read<int>();
                        break;

                    case "fProsperity":
                        instance.m_fProsperity = reader.Read<float>();
                        break;

                    case "fPopulation":
                        instance.m_fPopulation = reader.Read<float>();
                        break;

                    case "iRaided":
                        instance.m_iRaided = reader.Read<int>();
                        break;

                    case "list_enemyType":
                        instance.m_list_enemyType = reader.Read<List<int>>();
                        break;

                    case "coolTime":
                        instance.m_fCoolTime = reader.Read<float>();
                        break;

                    case "curCoolTime":
                        instance.m_fCurCoolTime = reader.Read<float>();
                        break;

                    case "readySacrifice":
                        instance.m_bReadySacrifice = reader.Read<bool>();
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