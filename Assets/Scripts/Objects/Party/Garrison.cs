using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Garrison : Party
{

    // Use this for initialization
    protected override void Start()
    {
        m_strPartyName = Localization.Get("Party_Garrison");
        m_partyType = PARTY_TYPE.GARRISON;

        base.Start();
    }

}
