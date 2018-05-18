using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectFactory : Singleton<ObjectFactory>
{


    void Awake()
    {
        DontDestroyOnLoad(gameObject);
    }

    GameObject m_objAleart;
    GameObject m_objBuff;
    GameObject m_objStickableDot;
    GameObject m_objPoop;
    GameObject m_HealthBar;
    GameObject m_DamageUI;
    GameObject m_Part;
    GameObject m_Part_Animator;
    GameObject m_MessageBox;
    GameObject m_AleartMsg;
    GameObject m_objArrow;

    GameObject m_objChicken;
    GameObject m_objGoat;
    GameObject[] m_objHero;
    GameObject m_objHuman;

    GameObject m_WorldIcon;
    GameObject m_WorldGeo;
    GameObject m_Polluted;

    GameObject m_objParty;
    GameObject[] m_objHeroParty;
    GameObject m_objPartyUI;

    GameObject m_objHeroAura;

    public Sprite m_sprite_meat;
    public Sprite[] m_sheet_core;

    public Sprite[] m_sheet_chicken_0;
    public Sprite[] m_sheet_goat_0;

    int m_iCivlian_body_count;
    public Sprite[] m_sheet_civilian_head;
    public Sprite[] m_sheet_civilian_leg;
    public Sprite[] m_sheet_civilian_arm;
    public Sprite m_civilian_arm_left;
    public Sprite[][] m_sheet_civilian_body;
    public Texture2D m_texture_skin_palette;
    public Texture2D m_texture_hair_palette;
    public Texture2D m_texture_bow_palette;

    int m_iMercenary_body_count;
    public Sprite[] m_sheet_mercenary_head;
    public Sprite[] m_sheet_mercenary_leg;
    public Sprite[] m_sheet_mercenary_arm;
    public Sprite[] m_sheet_mercenary_arm_left;
    public Sprite[][] m_sheet_mercenary_body;

    int m_iKnight_body_count;
    public Sprite[] m_sheet_knight_head;
    public Sprite[] m_sheet_knight_leg;
    public Sprite[] m_sheet_knight_arm;
    public Sprite[] m_sheet_knight_arm_left;
    public Sprite[][] m_sheet_knight_body;

    public Sprite[] m_sheet_worldicon;
    public Sprite[] m_sheet_worldGeo;

    public Sprite[] m_sheet_flag;

    public Sprite[] m_sheet_PartyStateIndicator;

    public Sprite[] m_sprites_Projectile;

    GameObject m_objRoad;
    public Sprite[] m_sheet_Road;

    GameObject m_objWall;
    public Sprite[] m_sheet_Wall;

    public Material m_material_diffuse;
    public Material m_material_SpritePaletteLightingMaterial;

    RuntimeAnimatorController[] m_weapon_anim_controller;

    // Use this for initialization
    public void ResourcesLoad()
    {
        m_objAleart = Resources.Load("Prefabs/Objects/Aleart") as GameObject;
        m_objBuff = Resources.Load("Prefabs/Objects/Buff") as GameObject;
        m_objStickableDot = Resources.Load("Prefabs/Objects/StickableDot") as GameObject;
        m_objPoop = Resources.Load("Prefabs/Objects/PoopParticle") as GameObject;
        m_HealthBar = Resources.Load("Prefabs/UI/HealthBar") as GameObject;
        m_DamageUI = Resources.Load("Prefabs/UI/DamageUI") as GameObject;
        m_MessageBox = Resources.Load("Prefabs/UI/MessageBox") as GameObject;
        m_AleartMsg = Resources.Load("Prefabs/UI/AleartMsg") as GameObject;
        m_objArrow = Resources.Load("Prefabs/Objects/Arrow") as GameObject;

        m_sprite_meat = Resources.Load<Sprite>("Sprites/Meat");
        m_sheet_flag = Resources.LoadAll<Sprite>("Sprites/Sheets/sheet_flags");

        m_sheet_core = Resources.LoadAll<Sprite>("Sprites/Sheets/sheet_core");
        m_Part = Resources.Load("Prefabs/Objects/Part") as GameObject;
        m_Part_Animator = Resources.Load("Prefabs/Objects/AnimationPosSetter") as GameObject;

        ///Livestocks
        m_sheet_chicken_0 = Resources.LoadAll<Sprite>("Sprites/Sheets/Livestock/sheet_chicken_0");
        m_sheet_goat_0 = Resources.LoadAll<Sprite>("Sprites/Sheets/Livestock/sheet_goat_0");

        m_objChicken = Resources.Load("Prefabs/Objects/Enemies/Chicken") as GameObject;
        m_objGoat = Resources.Load("Prefabs/Objects/Enemies/Goat") as GameObject;

        //Heroes
        m_objHero = Resources.LoadAll<GameObject>("Prefabs/Objects/Enemies/Heroes");

        ///Civilians
        m_sheet_civilian_head = Resources.LoadAll<Sprite>("Sprites/Sheets/Civilian/sheet_civ_heads");
        m_sheet_civilian_leg = Resources.LoadAll<Sprite>("Sprites/Sheets/Civilian/sheet_civ_legs");
        m_sheet_civilian_arm = Resources.LoadAll<Sprite>("Sprites/Sheets/Civilian/sheet_civ_arms");
        m_civilian_arm_left = Resources.Load<Sprite>("Sprites/Sheets/Civilian/sheet_civ_arms_left");
        m_iCivlian_body_count = 9;
        m_sheet_civilian_body = new Sprite[m_iCivlian_body_count][];
        for (int i = 0; i < m_iCivlian_body_count; ++i)
        {
            m_sheet_civilian_body[i] = Resources.LoadAll<Sprite>(string.Format("Sprites/Sheets/Civilian/sheet_civ_body_{0}", i));
        }
        m_objHuman = Resources.Load("Prefabs/Objects/Enemies/Human") as GameObject;
        m_texture_skin_palette = Resources.Load<Texture2D>("Palette/Skin/Skin.paltex");
        m_texture_hair_palette = Resources.Load<Texture2D>("Palette/Hair/Hair.paltex");
        m_texture_bow_palette = Resources.Load<Texture2D>("Palette/Bow/Bow.paltex");

        ///Mercenaries
        m_sheet_mercenary_head = Resources.LoadAll<Sprite>("Sprites/Sheets/Mercenary/sheet_mer_heads");
        m_sheet_mercenary_leg = Resources.LoadAll<Sprite>("Sprites/Sheets/Mercenary/sheet_mer_legs");
        m_sheet_mercenary_arm = Resources.LoadAll<Sprite>("Sprites/Sheets/Mercenary/sheet_mer_arms");
        m_sheet_mercenary_arm_left = Resources.LoadAll<Sprite>("Sprites/Sheets/Mercenary/sheet_mer_arms_left");
        m_iMercenary_body_count = 5;
        m_sheet_mercenary_body = new Sprite[m_iMercenary_body_count][];
        for (int i = 0; i < m_iMercenary_body_count; ++i)
        {
            m_sheet_mercenary_body[i] = Resources.LoadAll<Sprite>(string.Format("Sprites/Sheets/Mercenary/sheet_mer_body_{0}", i));
        }

        //Knights
        m_sheet_knight_head = Resources.LoadAll<Sprite>("Sprites/Sheets/Knight/sheet_kni_heads");
        m_sheet_knight_leg = Resources.LoadAll<Sprite>("Sprites/Sheets/Knight/sheet_kni_legs");
        m_sheet_knight_arm = Resources.LoadAll<Sprite>("Sprites/Sheets/Knight/sheet_kni_arms");
        m_sheet_knight_arm_left = Resources.LoadAll<Sprite>("Sprites/Sheets/Knight/sheet_kni_arms_left");
        m_iKnight_body_count = 1;
        m_sheet_knight_body = new Sprite[m_iKnight_body_count][];
        for (int i = 0; i < m_iKnight_body_count; ++i)
        {
            m_sheet_knight_body[i] = Resources.LoadAll<Sprite>(string.Format("Sprites/Sheets/Knight/sheet_kni_body_{0}", i));
        }

        //WorldMap
        m_WorldIcon = Resources.Load("Prefabs/Objects/World/WorldIcon") as GameObject;
        m_sheet_worldicon = Resources.LoadAll<Sprite>("Sprites/Sheets/World_Icon");
        m_WorldGeo = Resources.Load("Prefabs/Objects/World/WorldGeo") as GameObject;
        m_sheet_worldGeo = Resources.LoadAll<Sprite>("Sprites/Sheets/World_Geo");
        m_Polluted = Resources.Load("Prefabs/Objects/World/Polluted") as GameObject;

        m_objParty = Resources.Load("Prefabs/Objects/Enemies/World/Party") as GameObject;
        m_objHeroParty = Resources.LoadAll<GameObject>("Prefabs/Objects/Enemies/World/Party_Hero");
        m_objPartyUI = Resources.Load("Prefabs/UI/PartyUI") as GameObject;

        m_sheet_PartyStateIndicator = Resources.LoadAll<Sprite>("Sprites/UI/PartyStateIndicator");

        m_objRoad = Resources.Load("Prefabs/Objects/World/Road") as GameObject;
        m_sheet_Road = Resources.LoadAll<Sprite>("Sprites/Sheets/sheet_world_road");
        m_objWall = Resources.Load("Prefabs/Objects/World/Wall") as GameObject;
        m_sheet_Wall = Resources.LoadAll<Sprite>("Sprites/Sheets/sheet_world_wall");

        m_material_diffuse = Resources.Load<Material>("Materials/Diffuse");
        m_material_SpritePaletteLightingMaterial = Resources.Load<Material>("Materials/SpritePaletteLightingMaterial");

        m_weapon_anim_controller = new RuntimeAnimatorController[6];
        m_weapon_anim_controller[0] = Resources.Load<RuntimeAnimatorController>("Animations/OneHand/oneHand");
        m_weapon_anim_controller[1] = Resources.Load<RuntimeAnimatorController>("Animations/TwoHand/twoHand");
        m_weapon_anim_controller[2] = Resources.Load<RuntimeAnimatorController>("Animations/Pole/pole");
        m_weapon_anim_controller[3] = Resources.Load<RuntimeAnimatorController>("Animations/Javelin/javelin");
        m_weapon_anim_controller[4] = Resources.Load<RuntimeAnimatorController>("Animations/Bow/bow");
        m_weapon_anim_controller[5] = Resources.Load<RuntimeAnimatorController>("Animations/CrossBow/crossBow");

        m_objHeroAura = Resources.Load("Prefabs/Objects/Enemies/HeroAura") as GameObject;

        m_sprites_Projectile = Resources.LoadAll<Sprite>("Sprites/Projectiles");

        SoundMgr.getInstance.AudioPoolSetting();
    }

    public GameObject Create_Projectile(Vector3 createPos, WEAPON_TYPE weaponType, GameObject target, float fDamage)
    {
        GameObject obj = Instantiate(m_objArrow, createPos, Quaternion.AngleAxis(0, Vector3.forward)) as GameObject;
        obj.transform.parent = GameObject.Find("Projectiles").transform;

        Projectile objProjectile = obj.GetComponent<Projectile>();
        if (target.transform.parent.name.Equals("Player"))
            objProjectile.m_bHeadingToEnemy = false;
        else
            objProjectile.m_bHeadingToEnemy = true;

        objProjectile.m_WeaponType = weaponType;
        objProjectile.m_fDamage = fDamage;
        objProjectile.m_objTarget = target;

        return obj;
    }

    /// int iDir
    /// 0 -  1  - 2
    /// 3 - (4) - 5
    /// 6 -  7  - 8
    public GameObject Create_Road(int iDir, Vector3 pos)
    {
        GameObject obj = Instantiate(m_objRoad) as GameObject;
        obj.transform.parent = GameObject.Find("Roads").transform;
        obj.transform.position = pos;
        obj.GetComponent<SpriteRenderer>().sprite = m_sheet_Road[iDir];
        obj.AddComponent<PolygonCollider2D>();
        obj.GetComponent<PolygonCollider2D>().isTrigger = true;

        return obj;
    }

    public GameObject Create_Wall(int iWallIdx, Vector3 pos, GameObject objIcon)
    {
        GameObject obj = Instantiate(m_objWall) as GameObject;
        obj.transform.parent = GameObject.Find("Walls").transform;
        obj.transform.position = pos;
        obj.GetComponent<SpriteRenderer>().sprite = m_sheet_Wall[iWallIdx];
        objIcon.GetComponent<WorldIcon>().m_objWall = obj;
        objIcon.GetComponent<WorldIcon>().m_iWallIdx = iWallIdx;

        return obj;
    }

    public GameObject Create_HeroAura(GameObject objHero)
    {
        GameObject obj = Instantiate(m_objHeroAura) as GameObject;
        obj.transform.parent = GameObject.Find("Auras").transform;
        obj.GetComponent<HeroAura>().m_objOwner = objHero;

        return obj;
    }

    public GameObject Create_Aleart(int iIdx)
    {
        GameObject obj = Instantiate(m_objAleart) as GameObject;
        obj.transform.parent = GameObject.Find("Alearts").transform;
        obj.transform.position = GridMgr.getInstance.GetPosOfIdx(iIdx);

        return obj;
    }

    public GameObject Create_Buff(int iIdx, bool bGreen, bool bAlpha)
    {
        GameObject obj = Instantiate(m_objBuff) as GameObject;
        obj.transform.parent = GameObject.Find("Buffs").transform;
        obj.transform.position = GridMgr.getInstance.GetPosOfIdx(iIdx);

        if (bGreen)
        {
            if (bAlpha)
                obj.GetComponent<SpriteRenderer>().color = new Color(0, 218 / 255f, 46 / 255f, 100 / 255f);
            else
                obj.GetComponent<SpriteRenderer>().color = new Color(0, 218 / 255f, 46 / 255f);
        }
        else
        {
            if (bAlpha)
                obj.GetComponent<SpriteRenderer>().color = new Color(236 / 255f, 14 / 255f, 14 / 255f, 100 / 255f);
            else
                obj.GetComponent<SpriteRenderer>().color = new Color(236 / 255f, 14 / 255f, 14 / 255f);
        }

        return obj;
    }

    public GameObject Create_StickableDot(int iIdx, Color color = default(Color))
    {
        GameObject obj = Instantiate(m_objStickableDot) as GameObject;
        obj.transform.parent = GameObject.Find("StickableDots").transform;
        obj.transform.position = GridMgr.getInstance.GetPosOfIdx(iIdx);

        if (color != default(Color))
            obj.GetComponent<SpriteRenderer>().color = color;

        return obj;
    }

    public GameObject Create_WorldIcon(Vector3 pos, int type = 0)
    {
        GameObject obj = Instantiate(m_WorldIcon) as GameObject;
        obj.transform.parent = GameObject.Find("WorldIcons").transform;
        WorldIcon worldIcon = obj.GetComponent<WorldIcon>();

        worldIcon.m_iconType = type;
        worldIcon.m_iGridIdx = GridMgr.getInstance.GetGridIdx(pos);

        worldIcon.Init();

        return obj;
    }

    public GameObject Create_WorldGeo(Vector3 pos, int iType = 1)
    {
        GameObject obj = Instantiate(m_WorldGeo) as GameObject;
        obj.transform.parent = GameObject.Find("Geo").transform;
        obj.transform.position = pos;

        switch (iType)
        {
            case (int)WORLD_GEO.GRASS:
                obj.GetComponent<WorldGeo>().m_geoStatus = WORLD_GEO.GRASS;
                obj.GetComponent<SpriteRenderer>().sprite = m_sheet_worldGeo[0];
                break;

            case (int)WORLD_GEO.WATER:
                obj.GetComponent<WorldGeo>().m_geoStatus = WORLD_GEO.WATER;
                obj.GetComponent<SpriteRenderer>().sprite = m_sheet_worldGeo[1];
                break;
            case (int)WORLD_GEO.CLIFF:
                obj.GetComponent<WorldGeo>().m_geoStatus = WORLD_GEO.CLIFF;
                obj.GetComponent<SpriteRenderer>().sprite = m_sheet_worldGeo[2];
                break;

            case (int)WORLD_GEO.FOREST:
                obj.GetComponent<WorldGeo>().m_geoStatus = WORLD_GEO.FOREST;
                obj.GetComponent<SpriteRenderer>().sprite = m_sheet_worldGeo[3];
                break;
        }

        return obj;
    }

    public GameObject Create_Polluted(int iGrid)
    {
        GameObject obj = Instantiate(m_Polluted) as GameObject;
        obj.transform.parent = GameObject.Find("Geo").transform.GetChild(iGrid);
        obj.transform.position = GridMgr.getInstance.GetPosOfIdx(iGrid);
        obj.transform.parent.GetComponent<WorldGeo>().m_bPolluted = true;

        return obj;
    }

    public GameObject Create_Party(int iGrid, PARTY_TYPE partyType, int iHeroNum = -1)
    {
        GameObject obj;
        if (iHeroNum == -1)
            obj = Instantiate(m_objParty) as GameObject;
        else
            obj = Instantiate(m_objHeroParty[iHeroNum]) as GameObject;

        obj.transform.parent = GameObject.Find("Party").transform;
        obj.transform.position = GridMgr.getInstance.GetPosOfIdx(iGrid);

        ENEMY_TYPE enemyType = ENEMY_TYPE.CIVILIAN;
        List<int> enemyList = new List<int>();
        enemyList = GameObject.Find("Geo").transform.GetChild(iGrid).GetComponent<WorldGeo>().m_worldIcon.GetComponent<WorldIcon>().m_list_enemyType;
        for (int i = 0; i < enemyList.Count; ++i)
        {
            if ((int)enemyType < enemyList[i])
                enemyType = (ENEMY_TYPE)enemyList[i];
        }

        if (iHeroNum != -1)
        {
            obj.GetComponent<Party>().m_iHero = iHeroNum;
        }

        if (iHeroNum == -1)
        {
            switch (enemyType)
            {
                case ENEMY_TYPE.CIVILIAN:
                    obj.transform.GetChild(0).GetComponent<SpriteRenderer>().sprite = m_sheet_civilian_head[Random.Range(0, m_sheet_civilian_head.Length)];
                    obj.transform.GetChild(1).GetComponent<SpriteRenderer>().sprite = m_sheet_civilian_body[Random.Range(0, m_sheet_civilian_body.Length)][0];
                    obj.transform.GetChild(2).GetComponent<SpriteRenderer>().sprite = m_sheet_civilian_leg[Random.Range(0, m_sheet_civilian_leg.Length)];
                    break;

                case ENEMY_TYPE.MERCENARY:
                    obj.transform.GetChild(0).GetComponent<SpriteRenderer>().sprite = m_sheet_mercenary_head[Random.Range(0, m_sheet_mercenary_head.Length)];
                    obj.transform.GetChild(1).GetComponent<SpriteRenderer>().sprite = m_sheet_mercenary_body[Random.Range(0, m_sheet_mercenary_body.Length)][0];
                    obj.transform.GetChild(2).GetComponent<SpriteRenderer>().sprite = m_sheet_mercenary_leg[Random.Range(0, m_sheet_mercenary_leg.Length)];
                    obj.transform.GetChild(3).GetComponent<SpriteRenderer>().sprite = m_sheet_mercenary_arm_left[0];
                    obj.transform.GetChild(4).GetComponent<SpriteRenderer>().sprite = m_sheet_mercenary_arm[m_sheet_mercenary_arm.Length - 1];
                    break;

                case ENEMY_TYPE.KNIGHT:
                    obj.transform.GetChild(0).GetComponent<SpriteRenderer>().sprite = m_sheet_knight_head[Random.Range(0, m_sheet_knight_head.Length)];
                    obj.transform.GetChild(1).GetComponent<SpriteRenderer>().sprite = m_sheet_knight_body[Random.Range(0, m_sheet_knight_body.Length)][0];
                    obj.transform.GetChild(2).GetComponent<SpriteRenderer>().sprite = m_sheet_knight_leg[Random.Range(0, m_sheet_knight_leg.Length)];
                    obj.transform.GetChild(3).GetComponent<SpriteRenderer>().sprite = m_sheet_knight_arm_left[0];
                    obj.transform.GetChild(4).GetComponent<SpriteRenderer>().sprite = m_sheet_knight_arm[m_sheet_knight_arm.Length - 1];
                    break;
            }

            switch (partyType)
            {
                case PARTY_TYPE.CARAVAN:
                    switch (enemyType)
                    {
                        case ENEMY_TYPE.CIVILIAN:
                            obj.transform.GetChild(4).GetComponent<SpriteRenderer>().sprite = m_civilian_arm_left;
                            break;

                        case ENEMY_TYPE.MERCENARY:
                            obj.transform.GetChild(4).GetComponent<SpriteRenderer>().sprite = m_sheet_mercenary_arm_left[0];
                            break;

                        case ENEMY_TYPE.KNIGHT:
                            obj.transform.GetChild(4).GetComponent<SpriteRenderer>().sprite = m_sheet_knight_arm_left[0];
                            break;
                    }
                    obj.transform.GetChild(4).GetComponent<SpriteRenderer>().sortingOrder = 0;
                    obj.transform.GetChild(4).localScale = new Vector3(-1, 1, 1);
                    obj.transform.GetChild(4).localPosition = new Vector2(-0.13f, 0.08f);
                    obj.transform.Find("Flag").gameObject.SetActive(false);
                    obj.AddComponent<Caravan>();
                    obj.GetComponent<Party>().m_iSpeed = Random.Range(0, 3);
                    break;

                case PARTY_TYPE.RAID:
                    obj.transform.Find("Wagon").gameObject.SetActive(false);
                    obj.transform.Find("Flag").GetComponent<SpriteRenderer>().sprite = m_sheet_flag[Random.Range(0, m_sheet_flag.Length)];
                    obj.AddComponent<Raider>();
                    obj.GetComponent<Party>().m_iSpeed = GameObject.Find("PartStatus").GetComponent<PartStatus>().m_iSpeed + Random.Range(-2, 2);
                    if (obj.GetComponent<Party>().m_iSpeed < 0)
                        obj.GetComponent<Party>().m_iSpeed = 0;
                    break;
            }
        }



        return obj;
    }

    public GameObject Create_PartAnimator(Transform parent)
    {
        GameObject obj = Instantiate(m_Part_Animator) as GameObject;
        obj.transform.parent = parent;
        obj.transform.localPosition = Vector3.zero;
        obj.transform.localScale = Vector3.one;
        obj.transform.localRotation = Quaternion.AngleAxis(0f, Vector3.forward);
        obj.transform.GetChild(0).GetComponent<SpriteRenderer>().sprite = parent.GetComponent<SpriteRenderer>().sprite;
        obj.transform.GetChild(0).GetComponent<Animator>().runtimeAnimatorController = m_weapon_anim_controller[(int)parent.GetComponent<Part>().m_weaponType];

        if (parent.GetComponent<Part>().m_weaponType == WEAPON_TYPE.BOW)
        {
            obj.transform.GetChild(0).GetComponent<DPSpritePalette>().paletteTexture = m_texture_bow_palette;
            obj.transform.GetChild(0).GetComponent<DPSpritePalette>().PaletteIndex = parent.GetComponent<DPSpritePalette>().PaletteIndex;
        }
        else
            obj.transform.GetChild(0).GetComponent<DPSpritePalette>().paletteTexture = m_texture_skin_palette;
        //		parent.GetComponent<SpriteRenderer> ().enabled = false;

        return obj;
    }

    public GameObject Create_PartyUI(Transform ownerTrans)
    {
        GameObject obj = Instantiate(m_objPartyUI) as GameObject;
        obj.transform.parent = GameObject.Find("PartyUI").transform;
        obj.transform.GetComponent<UIFollowTarget>().target = ownerTrans;
        obj.transform.localScale = Vector3.one;

        return obj;
    }

    public GameObject Create_Part(Part part, string name, float rotation, float scaleX)
    {
        GameObject obj = Instantiate(m_Part) as GameObject;
        obj.transform.parent = GameObject.Find("Player").transform;
        obj.transform.position = GridMgr.getInstance.GetPosOfIdx(part.m_iGridIdx, GRID_STATE.BATTLE);
        obj.transform.localRotation = Quaternion.AngleAxis(rotation, Vector3.forward);
        obj.transform.localScale = new Vector3(scaleX, 1, 1);
        obj.gameObject.name = name;

        Part cpart = obj.GetComponent<Part>();
        System.Reflection.FieldInfo[] fields = cpart.GetType().GetFields();
        foreach (System.Reflection.FieldInfo field in fields)
        {
            field.SetValue(cpart, field.GetValue(part));
        }

        cpart.m_bLoadedPart = true;
        cpart.SetListBuff();

        switch (part.m_iEnemyType)
        {
            case (int)ENEMY_TYPE.CIVILIAN:
                if (name.Contains("Head"))
                {
                    obj.GetComponent<SpriteRenderer>().sprite = m_sheet_civilian_head[part.m_iSaveValue];
                }
                else if (name.Contains("Body"))
                {
                    obj.GetComponent<SpriteRenderer>().sprite = m_sheet_civilian_body[part.m_iSaveValue][0];
                    obj.GetComponent<SpriteSheet>().m_sheet_sprite = m_sheet_civilian_body[part.m_iSaveValue];
                }
                else if (name.Contains("Hand"))
                {
                    obj.GetComponent<SpriteRenderer>().sprite = m_sheet_civilian_arm[part.m_iSaveValue];
                }
                else if (name.Contains("Leg"))
                {
                    obj.GetComponent<SpriteRenderer>().sprite = m_sheet_civilian_leg[part.m_iSaveValue];
                }

                break;

            case (int)ENEMY_TYPE.MERCENARY:
                if (name.Contains("Head"))
                {
                    obj.GetComponent<SpriteRenderer>().sprite = m_sheet_mercenary_head[part.m_iSaveValue];
                }
                else if (name.Contains("Body"))
                {
                    obj.GetComponent<SpriteRenderer>().sprite = m_sheet_mercenary_body[part.m_iSaveValue][0];
                    obj.GetComponent<SpriteSheet>().m_sheet_sprite = m_sheet_mercenary_body[part.m_iSaveValue];
                }
                else if (name.Contains("Hand_R"))
                {
                    obj.GetComponent<SpriteRenderer>().sprite = m_sheet_mercenary_arm[part.m_iSaveValue];
                }
                else if (name.Contains("Hand_L"))
                {
                    obj.GetComponent<SpriteRenderer>().sprite = m_sheet_mercenary_arm_left[part.m_iSaveValue];
                }
                else if (name.Contains("Leg"))
                {
                    obj.GetComponent<SpriteRenderer>().sprite = m_sheet_mercenary_leg[part.m_iSaveValue];
                }

                break;

            case (int)ENEMY_TYPE.KNIGHT:
                if (name.Contains("Head"))
                {
                    obj.GetComponent<SpriteRenderer>().sprite = m_sheet_knight_head[part.m_iSaveValue];
                }
                else if (name.Contains("Body"))
                {
                    obj.GetComponent<SpriteRenderer>().sprite = m_sheet_knight_body[part.m_iSaveValue][0];
                    obj.GetComponent<SpriteSheet>().m_sheet_sprite = m_sheet_knight_body[part.m_iSaveValue];
                }
                else if (name.Contains("Hand_R"))
                {
                    obj.GetComponent<SpriteRenderer>().sprite = m_sheet_knight_arm[part.m_iSaveValue];
                }
                else if (name.Contains("Hand_L"))
                {
                    obj.GetComponent<SpriteRenderer>().sprite = m_sheet_knight_arm_left[part.m_iSaveValue];
                }
                else if (name.Contains("Leg"))
                {
                    obj.GetComponent<SpriteRenderer>().sprite = m_sheet_knight_leg[part.m_iSaveValue];
                }
                break;

            case (int)ENEMY_TYPE.HERO:

                string strDirectoryName = "";

                switch (part.m_iSaveValue)
                { // used to hero index
                    case (int)HERO.WALLACE:
                        #region wallace
                        if (name.Equals("Head"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>("Sprites/Sheets/Heroes/0.Wallace/wallace_head_0");
                        }
                        else if (name.Equals("Body"))
                        {
                            switch (obj.GetComponent<Part>().m_iSaveChildIdx)
                            {
                                case 0:
                                    obj.GetComponent<SpriteSheet>().m_sheet_sprite = Resources.LoadAll<Sprite>("Sprites/Sheets/Heroes/0.Wallace/sheet_wallace_body_0");
                                    obj.GetComponent<SpriteRenderer>().sprite = obj.GetComponent<SpriteSheet>().m_sheet_sprite[0];
                                    break;

                                case 1:
                                    obj.GetComponent<SpriteSheet>().m_sheet_sprite = Resources.LoadAll<Sprite>("Sprites/Sheets/Heroes/0.Wallace/sheet_wallace_body_1");
                                    obj.GetComponent<SpriteRenderer>().sprite = obj.GetComponent<SpriteSheet>().m_sheet_sprite[0];
                                    break;
                            }
                        }
                        else if (name.Equals("Leg"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>("Sprites/Sheets/Heroes/0.Wallace/wallace_legs_0");
                        }
                        else if (name.Equals("Hand_R"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>("Sprites/Sheets/Heroes/0.Wallace/wallace_arms_0");
                        }
                        #endregion
                        break;

                    case (int)HERO.ROBIN:
                        #region robin
                        if (name.Equals("Head"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>("Sprites/Sheets/Heroes/1.Robin/robin_head_0");
                        }
                        else if (name.Equals("Body"))
                        {
                            obj.GetComponent<SpriteSheet>().m_sheet_sprite = Resources.LoadAll<Sprite>("Sprites/Sheets/Heroes/1.Robin/sheet_robin_body_0");
                            obj.GetComponent<SpriteRenderer>().sprite = obj.GetComponent<SpriteSheet>().m_sheet_sprite[0];
                        }
                        else if (name.Equals("Leg"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>("Sprites/Sheets/Heroes/1.Robin/robin_legs_0");
                        }
                        else if (name.Equals("Hand_R"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = m_sheet_mercenary_arm[6];
                            ObjectFactory.getInstance.Create_PartAnimator(obj.transform);
                            obj.GetComponent<SpriteRenderer>().enabled = false;
                            obj.transform.GetChild(0).GetChild(0).GetComponent<SpriteRenderer>().enabled = true;
                            obj.transform.GetChild(0).GetChild(0).GetComponent<Animator>().enabled = true;
                            obj.transform.GetChild(0).GetChild(0).GetComponent<DPSpritePalette>().paletteTexture = m_texture_bow_palette;
                            obj.transform.GetChild(0).GetChild(0).GetComponent<DPSpritePalette>().PaletteIndex = 3;

                            obj.GetComponent<DPSpritePalette>().paletteTexture = m_texture_bow_palette;
                            obj.GetComponent<DPSpritePalette>().PaletteIndex = 3;
                        }
                        #endregion
                        break;

                    case (int)HERO.ADAM:
                        #region adam
                        if (name.Equals("Head"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>("Sprites/Sheets/Heroes/2.Adam/adam_head_0");
                        }
                        else if (name.Equals("Body"))
                        {
                            obj.GetComponent<SpriteSheet>().m_sheet_sprite = Resources.LoadAll<Sprite>("Sprites/Sheets/Heroes/2.Adam/sheet_adam_body_0");
                            obj.GetComponent<SpriteRenderer>().sprite = obj.GetComponent<SpriteSheet>().m_sheet_sprite[0];
                        }
                        else if (name.Equals("Leg"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>("Sprites/Sheets/Heroes/2.Adam/adam_legs_0");
                        }
                        else if (name.Equals("Hand_R"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>("Sprites/Sheets/Heroes/2.Adam/adam_arms_0");
                        }
                        else if (name.Equals("Hand_L"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>("Sprites/Sheets/Heroes/2.Adam/adam_arms_0");
                        }
                        #endregion
                        break;

                    case (int)HERO.HANK:
                        #region hank

                        strDirectoryName = "3.Hank";

                        if (name.Equals("Head"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/head_0", strDirectoryName));
                        }
                        else if (name.Equals("Body"))
                        {
                            obj.GetComponent<SpriteSheet>().m_sheet_sprite = Resources.LoadAll<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/sheet_body_0", strDirectoryName));
                            obj.GetComponent<SpriteRenderer>().sprite = obj.GetComponent<SpriteSheet>().m_sheet_sprite[0];
                            break;
                        }
                        else if (name.Equals("Leg"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/legs_0", strDirectoryName));
                        }
                        else if (name.Equals("Hand_R"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/arms_0", strDirectoryName));
                        }
                        #endregion
                        break;

                    case (int)HERO.GAWEN:
                        #region gawen

                        strDirectoryName = "4.Gawen";

                        if (name.Equals("Head"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/head_0", strDirectoryName));
                        }
                        else if (name.Equals("Body"))
                        {
                            obj.GetComponent<SpriteSheet>().m_sheet_sprite = Resources.LoadAll<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/sheet_body_0", strDirectoryName));
                            obj.GetComponent<SpriteRenderer>().sprite = obj.GetComponent<SpriteSheet>().m_sheet_sprite[0];
                            break;
                        }
                        else if (name.Equals("Leg"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/legs_0", strDirectoryName));
                        }
                        else if (name.Equals("Hand_R"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/arms_0", strDirectoryName));
                        }
                        #endregion
                        break;

                    case (int)HERO.OWIN:
                        #region owin

                        strDirectoryName = "5.Owin";

                        if (name.Equals("Head"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/head_0", strDirectoryName));
                        }
                        else if (name.Equals("Body"))
                        {
                            obj.GetComponent<SpriteSheet>().m_sheet_sprite = Resources.LoadAll<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/sheet_body_0", strDirectoryName));
                            obj.GetComponent<SpriteRenderer>().sprite = obj.GetComponent<SpriteSheet>().m_sheet_sprite[0];
                            break;
                        }
                        else if (name.Equals("Leg"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/legs_0", strDirectoryName));
                        }
                        else if (name.Equals("Hand_R"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/arms_0", strDirectoryName));
                        }
                        else if (name.Equals("Hand_L"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/arms_1", strDirectoryName));
                        }
                        #endregion
                        break;

                    case (int)HERO.GALE:
                        #region gale

                        strDirectoryName = "6.Gale";

                        if (name.Equals("Head"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/head_0", strDirectoryName));
                        }
                        else if (name.Equals("Body"))
                        {
                            obj.GetComponent<SpriteSheet>().m_sheet_sprite = Resources.LoadAll<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/sheet_body_0", strDirectoryName));
                            obj.GetComponent<SpriteRenderer>().sprite = obj.GetComponent<SpriteSheet>().m_sheet_sprite[0];
                            break;
                        }
                        else if (name.Equals("Leg"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/legs_0", strDirectoryName));
                        }
                        #endregion
                        break;

                    case (int)HERO.RICHARD:
                        #region richard

                        strDirectoryName = "7.Richard";

                        if (name.Equals("Head"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/head_0", strDirectoryName));
                        }
                        else if (name.Equals("Body"))
                        {
                            obj.GetComponent<SpriteSheet>().m_sheet_sprite = Resources.LoadAll<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/sheet_body_0", strDirectoryName));
                            obj.GetComponent<SpriteRenderer>().sprite = obj.GetComponent<SpriteSheet>().m_sheet_sprite[0];
                            break;
                        }
                        else if (name.Equals("Leg"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/legs_0", strDirectoryName));
                        }
                        #endregion
                        break;

                    case (int)HERO.ROLF:
                        #region Rolf

                        strDirectoryName = "8.Rolf";

                        if (name.Equals("Head"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/head_0", strDirectoryName));
                        }
                        else if (name.Equals("Body"))
                        {
                            obj.GetComponent<SpriteSheet>().m_sheet_sprite = Resources.LoadAll<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/sheet_body_0", strDirectoryName));
                            obj.GetComponent<SpriteRenderer>().sprite = obj.GetComponent<SpriteSheet>().m_sheet_sprite[0];
                            break;
                        }
                        else if (name.Equals("Leg"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/legs_0", strDirectoryName));
                        }
                        else if (name.Equals("Hand_R"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/arms_0", strDirectoryName));
                        }
                        else if (name.Equals("Hand_L"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/arms_1", strDirectoryName));
                        }
                        #endregion
                        break;

                    case (int)HERO.OTIS:
                        #region OTIS

                        strDirectoryName = "9.Otis";

                        if (name.Equals("Head"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/head_0", strDirectoryName));
                        }
                        else if (name.Equals("Body"))
                        {
                            obj.GetComponent<SpriteSheet>().m_sheet_sprite = Resources.LoadAll<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/sheet_body_0", strDirectoryName));
                            obj.GetComponent<SpriteRenderer>().sprite = obj.GetComponent<SpriteSheet>().m_sheet_sprite[0];
                            break;
                        }
                        else if (name.Equals("Leg"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/legs_0", strDirectoryName));
                        }
                        else if (name.Equals("Hand_R"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/arms_0", strDirectoryName));
                        }
                        else if (name.Equals("Hand_L"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/arms_1", strDirectoryName));
                        }
                        #endregion
                        break;

                    case (int)HERO.REYNARD:
                        #region Reynard

                        strDirectoryName = "10.Reynard";

                        if (name.Equals("Head"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/head_0", strDirectoryName));
                        }
                        else if (name.Equals("Body"))
                        {
                            obj.GetComponent<SpriteSheet>().m_sheet_sprite = Resources.LoadAll<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/sheet_body_0", strDirectoryName));
                            obj.GetComponent<SpriteRenderer>().sprite = obj.GetComponent<SpriteSheet>().m_sheet_sprite[0];
                            break;
                        }
                        else if (name.Equals("Leg"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/legs_0", strDirectoryName));
                        }
                        else if (name.Equals("Hand_R"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/arms_0", strDirectoryName));
                        }
                        else if (name.Equals("Hand_L"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/arms_1", strDirectoryName));
                        }
                        #endregion
                        break;

                    case (int)HERO.DUMP:
                        #region Dump

                        strDirectoryName = "11.Dump";

                        if (name.Equals("Head"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/head_0", strDirectoryName));
                        }
                        else if (name.Equals("Body"))
                        {
                            switch (obj.GetComponent<Part>().m_iSaveChildIdx)
                            {
                                case 0:
                                    obj.GetComponent<SpriteSheet>().m_sheet_sprite = Resources.LoadAll<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/sheet_body_0", strDirectoryName));
                                    obj.GetComponent<SpriteRenderer>().sprite = obj.GetComponent<SpriteSheet>().m_sheet_sprite[0];
                                    break;

                                case 1:
                                    obj.GetComponent<SpriteSheet>().m_sheet_sprite = Resources.LoadAll<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/sheet_body_1", strDirectoryName));
                                    obj.GetComponent<SpriteRenderer>().sprite = obj.GetComponent<SpriteSheet>().m_sheet_sprite[0];
                                    break;
                            }
                            break;
                        }
                        else if (name.Equals("Leg"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/legs_0", strDirectoryName));
                        }
                        else if (name.Equals("Hand_R"))
                        {
                            obj.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/arms_0", strDirectoryName));
                        }
                        #endregion
                        break;

                }
                break;
        }

        if (cpart.m_bAttackAvailable && obj.transform.childCount == 0)
        {
            ObjectFactory.getInstance.Create_PartAnimator(obj.transform);
            obj.GetComponent<SpriteRenderer>().enabled = false;
            obj.transform.GetChild(0).GetChild(0).GetComponent<SpriteRenderer>().enabled = true;
            obj.transform.GetChild(0).GetChild(0).GetComponent<Animator>().enabled = true;
            obj.transform.GetChild(0).GetChild(0).GetComponent<DPSpritePalette>().PaletteIndex = 1;
        }

        if (obj.GetComponent<DPSpritePalette>().paletteTexture == null)
        {
            obj.GetComponent<DPSpritePalette>().paletteTexture = m_texture_skin_palette;
            obj.GetComponent<DPSpritePalette>().PaletteIndex = 1;
        }

        return obj;
    }

    public GameObject Create_Poop()
    {
        GameObject obj = Instantiate(m_objPoop) as GameObject;
        obj.transform.parent = GameObject.Find("Poops").transform;
        obj.transform.position = GameObject.Find("Core").transform.position;
        SoundMgr.getInstance.PlaySfx("core", Random.Range(1, 4));

        if (GameMgr.getInstance.m_iHunger + 10 <= 100)
            GameObject.Find("Hunger").GetComponent<TopBarUI>().ChangeValue(GameMgr.getInstance.m_iHunger + 30);
        else
            GameObject.Find("Hunger").GetComponent<TopBarUI>().ChangeValue(100);

        return obj;
    }

    public GameObject Create_HealthBar(GameObject target)
    {
        GameObject obj = Instantiate(m_HealthBar) as GameObject;
        obj.transform.parent = GameObject.Find("HealthBar").transform;
        obj.GetComponent<UIFollowTarget>().target = target.transform;
        obj.transform.localScale = Vector3.one;

        return obj;
    }

    public GameObject Create_DamageUI(GameObject target, float fDamage, bool bMinus, float fBlkDmg = 0f, bool bDodge = false)
    {
        GameObject obj = Instantiate(m_DamageUI) as GameObject;
        obj.transform.parent = GameObject.Find("DamagePanel").transform;
        obj.GetComponent<UIFollowTarget>().target = target.transform;
        obj.transform.localScale = Vector3.one;

        DamageUI dmgUI = obj.GetComponent<DamageUI>();
        dmgUI.m_fDamage = fDamage;
        dmgUI.m_bMinus = bMinus;
        dmgUI.m_bDodge = bDodge;
        dmgUI.m_fBlockDmg = fBlkDmg;

        return obj;
    }

    public GameObject Create_MessageBox_OneButton(string strMessage, string strFunctionName, GameObject FunctionObject = null, string strButtonName = "")
    {
        GameObject obj = Instantiate(m_MessageBox) as GameObject;
        obj.transform.parent = GameObject.Find("UI Root").transform;
        obj.transform.localScale = Vector3.one;
        obj.transform.Find("Desc").Find("label").GetComponent<UILabel>().text = strMessage;
        if (strButtonName == "")
            obj.transform.Find("Btn0").Find("label").GetComponent<UILabel>().text = Localization.Get("Confirm");
        else
            obj.transform.Find("Btn0").Find("label").GetComponent<UILabel>().text = strButtonName;

        obj.transform.Find("Btn0").localPosition = new Vector2(115f, -95f);
        obj.transform.Find("Btn1").gameObject.SetActive(false);


        MessageBox msgBox = obj.GetComponent<MessageBox>();
        if (FunctionObject != null)
            msgBox.m_functionObject = FunctionObject;
        else
            msgBox.m_functionObject = GameObject.Find("MessageButtonManager").gameObject;
        msgBox.m_strFunction_0 = strFunctionName;

        SoundMgr.getInstance.PlaySfx("ui", 0);

        return obj;
    }

    public GameObject Create_MessageBox_TwoButton(string strMessage, string strFunctionName_0, string strFunctionName_1, GameObject FunctionObject = null, string strButtonName_0 = "", string strButtonName_1 = "")
    {
        GameObject obj = Instantiate(m_MessageBox) as GameObject;
        obj.transform.parent = GameObject.Find("UI Root").transform;
        obj.transform.localScale = Vector3.one;
        obj.transform.Find("Desc").Find("label").GetComponent<UILabel>().text = strMessage;
        if (strButtonName_0 == "")
            obj.transform.Find("Btn0").Find("label").GetComponent<UILabel>().text = Localization.Get("Yes");
        else
            obj.transform.Find("Btn0").Find("label").GetComponent<UILabel>().text = strButtonName_0;

        if (strButtonName_1 == "")
            obj.transform.Find("Btn1").Find("label").GetComponent<UILabel>().text = Localization.Get("No");
        else
            obj.transform.Find("Btn1").Find("label").GetComponent<UILabel>().text = strButtonName_1;

        MessageBox msgBox = obj.GetComponent<MessageBox>();
        if (FunctionObject != null)
            msgBox.m_functionObject = FunctionObject;
        else
            msgBox.m_functionObject = GameObject.Find("MessageButtonManager").gameObject;
        msgBox.m_strFunction_0 = strFunctionName_0;
        msgBox.m_strFunction_1 = strFunctionName_1;

        SoundMgr.getInstance.PlaySfx("ui", 0);

        return obj;
    }

    public GameObject Create_AleartMsg(string strMsg)
    {
        GameObject obj = Instantiate(m_AleartMsg) as GameObject;

        Transform AleartTrans = GameObject.Find("AleartMsg").transform;
        AleartTrans.BroadcastMessage("MoveUp", SendMessageOptions.DontRequireReceiver);

        obj.transform.parent = AleartTrans;
        obj.transform.localScale = Vector3.one;
        obj.transform.localPosition = Vector3.zero;
        obj.transform.GetChild(0).GetComponent<UILabel>().text = strMsg;

        SoundMgr.getInstance.PlaySfx("ui", 1);

        return obj;
    }

    public GameObject Create_LiveStock()
    {
        GameObject obj;

        if (Random.Range(0f, 1f) <= 0.5f)
            obj = Instantiate(m_objChicken) as GameObject;
        else
            obj = Instantiate(m_objGoat) as GameObject;

        obj.transform.parent = GameObject.Find("Enemies").transform;
        obj.transform.localPosition = RandomBornPos(obj);

        return obj;
    }

    public GameObject Create_Hero(int iHeroIdx)
    {
        GameObject obj;
        float fHealth = 0f;
        float fAttackSpeed = Random.Range(20, 30);
        float fAttack = 0f;
        float fRange = 0f;
        float fDefense = 0f;
        float fIQ = 0f;
        string strDirectoryName = "";

        obj = Instantiate(m_objHero[iHeroIdx]) as GameObject;

        obj.transform.parent = GameObject.Find("Enemies").transform;
        obj.GetComponent<Unit>().m_enemyType = ENEMY_TYPE.HERO;

        switch (iHeroIdx)
        {
            case 0:
                #region Wallace
                GameObject head = obj.transform.Find("Head").gameObject;
                Part headPart = head.GetComponent<Part>();
                fHealth = 20f;
                headPart.m_fCurHealth = fHealth;
                headPart.m_dicStat.Add("Health", fHealth);
                headPart.m_dicStat.Add("IQ", 100);
                headPart.m_lstStrBuff.Add("HeadBuff_2");
                headPart.m_dicStatBuff["Attack"] = 2;
                headPart.m_dicStatBuff["AttackSpeed"] = 2;

                GameObject Upbody = obj.transform.GetChild(1).gameObject;
                Part UpbodyPart = Upbody.GetComponent<Part>();
                fHealth = Random.Range(25, 30);
                //UpbodyPart.m_fHealth = fHealth;
                UpbodyPart.m_fCurHealth = fHealth;
                UpbodyPart.m_dicStat.Add("Health", fHealth);
                fHealth = Random.Range(5, 8);
                UpbodyPart.m_dicStat.Add("Defense", fHealth);

                GameObject Downbody = obj.transform.GetChild(2).gameObject;
                Part DownbodyPart = Downbody.GetComponent<Part>();
                fHealth = Random.Range(25, 30);
                //DownbodyPart.m_fHealth = fHealth;
                DownbodyPart.m_fCurHealth = fHealth;
                DownbodyPart.m_dicStat.Add("Health", fHealth);
                fHealth = Random.Range(5, 8);
                DownbodyPart.m_dicStat.Add("Defense", fHealth);

                GameObject arm = obj.transform.Find("Hand_R").gameObject;
                Part armPart = arm.GetComponent<Part>();
                fHealth = Random.Range(50, 70);
                fAttackSpeed = Random.Range(20, 30);
                fAttack = 0f;
                fRange = 0f;
                armPart.m_bUse32PixelHand = true;
                armPart.m_dicStat.Add("Attack", fHealth);
                armPart.m_dicStat.Add("AttackSpeed", fAttackSpeed);
                fHealth = Random.Range(15, 18);
                //armPart.m_fHealth = fHealth;
                armPart.m_fCurHealth = fHealth;
                armPart.m_dicStat.Add("Health", fHealth);
                armPart.m_weaponType = WEAPON_TYPE.TWO_HAND;
                armPart.m_dicStat.Add("Range", 45f);
                Animator anim = armPart.gameObject.GetComponent<Animator>();
                anim.runtimeAnimatorController = m_weapon_anim_controller[(int)armPart.m_weaponType];

                GameObject leg = obj.transform.Find("Leg").gameObject;
                Part legPart = leg.GetComponent<Part>();
                fHealth = Random.Range(15, 18);
                float fRandomDodge = Random.Range(5, 7);
                //legPart.m_fHealth = fHealth;
                legPart.m_fCurHealth = fHealth;
                legPart.m_dicStat.Add("Health", fHealth);
                legPart.m_dicStat.Add("Dodge", fRandomDodge);
                legPart.m_dicStatBuff["Dodge"] = fRandomDodge;
                legPart.m_lstStrBuff.Add("LegBuff");
                #endregion
                break;

            case 1:
                #region Robin hood
                head = obj.transform.Find("Head").gameObject;
                headPart = head.GetComponent<Part>();
                //headPart.m_fHealth = Random.Range(15, 18);
                fHealth = 20f;
                headPart.m_fCurHealth = fHealth;
                headPart.m_dicStat.Add("Health", fHealth);
                headPart.m_dicStat.Add("IQ", 100);
                headPart.m_lstStrBuff.Add("HeadBuff_2");
                headPart.m_dicStatBuff["Attack"] = 2;
                headPart.m_dicStatBuff["AttackSpeed"] = 2;

                GameObject Body = obj.transform.Find("Body").gameObject;
                Part bodyPart = Body.GetComponent<Part>();
                fHealth = Random.Range(25, 30);
                //bodyPart.m_fHealth = fHealth;
                bodyPart.m_fCurHealth = fHealth;
                bodyPart.m_dicStat.Add("Health", fHealth);
                fHealth = Random.Range(5, 8);
                bodyPart.m_dicStat.Add("Defense", fHealth);
                Body.GetComponent<SpriteSheet>().m_sheet_sprite = Resources.LoadAll<Sprite>("Sprites/Sheets/Heroes/1.Robin/sheet_robin_body_0");

                arm = obj.transform.Find("Hand_R").gameObject;
                armPart = arm.GetComponent<Part>();
                fHealth = Random.Range(50, 70);
                fAttackSpeed = Random.Range(20, 30);
                armPart.m_bUse32PixelHand = true;
                armPart.m_dicStat.Add("Attack", fHealth);
                armPart.m_dicStat.Add("AttackSpeed", fAttackSpeed);
                fHealth = Random.Range(15, 18);
                //armPart.m_fHealth = fHealth;
                armPart.m_fCurHealth = fHealth;
                armPart.m_dicStat.Add("Health", fHealth);
                armPart.m_weaponType = WEAPON_TYPE.BOW;
                armPart.m_dicStat.Add("Range", 80f);
                anim = armPart.gameObject.GetComponent<Animator>();
                anim.runtimeAnimatorController = m_weapon_anim_controller[(int)armPart.m_weaponType];

                leg = obj.transform.Find("Leg").gameObject;
                legPart = leg.GetComponent<Part>();
                fHealth = Random.Range(15, 18);
                fRandomDodge = Random.Range(5, 7);
                //legPart.m_fHealth = fHealth;
                legPart.m_fCurHealth = fHealth;
                legPart.m_dicStat.Add("Health", fHealth);
                legPart.m_dicStat.Add("Dodge", fRandomDodge);
                legPart.m_dicStatBuff["Dodge"] = fRandomDodge;
                legPart.m_lstStrBuff.Add("LegBuff");
                #endregion
                break;

            case 2:
                #region Adam the Leper
                head = obj.transform.Find("Head").gameObject;
                headPart = head.GetComponent<Part>();
                //headPart.m_fHealth = Random.Range(15, 18);
                fHealth = 20f;
                headPart.m_fCurHealth = fHealth;
                headPart.m_dicStat.Add("Health", fHealth);
                headPart.m_dicStat.Add("IQ", 100);
                headPart.m_lstStrBuff.Add("HeadBuff_2");
                headPart.m_dicStatBuff["Attack"] = 2;
                headPart.m_dicStatBuff["AttackSpeed"] = 2;

                Body = obj.transform.Find("Body").gameObject;
                bodyPart = Body.GetComponent<Part>();
                fHealth = Random.Range(25, 30);
                //bodyPart.m_fHealth = fHealth;
                bodyPart.m_fCurHealth = fHealth;
                bodyPart.m_dicStat.Add("Health", fHealth);
                fHealth = Random.Range(5, 8);
                bodyPart.m_dicStat.Add("Defense", fHealth);
                Body.GetComponent<SpriteSheet>().m_sheet_sprite = Resources.LoadAll<Sprite>("Sprites/Sheets/Heroes/2.Adam/sheet_adam_body_0");

                arm = obj.transform.Find("Hand_R").gameObject;
                armPart = arm.GetComponent<Part>();
                fHealth = Random.Range(5, 7);
                fAttackSpeed = 75f;
                armPart.m_bUse32PixelHand = true;
                armPart.m_dicStat.Add("Attack", fHealth);
                armPart.m_dicStat.Add("AttackSpeed", fAttackSpeed);
                fHealth = Random.Range(15, 18);
                //armPart.m_fHealth = fHealth;
                armPart.m_fCurHealth = fHealth;
                armPart.m_dicStat.Add("Health", fHealth);
                armPart.m_weaponType = WEAPON_TYPE.ONE_HAND;
                armPart.m_dicStat.Add("Range", 45f);
                anim = armPart.gameObject.GetComponent<Animator>();
                anim.runtimeAnimatorController = m_weapon_anim_controller[(int)armPart.m_weaponType];

                arm = obj.transform.Find("Hand_L").gameObject;
                armPart = arm.GetComponent<Part>();
                fHealth = Random.Range(5, 7);
                fAttackSpeed = 75f;
                armPart.m_bUse32PixelHand = true;
                armPart.m_dicStat.Add("Attack", fHealth);
                armPart.m_dicStat.Add("AttackSpeed", fAttackSpeed);
                fHealth = Random.Range(15, 18);
                //armPart.m_fHealth = fHealth;
                armPart.m_fCurHealth = fHealth;
                armPart.m_dicStat.Add("Health", fHealth);
                armPart.m_weaponType = WEAPON_TYPE.ONE_HAND;
                armPart.m_dicStat.Add("Range", 45f);
                anim = armPart.gameObject.GetComponent<Animator>();
                anim.runtimeAnimatorController = m_weapon_anim_controller[(int)armPart.m_weaponType];

                leg = obj.transform.Find("Leg").gameObject;
                legPart = leg.GetComponent<Part>();
                fHealth = Random.Range(15, 18);
                fRandomDodge = Random.Range(5, 7);
                //legPart.m_fHealth = fHealth;
                legPart.m_fCurHealth = fHealth;
                legPart.m_dicStat.Add("Health", fHealth);
                legPart.m_dicStat.Add("Dodge", fRandomDodge);
                legPart.m_dicStatBuff["Dodge"] = fRandomDodge;
                legPart.m_lstStrBuff.Add("LegBuff");
                #endregion
                break;

            case 3:
                #region Hank the Hairy
                head = obj.transform.Find("Head").gameObject;
                headPart = head.GetComponent<Part>();
                //headPart.m_fHealth = Random.Range(15, 18);
                fHealth = 20f;
                headPart.m_fCurHealth = fHealth;
                headPart.m_dicStat.Add("Health", fHealth);
                headPart.m_dicStat.Add("IQ", 100);
                headPart.m_lstStrBuff.Add("HeadBuff_2");
                headPart.m_dicStatBuff["Attack"] = 2;
                headPart.m_dicStatBuff["AttackSpeed"] = 2;

                Body = obj.transform.Find("Body").gameObject;
                bodyPart = Body.GetComponent<Part>();
                fHealth = Random.Range(25, 30);
                //bodyPart.m_fHealth = fHealth;
                bodyPart.m_fCurHealth = fHealth;
                bodyPart.m_dicStat.Add("Health", fHealth);
                fHealth = Random.Range(5, 8);
                bodyPart.m_dicStat.Add("Defense", fHealth);
                Body.GetComponent<SpriteSheet>().m_sheet_sprite = Resources.LoadAll<Sprite>("Sprites/Sheets/Heroes/3.Hank/sheet_body_0");

                arm = obj.transform.Find("Hand_R").gameObject;
                armPart = arm.GetComponent<Part>();
                fHealth = Random.Range(5, 7);
                fAttackSpeed = 75f;
                armPart.m_bUse32PixelHand = true;
                armPart.m_dicStat.Add("Attack", fHealth);
                armPart.m_dicStat.Add("AttackSpeed", fAttackSpeed);
                fHealth = Random.Range(15, 18);
                //armPart.m_fHealth = fHealth;
                armPart.m_fCurHealth = fHealth;
                armPart.m_dicStat.Add("Health", fHealth);
                armPart.m_weaponType = WEAPON_TYPE.TWO_HAND;
                armPart.m_dicStat.Add("Range", 45f);
                anim = armPart.gameObject.GetComponent<Animator>();
                anim.runtimeAnimatorController = m_weapon_anim_controller[(int)armPart.m_weaponType];

                leg = obj.transform.Find("Leg").gameObject;
                legPart = leg.GetComponent<Part>();
                fHealth = Random.Range(15, 18);
                fRandomDodge = Random.Range(5, 7);
                //legPart.m_fHealth = fHealth;
                legPart.m_fCurHealth = fHealth;
                legPart.m_dicStat.Add("Health", fHealth);
                legPart.m_dicStat.Add("Dodge", fRandomDodge);
                legPart.m_dicStatBuff["Dodge"] = fRandomDodge;
                legPart.m_lstStrBuff.Add("LegBuff");
                #endregion
                break;

            case 4:
                #region Gawen the Knowledge
                head = obj.transform.Find("Head").gameObject;
                headPart = head.GetComponent<Part>();
                fHealth = 20f;
                fIQ = 130f;
                headPart.m_lstStrBuff.Add("HeadBuff_2");
                headPart.m_dicStatBuff["Attack"] = 2;
                headPart.m_dicStatBuff["AttackSpeed"] = 2;
                #region head_hide
                //headPart.m_fHealth = fHealth;
                headPart.m_fCurHealth = fHealth;
                headPart.m_dicStat.Add("Health", fHealth);
                headPart.m_dicStat.Add("IQ", fIQ);
                #endregion

                Body = obj.transform.Find("Body").gameObject;
                bodyPart = Body.GetComponent<Part>();
                strDirectoryName = "4.Gawen";
                fHealth = 40f;
                fDefense = 5f;
                #region body_hide
                //bodyPart.m_fHealth = fHealth;
                bodyPart.m_fCurHealth = fHealth;
                bodyPart.m_dicStat.Add("Health", fHealth);
                bodyPart.m_dicStat.Add("Defense", fDefense);
                Body.GetComponent<SpriteSheet>().m_sheet_sprite = Resources.LoadAll<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/sheet_body_0", strDirectoryName));
                #endregion

                arm = obj.transform.Find("Hand_R").gameObject;
                armPart = arm.GetComponent<Part>();
                armPart.m_bUse32PixelHand = false;
                armPart.m_bAttackAvailable = false;
                armPart.m_weaponType = WEAPON_TYPE.BOOK;
                fHealth = 45f;
                fAttackSpeed = 0f;
                fAttack = 0f;
                fRange = 0f;
                armPart.m_lstStrBuff.Add("HeadBuff_2");
                armPart.m_dicStatBuff["Attack"] = 2;
                armPart.m_dicStatBuff["AttackSpeed"] = 2;
                #region arm_hide
                //armPart.m_fHealth = fHealth;
                armPart.m_fCurHealth = fHealth;
                armPart.m_dicStat.Add("Health", fHealth);
                armPart.m_dicStat.Add("Range", fRange);
                armPart.m_dicStat.Add("Attack", fAttack);
                armPart.m_dicStat.Add("AttackSpeed", fAttackSpeed);
                if (armPart.m_bAttackAvailable)
                {
                    anim = armPart.gameObject.GetComponent<Animator>();
                    anim.runtimeAnimatorController = m_weapon_anim_controller[(int)armPart.m_weaponType];
                }
                #endregion

                leg = obj.transform.Find("Leg").gameObject;
                legPart = leg.GetComponent<Part>();
                fHealth = 15f;
                legPart.m_lstStrBuff.Add("LegBuff");
                fRandomDodge = 5f;
                #region leg_hide
                //legPart.m_fHealth = fHealth;
                legPart.m_fCurHealth = fHealth;
                legPart.m_dicStat.Add("Health", fHealth);
                legPart.m_dicStat.Add("Dodge", fRandomDodge);
                legPart.m_dicStatBuff["Dodge"] = fRandomDodge;
                #endregion
                #endregion
                break;

            case 5:
                #region Owin the Sew
                head = obj.transform.Find("Head").gameObject;
                headPart = head.GetComponent<Part>();
                fHealth = 20f;
                fIQ = 130f;
                headPart.m_lstStrBuff.Add("HeadBuff_2");
                headPart.m_dicStatBuff["Attack"] = 2;
                headPart.m_dicStatBuff["AttackSpeed"] = 2;
                #region head_hide
                //headPart.m_fHealth = fHealth;
                headPart.m_fCurHealth = fHealth;
                headPart.m_dicStat.Add("Health", fHealth);
                headPart.m_dicStat.Add("IQ", fIQ);
                #endregion

                Body = obj.transform.Find("Body").gameObject;
                bodyPart = Body.GetComponent<Part>();
                strDirectoryName = "5.Owin";
                fHealth = 40f;
                fDefense = 5f;
                #region body_hide
                //bodyPart.m_fHealth = fHealth;
                bodyPart.m_fCurHealth = fHealth;
                bodyPart.m_dicStat.Add("Health", fHealth);
                bodyPart.m_dicStat.Add("Defense", fDefense);
                Body.GetComponent<SpriteSheet>().m_sheet_sprite = Resources.LoadAll<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/sheet_body_0", strDirectoryName));
                #endregion

                arm = obj.transform.Find("Hand_R").gameObject;
                armPart = arm.GetComponent<Part>();
                armPart.m_bUse32PixelHand = false;
                armPart.m_bAttackAvailable = false;
                armPart.m_weaponType = WEAPON_TYPE.BOOK;
                fHealth = 45f;
                fAttackSpeed = 0f;
                fAttack = 0f;
                fRange = 0f;
                armPart.m_lstStrBuff.Add("HeadBuff_2");
                armPart.m_dicStatBuff["Attack"] = 2;
                armPart.m_dicStatBuff["AttackSpeed"] = 2;
                #region arm_hide
                //armPart.m_fHealth = fHealth;
                armPart.m_fCurHealth = fHealth;
                armPart.m_dicStat.Add("Health", fHealth);
                armPart.m_dicStat.Add("Range", fRange);
                armPart.m_dicStat.Add("Attack", fAttack);
                armPart.m_dicStat.Add("AttackSpeed", fAttackSpeed);
                if (armPart.m_bAttackAvailable)
                {
                    anim = armPart.gameObject.GetComponent<Animator>();
                    anim.runtimeAnimatorController = m_weapon_anim_controller[(int)armPart.m_weaponType];
                }
                #endregion

                arm = obj.transform.Find("Hand_L").gameObject;
                armPart = arm.GetComponent<Part>();
                armPart.m_bUse32PixelHand = false;
                armPart.m_bAttackAvailable = false;
                armPart.m_weaponType = WEAPON_TYPE.BOOK;
                fHealth = 45f;
                fAttackSpeed = 0f;
                fAttack = 0f;
                fRange = 0f;
                armPart.m_lstStrBuff.Add("HeadBuff_2");
                armPart.m_dicStatBuff["Attack"] = 2;
                armPart.m_dicStatBuff["AttackSpeed"] = 2;
                #region arm_hide
                //armPart.m_fHealth = fHealth;
                armPart.m_fCurHealth = fHealth;
                armPart.m_dicStat.Add("Health", fHealth);
                armPart.m_dicStat.Add("Range", fRange);
                armPart.m_dicStat.Add("Attack", fAttack);
                armPart.m_dicStat.Add("AttackSpeed", fAttackSpeed);
                if (armPart.m_bAttackAvailable)
                {
                    anim = armPart.gameObject.GetComponent<Animator>();
                    anim.runtimeAnimatorController = m_weapon_anim_controller[(int)armPart.m_weaponType];
                }
                #endregion

                leg = obj.transform.Find("Leg").gameObject;
                legPart = leg.GetComponent<Part>();
                fHealth = 15f;
                legPart.m_lstStrBuff.Add("LegBuff");
                fRandomDodge = 5f;
                #region leg_hide
                //legPart.m_fHealth = fHealth;
                legPart.m_fCurHealth = fHealth;
                legPart.m_dicStat.Add("Health", fHealth);
                legPart.m_dicStat.Add("Dodge", fRandomDodge);
                legPart.m_dicStatBuff["Dodge"] = fRandomDodge;
                #endregion
                #endregion
                break;

            case 6:
                #region Gale the Agitator
                head = obj.transform.Find("Head").gameObject;
                headPart = head.GetComponent<Part>();
                fHealth = 20f;
                fIQ = 130f;
                headPart.m_lstStrBuff.Add("HeadBuff_2");
                headPart.m_dicStatBuff["Attack"] = 2;
                headPart.m_dicStatBuff["AttackSpeed"] = 2;
                #region head_hide
                //headPart.m_fHealth = fHealth;
                headPart.m_fCurHealth = fHealth;
                headPart.m_dicStat.Add("Health", fHealth);
                headPart.m_dicStat.Add("IQ", fIQ);
                #endregion

                Body = obj.transform.Find("Body").gameObject;
                bodyPart = Body.GetComponent<Part>();
                strDirectoryName = "6.Gale";
                fHealth = 40f;
                fDefense = 5f;
                #region body_hide
                //bodyPart.m_fHealth = fHealth;
                bodyPart.m_fCurHealth = fHealth;
                bodyPart.m_dicStat.Add("Health", fHealth);
                bodyPart.m_dicStat.Add("Defense", fDefense);
                Body.GetComponent<SpriteSheet>().m_sheet_sprite = Resources.LoadAll<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/sheet_body_0", strDirectoryName));
                #endregion

                leg = obj.transform.Find("Leg").gameObject;
                legPart = leg.GetComponent<Part>();
                fHealth = 15f;
                legPart.m_lstStrBuff.Add("LegBuff");
                fRandomDodge = 5f;
                #region leg_hide
                //legPart.m_fHealth = fHealth;
                legPart.m_fCurHealth = fHealth;
                legPart.m_dicStat.Add("Health", fHealth);
                legPart.m_dicStat.Add("Dodge", fRandomDodge);
                legPart.m_dicStatBuff["Dodge"] = fRandomDodge;
                #endregion
                #endregion
                break;

            case 7:
                #region Richard the Coin
                head = obj.transform.Find("Head").gameObject;
                headPart = head.GetComponent<Part>();
                fHealth = 20f;
                fIQ = 130f;
                headPart.m_lstStrBuff.Add("HeadBuff_2");
                headPart.m_dicStatBuff["Attack"] = 2;
                headPart.m_dicStatBuff["AttackSpeed"] = 2;
                #region head_hide
                //headPart.m_fHealth = fHealth;
                headPart.m_fCurHealth = fHealth;
                headPart.m_dicStat.Add("Health", fHealth);
                headPart.m_dicStat.Add("IQ", fIQ);
                #endregion

                Body = obj.transform.Find("Body").gameObject;
                bodyPart = Body.GetComponent<Part>();
                strDirectoryName = "7.Richard";
                fHealth = 40f;
                fDefense = 5f;
                #region body_hide
                //bodyPart.m_fHealth = fHealth;
                bodyPart.m_fCurHealth = fHealth;
                bodyPart.m_dicStat.Add("Health", fHealth);
                bodyPart.m_dicStat.Add("Defense", fDefense);
                Body.GetComponent<SpriteSheet>().m_sheet_sprite = Resources.LoadAll<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/sheet_body_0", strDirectoryName));
                #endregion

                leg = obj.transform.Find("Leg").gameObject;
                legPart = leg.GetComponent<Part>();
                fHealth = 15f;
                legPart.m_lstStrBuff.Add("LegBuff");
                fRandomDodge = 5f;
                #region leg_hide
                //legPart.m_fHealth = fHealth;
                legPart.m_fCurHealth = fHealth;
                legPart.m_dicStat.Add("Health", fHealth);
                legPart.m_dicStat.Add("Dodge", fRandomDodge);
                legPart.m_dicStatBuff["Dodge"] = fRandomDodge;
                #endregion
                #endregion
                break;

            case 8:
                #region Rolf the Alcoholic
                head = obj.transform.Find("Head").gameObject;
                headPart = head.GetComponent<Part>();
                fHealth = 20f;
                fIQ = 130f;
                headPart.m_lstStrBuff.Add("HeadBuff_2");
                headPart.m_dicStatBuff["Attack"] = 2;
                headPart.m_dicStatBuff["AttackSpeed"] = 2;
                #region head_hide
                //headPart.m_fHealth = fHealth;
                headPart.m_fCurHealth = fHealth;
                headPart.m_dicStat.Add("Health", fHealth);
                headPart.m_dicStat.Add("IQ", fIQ);
                #endregion

                Body = obj.transform.Find("Body").gameObject;
                bodyPart = Body.GetComponent<Part>();
                strDirectoryName = "8.Rolf";
                fHealth = 40f;
                fDefense = 5f;
                bodyPart.m_lstStrBuff.Add("LegBuff");
                bodyPart.m_dicStatBuff["Health"] = 20;
                #region body_hide
                //bodyPart.m_fHealth = fHealth;
                bodyPart.m_fCurHealth = fHealth;
                bodyPart.m_dicStat.Add("Health", fHealth);
                bodyPart.m_dicStat.Add("Defense", fDefense);
                Body.GetComponent<SpriteSheet>().m_sheet_sprite = Resources.LoadAll<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/sheet_body_0", strDirectoryName));
                #endregion

                arm = obj.transform.Find("Hand_R").gameObject;
                armPart = arm.GetComponent<Part>();
                armPart.m_bUse32PixelHand = true;
                armPart.m_bAttackAvailable = true;
                armPart.m_weaponType = WEAPON_TYPE.ONE_HAND;
                fHealth = 45f;
                fAttackSpeed = 60f;
                fAttack = 0f;
                fRange = 40f;
                armPart.m_dicStatBuff["Attack"] = 2;
                armPart.m_dicStatBuff["AttackSpeed"] = 2;
                #region arm_hide
                //armPart.m_fHealth = fHealth;
                armPart.m_fCurHealth = fHealth;
                armPart.m_dicStat.Add("Health", fHealth);
                armPart.m_dicStat.Add("Range", fRange);
                armPart.m_dicStat.Add("Attack", fAttack);
                armPart.m_dicStat.Add("AttackSpeed", fAttackSpeed);
                if (armPart.m_bAttackAvailable)
                {
                    anim = armPart.gameObject.GetComponent<Animator>();
                    anim.runtimeAnimatorController = m_weapon_anim_controller[(int)armPart.m_weaponType];
                }
                #endregion

                arm = obj.transform.Find("Hand_L").gameObject;
                armPart = arm.GetComponent<Part>();
                armPart.m_bUse32PixelHand = false;
                armPart.m_bAttackAvailable = false;
                armPart.m_weaponType = WEAPON_TYPE.SHIELD;
                fHealth = 45f;
                fAttackSpeed = 0f;
                fAttack = 0f;
                fRange = 0f;
                armPart.m_dicStatBuff["Attack"] = 2;
                armPart.m_dicStatBuff["AttackSpeed"] = 2;
                #region arm_hide
                //armPart.m_fHealth = fHealth;
                armPart.m_fCurHealth = fHealth;
                armPart.m_dicStat.Add("Health", fHealth);
                armPart.m_dicStat.Add("Range", fRange);
                armPart.m_dicStat.Add("Attack", fAttack);
                armPart.m_dicStat.Add("AttackSpeed", fAttackSpeed);
                if (armPart.m_bAttackAvailable)
                {
                    anim = armPart.gameObject.GetComponent<Animator>();
                    anim.runtimeAnimatorController = m_weapon_anim_controller[(int)armPart.m_weaponType];
                }
                #endregion

                leg = obj.transform.Find("Leg").gameObject;
                legPart = leg.GetComponent<Part>();
                fHealth = 15f;
                legPart.m_lstStrBuff.Add("LegBuff");
                fRandomDodge = 5f;
                #region leg_hide
                //legPart.m_fHealth = fHealth;
                legPart.m_fCurHealth = fHealth;
                legPart.m_dicStat.Add("Health", fHealth);
                legPart.m_dicStat.Add("Dodge", fRandomDodge);
                legPart.m_dicStatBuff["Dodge"] = fRandomDodge;
                #endregion
                #endregion
                break;

            case 9:
                #region Otis the Errander
                head = obj.transform.Find("Head").gameObject;
                headPart = head.GetComponent<Part>();
                fHealth = 20f;
                fIQ = 130f;
                headPart.m_lstStrBuff.Add("HeadBuff_2");
                headPart.m_dicStatBuff["Attack"] = 2;
                headPart.m_dicStatBuff["AttackSpeed"] = 2;
                #region head_hide
                //headPart.m_fHealth = fHealth;
                headPart.m_fCurHealth = fHealth;
                headPart.m_dicStat.Add("Health", fHealth);
                headPart.m_dicStat.Add("IQ", fIQ);
                #endregion

                Body = obj.transform.Find("Body").gameObject;
                bodyPart = Body.GetComponent<Part>();
                strDirectoryName = "9.Otis";
                fHealth = 40f;
                fDefense = 5f;
                #region body_hide
                //bodyPart.m_fHealth = fHealth;
                bodyPart.m_fCurHealth = fHealth;
                bodyPart.m_dicStat.Add("Health", fHealth);
                bodyPart.m_dicStat.Add("Defense", fDefense);
                Body.GetComponent<SpriteSheet>().m_sheet_sprite = Resources.LoadAll<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/sheet_body_0", strDirectoryName));
                #endregion

                arm = obj.transform.Find("Hand_R").gameObject;
                armPart = arm.GetComponent<Part>();
                armPart.m_bUse32PixelHand = false;
                armPart.m_bAttackAvailable = true;
                armPart.m_weaponType = WEAPON_TYPE.ONE_HAND;
                fHealth = 45f;
                fAttackSpeed = 60f;
                fAttack = 40f;
                fRange = 40f;
                armPart.m_dicStatBuff["Attack"] = 2;
                armPart.m_dicStatBuff["AttackSpeed"] = 2;
                #region arm_hide
                //armPart.m_fHealth = fHealth;
                armPart.m_fCurHealth = fHealth;
                armPart.m_dicStat.Add("Health", fHealth);
                armPart.m_dicStat.Add("Range", fRange);
                armPart.m_dicStat.Add("Attack", fAttack);
                armPart.m_dicStat.Add("AttackSpeed", fAttackSpeed);
                if (armPart.m_bAttackAvailable)
                {
                    anim = armPart.gameObject.GetComponent<Animator>();
                    anim.runtimeAnimatorController = m_weapon_anim_controller[(int)armPart.m_weaponType];
                }
                #endregion

                arm = obj.transform.Find("Hand_L").gameObject;
                armPart = arm.GetComponent<Part>();
                armPart.m_bUse32PixelHand = false;
                armPart.m_bAttackAvailable = false;
                armPart.m_weaponType = WEAPON_TYPE.SHIELD;
                fHealth = 45f;
                fAttackSpeed = 0f;
                fAttack = 0f;
                fRange = 0f;
                armPart.m_dicStatBuff["Attack"] = 2;
                armPart.m_dicStatBuff["AttackSpeed"] = 2;
                #region arm_hide
                //armPart.m_fHealth = fHealth;
                armPart.m_fCurHealth = fHealth;
                armPart.m_dicStat.Add("Health", fHealth);
                armPart.m_dicStat.Add("Range", fRange);
                armPart.m_dicStat.Add("Attack", fAttack);
                armPart.m_dicStat.Add("AttackSpeed", fAttackSpeed);
                if (armPart.m_bAttackAvailable)
                {
                    anim = armPart.gameObject.GetComponent<Animator>();
                    anim.runtimeAnimatorController = m_weapon_anim_controller[(int)armPart.m_weaponType];
                }
                #endregion

                leg = obj.transform.Find("Leg").gameObject;
                legPart = leg.GetComponent<Part>();
                fHealth = 15f;
                legPart.m_lstStrBuff.Add("LegBuff");
                fRandomDodge = 5f;
                #region leg_hide
                //legPart.m_fHealth = fHealth;
                legPart.m_fCurHealth = fHealth;
                legPart.m_dicStat.Add("Health", fHealth);
                legPart.m_dicStat.Add("Dodge", fRandomDodge);
                legPart.m_dicStatBuff["Dodge"] = fRandomDodge;
                #endregion
                #endregion
                break;

            case 10:
                #region Reynard the Honor
                head = obj.transform.Find("Head").gameObject;
                headPart = head.GetComponent<Part>();
                fHealth = 20f;
                fIQ = 130f;
                headPart.m_lstStrBuff.Add("HeadBuff_2");
                headPart.m_dicStatBuff["Attack"] = 2;
                headPart.m_dicStatBuff["AttackSpeed"] = 2;
                #region head_hide
                //headPart.m_fHealth = fHealth;
                headPart.m_fCurHealth = fHealth;
                headPart.m_dicStat.Add("Health", fHealth);
                headPart.m_dicStat.Add("IQ", fIQ);
                #endregion

                Body = obj.transform.Find("Body").gameObject;
                bodyPart = Body.GetComponent<Part>();
                strDirectoryName = "10.Reynard";
                fHealth = 40f;
                fDefense = 5f;
                #region body_hide
                //bodyPart.m_fHealth = fHealth;
                bodyPart.m_fCurHealth = fHealth;
                bodyPart.m_dicStat.Add("Health", fHealth);
                bodyPart.m_dicStat.Add("Defense", fDefense);
                Body.GetComponent<SpriteSheet>().m_sheet_sprite = Resources.LoadAll<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/sheet_body_0", strDirectoryName));
                #endregion

                arm = obj.transform.Find("Hand_R").gameObject;
                armPart = arm.GetComponent<Part>();
                armPart.m_bUse32PixelHand = true;
                armPart.m_bAttackAvailable = true;
                armPart.m_weaponType = WEAPON_TYPE.ONE_HAND;
                fHealth = 45f;
                fAttackSpeed = 60f;
                fAttack = 40f;
                fRange = 40f;
                armPart.m_dicStatBuff["Attack"] = 2;
                armPart.m_dicStatBuff["AttackSpeed"] = 2;
                #region arm_hide
                //armPart.m_fHealth = fHealth;
                armPart.m_fCurHealth = fHealth;
                armPart.m_dicStat.Add("Health", fHealth);
                armPart.m_dicStat.Add("Range", fRange);
                armPart.m_dicStat.Add("Attack", fAttack);
                armPart.m_dicStat.Add("AttackSpeed", fAttackSpeed);
                if (armPart.m_bAttackAvailable)
                {
                    anim = armPart.gameObject.GetComponent<Animator>();
                    anim.runtimeAnimatorController = m_weapon_anim_controller[(int)armPart.m_weaponType];
                }
                #endregion

                arm = obj.transform.Find("Hand_L").gameObject;
                armPart = arm.GetComponent<Part>();
                armPart.m_bUse32PixelHand = false;
                armPart.m_bAttackAvailable = false;
                armPart.m_weaponType = WEAPON_TYPE.SHIELD;
                fHealth = 45f;
                fAttackSpeed = 0f;
                fAttack = 0f;
                fRange = 0f;
                armPart.m_dicStatBuff["Attack"] = 2;
                armPart.m_dicStatBuff["AttackSpeed"] = 2;
                #region arm_hide
                //armPart.m_fHealth = fHealth;
                armPart.m_fCurHealth = fHealth;
                armPart.m_dicStat.Add("Health", fHealth);
                armPart.m_dicStat.Add("Range", fRange);
                armPart.m_dicStat.Add("Attack", fAttack);
                armPart.m_dicStat.Add("AttackSpeed", fAttackSpeed);
                if (armPart.m_bAttackAvailable)
                {
                    anim = armPart.gameObject.GetComponent<Animator>();
                    anim.runtimeAnimatorController = m_weapon_anim_controller[(int)armPart.m_weaponType];
                }
                #endregion

                leg = obj.transform.Find("Leg").gameObject;
                legPart = leg.GetComponent<Part>();
                fHealth = 15f;
                legPart.m_lstStrBuff.Add("LegBuff");
                fRandomDodge = 5f;
                #region leg_hide
                //legPart.m_fHealth = fHealth;
                legPart.m_fCurHealth = fHealth;
                legPart.m_dicStat.Add("Health", fHealth);
                legPart.m_dicStat.Add("Dodge", fRandomDodge);
                legPart.m_dicStatBuff["Dodge"] = fRandomDodge;
                #endregion
                #endregion
                break;

            case 11:
                #region Dump the Giant
                head = obj.transform.Find("Head").gameObject;
                headPart = head.GetComponent<Part>();
                fHealth = 20f;
                fIQ = 130f;
                headPart.m_lstStrBuff.Add("HeadBuff_2");
                headPart.m_dicStatBuff["Attack"] = 2;
                headPart.m_dicStatBuff["AttackSpeed"] = 2;
                #region head_hide
                //headPart.m_fHealth = fHealth;
                headPart.m_fCurHealth = fHealth;
                headPart.m_dicStat.Add("Health", fHealth);
                headPart.m_dicStat.Add("IQ", fIQ);
                #endregion

                Body = obj.transform.GetChild(1).gameObject;
                bodyPart = Body.GetComponent<Part>();
                strDirectoryName = "11.Dump";
                fHealth = 40f;
                fDefense = 5f;
                #region body_hide
                //bodyPart.m_fHealth = fHealth;
                bodyPart.m_fCurHealth = fHealth;
                bodyPart.m_dicStat.Add("Health", fHealth);
                bodyPart.m_dicStat.Add("Defense", fDefense);
                Body.GetComponent<SpriteSheet>().m_sheet_sprite = Resources.LoadAll<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/sheet_body_0", strDirectoryName));
                #endregion

                Body = obj.transform.GetChild(2).gameObject;
                bodyPart = Body.GetComponent<Part>();
                strDirectoryName = "11.Dump";
                fHealth = 40f;
                fDefense = 5f;
                #region body_hide
                //bodyPart.m_fHealth = fHealth;
                bodyPart.m_fCurHealth = fHealth;
                bodyPart.m_dicStat.Add("Health", fHealth);
                bodyPart.m_dicStat.Add("Defense", fDefense);
                Body.GetComponent<SpriteSheet>().m_sheet_sprite = Resources.LoadAll<Sprite>(string.Format("Sprites/Sheets/Heroes/{0}/sheet_body_1", strDirectoryName));
                #endregion

                arm = obj.transform.Find("Hand_R").gameObject;
                armPart = arm.GetComponent<Part>();
                armPart.m_bUse32PixelHand = true;
                armPart.m_bAttackAvailable = true;
                armPart.m_weaponType = WEAPON_TYPE.TWO_HAND;
                fHealth = 45f;
                fAttackSpeed = 30f;
                fAttack = 40f;
                fRange = 40f;
                armPart.m_dicStatBuff["Attack"] = 2;
                armPart.m_dicStatBuff["AttackSpeed"] = 2;
                #region arm_hide
                //armPart.m_fHealth = fHealth;
                armPart.m_fCurHealth = fHealth;
                armPart.m_dicStat.Add("Health", fHealth);
                armPart.m_dicStat.Add("Range", fRange);
                armPart.m_dicStat.Add("Attack", fAttack);
                armPart.m_dicStat.Add("AttackSpeed", fAttackSpeed);
                if (armPart.m_bAttackAvailable)
                {
                    anim = armPart.gameObject.GetComponent<Animator>();
                    anim.runtimeAnimatorController = m_weapon_anim_controller[(int)armPart.m_weaponType];
                }
                #endregion

                leg = obj.transform.Find("Leg").gameObject;
                legPart = leg.GetComponent<Part>();
                fHealth = 15f;
                legPart.m_lstStrBuff.Add("LegBuff");
                fRandomDodge = 5f;
                #region leg_hide
                //legPart.m_fHealth = fHealth;
                legPart.m_fCurHealth = fHealth;
                legPart.m_dicStat.Add("Health", fHealth);
                legPart.m_dicStat.Add("Dodge", fRandomDodge);
                legPart.m_dicStatBuff["Dodge"] = fRandomDodge;
                #endregion
                #endregion
                break;
        }

        for (int i = 0; i < obj.transform.childCount; ++i)
        {
            Part part = obj.transform.GetChild(i).GetComponent<Part>();

            part.m_iSaveValue = iHeroIdx;
            if (part.m_strNameKey != "unArm")
                part.m_strNameKey = iHeroIdx.ToString();
            part.m_iEnemyType = (int)ENEMY_TYPE.HERO;
        }

        if (Application.loadedLevelName.Equals("Main"))
        {
            Destroy(obj.GetComponent<FSM_Enemy>());
            obj.AddComponent<FSM_MainScene_Enemy>();
        }

        obj.transform.localPosition = RandomBornPos(obj);

        return obj;
    }

    public GameObject Create_Civilian(float fProsperity)
    {
        GameObject obj;
        float fRandom = 0f;

        bool bIsTutorial = false;
        if (GameMgr.getInstance.m_bIsTutorial)
            bIsTutorial = true;

        obj = Instantiate(m_objHuman) as GameObject;

        obj.transform.parent = GameObject.Find("Enemies").transform;

        //Head Setting
        float fRandomIQ = 0;
        GameObject head = obj.transform.Find("Head").gameObject;
        Part headPart = head.GetComponent<Part>();

        int iHeadRandom = Random.Range(0, m_sheet_civilian_head.Length);
        head.GetComponent<SpriteRenderer>().sprite = m_sheet_civilian_head[iHeadRandom];
        if (iHeadRandom < 3)
        { // Young
            headPart.m_strNameKey = "PartName_civ_head_0";
            fRandom = Random.Range(30, 50);
        }
        else if (iHeadRandom < 9)
        { // MiddleAge
            headPart.m_strNameKey = "PartName_civ_head_1";
            fRandom = Random.Range(40, 70);
        }
        else
        { // Old
            headPart.m_strNameKey = "PartName_civ_head_2";
            fRandom = Random.Range(30, 50);
        }
        fRandomIQ = Random.Range(70, 90);

        //headPart.m_fHealth = fRandom;
        headPart.m_fCurHealth = fRandom;
        headPart.m_dicStat.Add("Health", fRandom);
        headPart.m_dicStat.Add("IQ", fRandomIQ);
        headPart.m_iSaveValue = iHeadRandom;
        headPart.m_iEnemyType = (int)ENEMY_TYPE.CIVILIAN;


        int iRandomBuff = 0;

        if (!bIsTutorial)
            iRandomBuff = Random.Range(0, 3);
        else
            iRandomBuff = 1;

        switch (iRandomBuff)
        {
            case 0:
                break;
            case 1:
                headPart.m_lstStrBuff.Add("HeadBuff_0");
                if (headPart.m_dicStat["IQ"] < 80)
                    headPart.m_dicStatBuff["Attack"] = 1;
                else
                    headPart.m_dicStatBuff["Attack"] = 2;
                break;
            case 2:
                headPart.m_lstStrBuff.Add("HeadBuff_1");
                if (headPart.m_dicStat["IQ"] < 80)
                    headPart.m_dicStatBuff["AttackSpeed"] = 1;
                else
                    headPart.m_dicStatBuff["AttackSpeed"] = 2;
                break;
        }

        //Body Setting
        GameObject body = obj.transform.Find("Body").gameObject;
        int iBodyRandom = Random.Range(0, m_iCivlian_body_count);
        body.GetComponent<SpriteRenderer>().sprite = m_sheet_civilian_body[iBodyRandom][0];
        body.GetComponent<SpriteSheet>().m_sheet_sprite = m_sheet_civilian_body[iBodyRandom];

        //		body.GetComponent<Part> ().m_dicStat = new Dictionary<string, float>();

        fRandom = Random.Range(80, 130);
        if (bIsTutorial)
            fRandom = 80f;
        Part bodyPart = body.GetComponent<Part>();
        //bodyPart.m_fHealth = fRandom;
        bodyPart.m_fCurHealth = fRandom;
        bodyPart.m_dicStat.Add("Health", fRandom);
        bodyPart.m_strNameKey = "PartName_civ_body_0";

        fRandom = Random.Range(0, 30);
        if (bIsTutorial)
            fRandom = 10f;
        bodyPart.m_dicStat.Add("Defense", fRandom);
        bodyPart.m_iSaveValue = iBodyRandom;
        bodyPart.m_iEnemyType = (int)ENEMY_TYPE.CIVILIAN;

        //Arms Setting
        GameObject arm = obj.transform.Find("Hand_R").gameObject;
        Part armPart = arm.GetComponent<Part>();
        int iArmRandom = Random.Range(0, m_sheet_civilian_arm.Length);
        if (bIsTutorial)
            iArmRandom = 2;

        if (BattleSceneMgr.getInstance.m_bSiege && Random.Range(0, 100) > 50) // siege range weapon
        {
            iArmRandom = 10;
        }

        arm.GetComponent<SpriteRenderer>().sprite = m_sheet_civilian_arm[iArmRandom];
        float fSpeedRandom = 0f;
        float fRange = 0f;

        switch (iArmRandom)
        {
            case 0:
                armPart.m_weaponType = WEAPON_TYPE.TWO_HAND;
                armPart.m_strNameKey = "WeaponName_twoHand_00";
                fRange = Random.Range(40, 50);
                fRandom = Random.Range(30, 50);
                fSpeedRandom = Random.Range(10, 30);
                Destroy(obj.transform.Find("Hand_L").gameObject);
                armPart.m_bUse32PixelHand = true;
                break;
            case 1:
                armPart.m_weaponType = WEAPON_TYPE.ONE_HAND;
                armPart.m_strNameKey = "WeaponName_oneHand_00";
                fRange = Random.Range(30, 40);
                fRandom = Random.Range(10, 30);
                fSpeedRandom = Random.Range(40, 70);
                break;
            case 2:
                armPart.m_weaponType = WEAPON_TYPE.ONE_HAND;
                armPart.m_strNameKey = "WeaponName_oneHand_01";
                fRange = Random.Range(30, 40);
                fRandom = Random.Range(10, 30);
                fSpeedRandom = Random.Range(40, 70);
                if (bIsTutorial)
                {
                    fRange = 40;
                    fRandom = 20;
                    fSpeedRandom = 50;
                }
                break;
            case 3:
                armPart.m_weaponType = WEAPON_TYPE.ONE_HAND;
                armPart.m_strNameKey = "WeaponName_oneHand_02";
                fRange = Random.Range(30, 40);
                fRandom = Random.Range(20, 40);
                fSpeedRandom = Random.Range(20, 50);
                break;
            case 4:
                armPart.m_weaponType = WEAPON_TYPE.TWO_HAND;
                armPart.m_strNameKey = "WeaponName_twoHand_01";
                fRange = Random.Range(30, 40);
                fRandom = Random.Range(20, 40);
                fSpeedRandom = Random.Range(10, 30);
                Destroy(obj.transform.Find("Hand_L").gameObject);
                armPart.m_bUse32PixelHand = true;
                break;
            case 5:
                armPart.m_weaponType = WEAPON_TYPE.POLE;
                armPart.m_strNameKey = "WeaponName_pole_00";
                fRange = Random.Range(50, 60);
                fRandom = Random.Range(10, 30);
                fSpeedRandom = Random.Range(10, 30);
                Destroy(obj.transform.Find("Hand_L").gameObject);
                armPart.m_bUse32PixelHand = true;
                break;
            case 6:
                armPart.m_weaponType = WEAPON_TYPE.TWO_HAND;
                armPart.m_strNameKey = "WeaponName_twoHand_02";
                fRange = Random.Range(50, 60);
                fRandom = Random.Range(10, 30);
                fSpeedRandom = Random.Range(10, 30);
                Destroy(obj.transform.Find("Hand_L").gameObject);
                armPart.m_bUse32PixelHand = true;
                break;
            case 7:
                armPart.m_weaponType = WEAPON_TYPE.ONE_HAND;
                armPart.m_strNameKey = "WeaponName_oneHand_03";
                fRange = Random.Range(30, 40);
                fRandom = Random.Range(20, 40);
                fSpeedRandom = Random.Range(20, 50);
                break;
            case 8:
                armPart.m_weaponType = WEAPON_TYPE.ONE_HAND;
                armPart.m_strNameKey = "WeaponName_oneHand_04";
                fRange = Random.Range(30, 40);
                fRandom = Random.Range(10, 30);
                fSpeedRandom = Random.Range(40, 70);
                break;
            case 9:
                armPart.m_weaponType = WEAPON_TYPE.TWO_HAND;
                armPart.m_strNameKey = "WeaponName_twoHand_03";
                fRange = Random.Range(50, 60);
                fRandom = Random.Range(30, 50);
                fSpeedRandom = Random.Range(10, 30);
                Destroy(obj.transform.Find("Hand_L").gameObject);
                armPart.m_bUse32PixelHand = true;
                break;
            case 10:
                armPart.m_weaponType = WEAPON_TYPE.JAVELIN;
                armPart.m_strNameKey = "WeaponName_javelin_00";
                fRange = Random.Range(80, 90);
                fRandom = Random.Range(30, 60);
                fSpeedRandom = Random.Range(40, 70);
                armPart.m_bUse32PixelHand = true;
                break;
        }

        //		arm.GetComponent<Part> ().m_dicStat = new Dictionary<string, float>();
        Animator anim = armPart.gameObject.GetComponent<Animator>();
        anim.runtimeAnimatorController = m_weapon_anim_controller[(int)armPart.m_weaponType];
        armPart.m_dicStat.Add("Attack", fRandom);
        armPart.m_dicStat.Add("AttackSpeed", fSpeedRandom);
        armPart.m_dicStat.Add("Range", fRange);

        fRandom = Random.Range(40, 70);
        //armPart.m_fHealth = fRandom;
        armPart.m_fCurHealth = fRandom;
        armPart.m_dicStat.Add("Health", fRandom);
        armPart.m_iSaveValue = iArmRandom;
        armPart.m_iEnemyType = (int)ENEMY_TYPE.CIVILIAN;

        //Legs Setting
        float fRandomDodge = 0;
        GameObject leg = obj.transform.Find("Leg").gameObject;
        Part legPart = leg.GetComponent<Part>();
        int iLegRandom = Random.Range(0, m_sheet_civilian_leg.Length);
        leg.GetComponent<SpriteRenderer>().sprite = m_sheet_civilian_leg[iLegRandom];
        if (iLegRandom < 6)
        { // normal
            legPart.m_strNameKey = "PartName_civ_legs_0";
            fRandom = Random.Range(50, 70);
            fRandomDodge = Random.Range(30, 50);
        }
        else
        { // thin
            legPart.m_strNameKey = "PartName_civ_legs_1";
            fRandom = Random.Range(30, 50);
            fRandomDodge = Random.Range(10, 30);
        }

        //		leg.GetComponent<Part> ().m_dicStat = new Dictionary<string, float>();

        //legPart.m_fHealth = fRandom;
        legPart.m_fCurHealth = fRandom;
        legPart.m_dicStat.Add("Health", fRandom);
        legPart.m_dicStat.Add("Dodge", fRandomDodge);

        legPart.m_dicStatBuff["Dodge"] = fRandomDodge;

        legPart.m_lstStrBuff.Add("LegBuff");
        legPart.m_iSaveValue = iLegRandom;
        legPart.m_iEnemyType = (int)ENEMY_TYPE.CIVILIAN;

        if (Application.loadedLevelName.Equals("Main"))
        {
            Destroy(obj.GetComponent<FSM_Enemy>());
            obj.AddComponent<FSM_MainScene_Enemy>();
        }

        int iRace = Random.Range(1, m_texture_skin_palette.width);
        if (iRace == 1) iRace -= 1;

        int iHair = Random.Range(0, m_texture_hair_palette.width);

        for (int i = 0; i < obj.transform.childCount; ++i)
        {
            DPSpritePalette palette = obj.transform.GetChild(i).GetComponent<DPSpritePalette>();

            if (i == 0)
            {
                DPPaletteCombiner combiner = obj.transform.GetChild(i).GetComponent<DPPaletteCombiner>();
                combiner.SetPaletteIndex(iRace, iHair);
            }
            else
            {
                palette.PaletteIndex = iRace;
            }
        }

        obj.transform.localPosition = RandomBornPos(obj);

        return obj;
    }

    public GameObject Create_Mercenary(float fProsperity)
    {
        GameObject obj;
        float fRandom = 0f;


        obj = Instantiate(m_objHuman) as GameObject;

        obj.transform.parent = GameObject.Find("Enemies").transform;

        //Head Setting
        float fRandomIQ = 0;
        GameObject head = obj.transform.Find("Head").gameObject;
        Part headPart = head.GetComponent<Part>();

        int iHeadRandom = Random.Range(0, m_sheet_mercenary_head.Length);
        head.GetComponent<SpriteRenderer>().sprite = m_sheet_mercenary_head[iHeadRandom];
        headPart.m_strNameKey = "PartName_mer_head_0";
        fRandom = Random.Range(70, 100);
        fRandomIQ = Random.Range(80, 100);

        //headPart.m_fHealth = fRandom;
        headPart.m_fCurHealth = fRandom;
        headPart.m_dicStat.Add("Health", fRandom);
        headPart.m_dicStat.Add("IQ", fRandomIQ);
        headPart.m_iSaveValue = iHeadRandom;
        headPart.m_iEnemyType = (int)ENEMY_TYPE.MERCENARY;

        switch (Random.Range(0, 3))
        {
            case 0:
                break;
            case 1:
                headPart.m_lstStrBuff.Add("HeadBuff_0");
                if (headPart.m_dicStat["IQ"] < 80)
                    headPart.m_dicStatBuff["Attack"] = 1;
                else
                    headPart.m_dicStatBuff["Attack"] = 2;
                break;
            case 2:
                headPart.m_lstStrBuff.Add("HeadBuff_1");
                if (headPart.m_dicStat["IQ"] < 80)
                    headPart.m_dicStatBuff["AttackSpeed"] = 1;
                else
                    headPart.m_dicStatBuff["AttackSpeed"] = 2;
                break;
        }

        //Body Setting
        GameObject body = obj.transform.Find("Body").gameObject;
        int iBodyRandom = Random.Range(0, m_iMercenary_body_count);
        body.GetComponent<SpriteRenderer>().sprite = m_sheet_mercenary_body[iBodyRandom][0];
        body.GetComponent<SpriteSheet>().m_sheet_sprite = m_sheet_mercenary_body[iBodyRandom];

        //		body.GetComponent<Part> ().m_dicStat = new Dictionary<string, float>();

        bool bIsTutorial = false;
        if (GameMgr.getInstance.m_bIsTutorial)
            bIsTutorial = true;

        if (!bIsTutorial)
            fRandom = Random.Range(130, 180);
        else
            fRandom = 50f;

        Part bodyPart = body.GetComponent<Part>();
        //bodyPart.m_fHealth = fRandom;
        bodyPart.m_fCurHealth = fRandom;
        bodyPart.m_dicStat.Add("Health", fRandom);

        fRandom = Random.Range(30, 60);
        bodyPart.m_dicStat.Add("Defense", fRandom);
        bodyPart.m_iSaveValue = iBodyRandom;
        bodyPart.m_iEnemyType = (int)ENEMY_TYPE.MERCENARY;
        bodyPart.m_strNameKey = "PartName_mer_body_0";

        float fRange = 0f;

        //Arms Setting
        GameObject arm = obj.transform.Find("Hand_R").gameObject;
        Part armPart = arm.GetComponent<Part>();
        int iArmRandom = Random.Range(0, m_sheet_mercenary_arm.Length - 1);

        if (bIsTutorial)
            iArmRandom = 2;

        if (BattleSceneMgr.getInstance.m_bSiege && Random.Range(0, 100) > 50) // siege range weapon
        {
            switch (Random.Range(0, 3))
            {
                case 0:
                    iArmRandom = 6;
                    break;
                case 1:
                    iArmRandom = 7;
                    break;
                case 2:
                    iArmRandom = 9;
                    break;
            }
        }

        arm.GetComponent<SpriteRenderer>().sprite = m_sheet_mercenary_arm[iArmRandom];
        float fSpeedRandom = 0f;

        switch (iArmRandom)
        {
            case 0:
                armPart.m_weaponType = WEAPON_TYPE.ONE_HAND;
                armPart.m_strNameKey = "WeaponName_oneHand_05";
                fRange = Random.Range(30, 40);
                fRandom = Random.Range(40, 60);
                fSpeedRandom = Random.Range(20, 40);
                armPart.m_bUse32PixelHand = true;
                break;
            case 1:
                armPart.m_weaponType = WEAPON_TYPE.ONE_HAND;
                armPart.m_strNameKey = "WeaponName_oneHand_06";
                fRange = Random.Range(20, 30);
                fRandom = Random.Range(20, 40);
                fSpeedRandom = Random.Range(70, 100);
                break;
            case 2:
                armPart.m_weaponType = WEAPON_TYPE.ONE_HAND;
                armPart.m_strNameKey = "WeaponName_oneHand_07";
                fRange = Random.Range(30, 40);
                fRandom = Random.Range(30, 60);
                fSpeedRandom = Random.Range(40, 70);
                armPart.m_bUse32PixelHand = true;

                if (bIsTutorial)
                {
                    fRange = 30f;
                    fRandom = 30f;
                    fSpeedRandom = 50f;
                }
                break;
            case 3:
                armPart.m_weaponType = WEAPON_TYPE.POLE;
                armPart.m_strNameKey = "WeaponName_pole_01";
                fRange = Random.Range(50, 70);
                fRandom = Random.Range(40, 80);
                fSpeedRandom = Random.Range(10, 30);
                Destroy(obj.transform.Find("Hand_L").gameObject);
                armPart.m_bUse32PixelHand = true;
                break;
            case 4:
                armPart.m_weaponType = WEAPON_TYPE.TWO_HAND;
                armPart.m_strNameKey = "WeaponName_twoHand_04";
                fRange = Random.Range(50, 70);
                fRandom = Random.Range(40, 80);
                fSpeedRandom = Random.Range(10, 30);
                Destroy(obj.transform.Find("Hand_L").gameObject);
                armPart.m_bUse32PixelHand = true;
                break;
            case 5:
                armPart.m_weaponType = WEAPON_TYPE.ONE_HAND;
                armPart.m_strNameKey = "WeaponName_oneHand_08";
                fRange = Random.Range(40, 50);
                fRandom = Random.Range(30, 60);
                fSpeedRandom = Random.Range(20, 40);
                break;
            case 6:
                armPart.m_weaponType = WEAPON_TYPE.BOW;
                armPart.m_strNameKey = "WeaponName_bow_00";
                fRange = Random.Range(90, 100);
                fRandom = Random.Range(30, 60);
                fSpeedRandom = Random.Range(40, 70);
                Destroy(obj.transform.Find("Hand_L").gameObject);
                break;
            case 7:
                armPart.m_weaponType = WEAPON_TYPE.CROSSBOW;
                armPart.m_strNameKey = "WeaponName_crossbow_00";
                fRange = Random.Range(80, 90);
                fRandom = Random.Range(50, 80);
                fSpeedRandom = Random.Range(10, 30);
                Destroy(obj.transform.Find("Hand_L").gameObject);
                break;
            case 8:
                armPart.m_weaponType = WEAPON_TYPE.TWO_HAND;
                armPart.m_strNameKey = "WeaponName_twoHand_05";
                fRange = Random.Range(40, 50);
                fRandom = Random.Range(50, 80);
                fSpeedRandom = Random.Range(10, 20);
                Destroy(obj.transform.Find("Hand_L").gameObject);
                armPart.m_bUse32PixelHand = true;
                break;
            case 9:
                armPart.m_weaponType = WEAPON_TYPE.JAVELIN;
                armPart.m_strNameKey = "WeaponName_javelin_00";
                fRange = Random.Range(80, 90);
                fRandom = Random.Range(30, 60);
                fSpeedRandom = Random.Range(40, 70);
                armPart.m_bUse32PixelHand = true;
                break;
        }

        //		arm.GetComponent<Part> ().m_dicStat = new Dictionary<string, float>();
        Animator anim = armPart.gameObject.GetComponent<Animator>();
        anim.runtimeAnimatorController = m_weapon_anim_controller[(int)armPart.m_weaponType];
        armPart.m_dicStat.Add("Attack", fRandom);
        armPart.m_dicStat.Add("AttackSpeed", fSpeedRandom);
        armPart.m_dicStat.Add("Range", fRange);

        fRandom = Random.Range(40, 70);
        //armPart.m_fHealth = fRandom;
        armPart.m_fCurHealth = fRandom;
        armPart.m_dicStat.Add("Health", fRandom);
        armPart.m_iSaveValue = iArmRandom;
        armPart.m_iEnemyType = (int)ENEMY_TYPE.MERCENARY;

        if (obj.transform.Find("Hand_L") != null)
        {
            arm = obj.transform.Find("Hand_L").gameObject;
            armPart = arm.GetComponent<Part>();
            if (Random.Range(0, 100) < 70)
            {
                arm.transform.localPosition = new Vector3(0.09f, 0.06f);
                arm.transform.localRotation = Quaternion.AngleAxis(-35f, Vector3.forward);
                arm.GetComponent<SpriteRenderer>().sortingOrder = 1;
                armPart.m_strNameKey = "WeaponName_shield_00";
                fRandom = Random.Range(30, 50);
                fSpeedRandom = Random.Range(70, 100);
                iArmRandom = 1;
            }
            else
            {
                iArmRandom = 0;
            }
            arm.GetComponent<SpriteRenderer>().sprite = m_sheet_mercenary_arm_left[iArmRandom];
            //armPart.m_fHealth = fRandom;
            armPart.m_fCurHealth = fRandom;
            armPart.m_dicStat.Add("Health", fRandom);
            armPart.m_dicStat.Add("Defense", fSpeedRandom);
            armPart.m_iSaveValue = iArmRandom;
            armPart.m_iEnemyType = (int)ENEMY_TYPE.MERCENARY;
        }


        //Legs Setting
        float fRandomDodge = 0;
        GameObject leg = obj.transform.Find("Leg").gameObject;
        Part legPart = leg.GetComponent<Part>();
        int iLegRandom = Random.Range(0, m_sheet_mercenary_leg.Length);
        leg.GetComponent<SpriteRenderer>().sprite = m_sheet_mercenary_leg[iLegRandom];
        legPart.m_strNameKey = "PartName_mer_legs_0";
        fRandom = Random.Range(70, 100);
        fRandomDodge = Random.Range(50, 70);

        //		leg.GetComponent<Part> ().m_dicStat = new Dictionary<string, float>();

        //legPart.m_fHealth = fRandom;
        legPart.m_fCurHealth = fRandom;
        legPart.m_dicStat.Add("Health", fRandom);
        legPart.m_dicStat.Add("Dodge", fRandomDodge);

        legPart.m_dicStatBuff["Dodge"] = fRandomDodge;

        legPart.m_lstStrBuff.Add("LegBuff");
        legPart.m_iSaveValue = iLegRandom;
        legPart.m_iEnemyType = (int)ENEMY_TYPE.MERCENARY;

        if (Application.loadedLevelName.Equals("Main"))
        {
            Destroy(obj.GetComponent<FSM_Enemy>());
            obj.AddComponent<FSM_MainScene_Enemy>();
        }

        int iRace = Random.Range(1, m_texture_skin_palette.width);
        if (iRace == 1) iRace -= 1;

        int iHair = Random.Range(0, m_texture_hair_palette.width);

        for (int i = 0; i < obj.transform.childCount; ++i)
        {
            DPSpritePalette palette = obj.transform.GetChild(i).GetComponent<DPSpritePalette>();

            if (i == 0)
            {
                DPPaletteCombiner combiner = obj.transform.GetChild(i).GetComponent<DPPaletteCombiner>();
                combiner.SetPaletteIndex(iRace, iHair);
            }
            else
            {
                palette.PaletteIndex = iRace;
            }
        }

        obj.transform.localPosition = RandomBornPos(obj);

        return obj;
    }

    public GameObject Create_Knight(float fProsperity)
    {
        GameObject obj;
        float fRandom = 0f;


        obj = Instantiate(m_objHuman) as GameObject;

        obj.transform.parent = GameObject.Find("Enemies").transform;

        //Head Setting
        float fRandomIQ = 0;
        GameObject head = obj.transform.Find("Head").gameObject;
        Part headPart = head.GetComponent<Part>();

        int iHeadRandom = Random.Range(0, m_sheet_knight_head.Length);
        head.GetComponent<SpriteRenderer>().sprite = m_sheet_knight_head[iHeadRandom];
        headPart.m_strNameKey = "PartName_kni_head_0";
        fRandom = Random.Range(10, 13);
        fRandomIQ = Random.Range(90, 110);

        //headPart.m_fHealth = fRandom;
        headPart.m_fCurHealth = fRandom;
        headPart.m_dicStat.Add("Health", fRandom);
        headPart.m_dicStat.Add("IQ", fRandomIQ);
        headPart.m_iSaveValue = iHeadRandom;
        headPart.m_iEnemyType = (int)ENEMY_TYPE.KNIGHT;

        switch (Random.Range(0, 3))
        {
            case 0:
                break;
            case 1:
                headPart.m_lstStrBuff.Add("HeadBuff_0");
                if (headPart.m_dicStat["IQ"] < 80)
                    headPart.m_dicStatBuff["Attack"] = 1;
                else
                    headPart.m_dicStatBuff["Attack"] = 2;
                break;
            case 2:
                headPart.m_lstStrBuff.Add("HeadBuff_1");
                if (headPart.m_dicStat["IQ"] < 80)
                    headPart.m_dicStatBuff["AttackSpeed"] = 1;
                else
                    headPart.m_dicStatBuff["AttackSpeed"] = 2;
                break;
        }

        //Body Setting
        GameObject body = obj.transform.Find("Body").gameObject;
        int iBodyRandom = Random.Range(0, m_iKnight_body_count);
        body.GetComponent<SpriteRenderer>().sprite = m_sheet_knight_body[iBodyRandom][0];
        body.GetComponent<SpriteSheet>().m_sheet_sprite = m_sheet_knight_body[iBodyRandom];

        //		body.GetComponent<Part> ().m_dicStat = new Dictionary<string, float>();

        fRandom = Random.Range(18, 23);
        Part bodyPart = body.GetComponent<Part>();
        //bodyPart.m_fHealth = fRandom;
        bodyPart.m_fCurHealth = fRandom;
        bodyPart.m_dicStat.Add("Health", fRandom);

        fRandom = Random.Range(6, 9);
        bodyPart.m_dicStat.Add("Defense", fRandom);
        bodyPart.m_iSaveValue = iBodyRandom;
        bodyPart.m_iEnemyType = (int)ENEMY_TYPE.KNIGHT;
        bodyPart.m_strNameKey = "PartName_kni_body_0";

        //Arms Setting
        GameObject arm = obj.transform.Find("Hand_R").gameObject;
        Part armPart = arm.GetComponent<Part>();
        int iArmRandom = Random.Range(0, m_sheet_knight_arm.Length - 1);
        arm.GetComponent<SpriteRenderer>().sprite = m_sheet_knight_arm[iArmRandom];
        float fSpeedRandom = 0f;
        switch (iArmRandom)
        {
            case 0:
                armPart.m_weaponType = WEAPON_TYPE.ONE_HAND;
                armPart.m_strNameKey = "WeaponName_oneHand_09";
                fRandom = Random.Range(6, 9);
                fSpeedRandom = Random.Range(4, 6);
                armPart.m_bUse32PixelHand = true;
                break;
            case 1:
                armPart.m_weaponType = WEAPON_TYPE.ONE_HAND;
                armPart.m_strNameKey = "WeaponName_oneHand_10";
                fRandom = Random.Range(6, 9);
                fSpeedRandom = Random.Range(4, 6);
                break;
        }

        //		arm.GetComponent<Part> ().m_dicStat = new Dictionary<string, float>();
        Animator anim = armPart.gameObject.GetComponent<Animator>();
        anim.runtimeAnimatorController = m_weapon_anim_controller[(int)armPart.m_weaponType];
        armPart.m_dicStat.Add("Attack", fRandom);
        armPart.m_dicStat.Add("AttackSpeed", fSpeedRandom);

        fRandom = Random.Range(7, 10);
        //armPart.m_fHealth = fRandom;
        armPart.m_fCurHealth = fRandom;
        armPart.m_dicStat.Add("Health", fRandom);
        armPart.m_iSaveValue = iArmRandom;
        armPart.m_iEnemyType = (int)ENEMY_TYPE.KNIGHT;

        if (obj.transform.Find("Hand_L") != null)
        {
            arm = obj.transform.Find("Hand_L").gameObject;
            arm.transform.localPosition = new Vector3(0.09f, 0.06f);
            arm.transform.localRotation = Quaternion.AngleAxis(-35f, Vector3.forward);
            arm.GetComponent<SpriteRenderer>().sortingOrder = 1;
            armPart = arm.GetComponent<Part>();
            if (Random.Range(0, 100) < 50)
            {
                armPart.m_strNameKey = "WeaponName_shield_00";
                fRandom = Random.Range(7, 10);
                fSpeedRandom = Random.Range(10, 15);
                iArmRandom = 1;
            }
            else
            {
                armPart.m_strNameKey = "WeaponName_shield_01";
                fRandom = Random.Range(7, 10);
                fSpeedRandom = Random.Range(12, 17);
                iArmRandom = 2;
            }
            arm.GetComponent<SpriteRenderer>().sprite = m_sheet_knight_arm_left[iArmRandom];
            //armPart.m_fHealth = fRandom;
            armPart.m_fCurHealth = fRandom;
            armPart.m_dicStat.Add("Health", fRandom);
            armPart.m_dicStat.Add("Defense", fSpeedRandom);
            armPart.m_iSaveValue = iArmRandom;
            armPart.m_iEnemyType = (int)ENEMY_TYPE.KNIGHT;
        }


        //Legs Setting
        float fRandomDodge = 0;
        GameObject leg = obj.transform.Find("Leg").gameObject;
        Part legPart = leg.GetComponent<Part>();
        int iLegRandom = Random.Range(0, m_sheet_knight_leg.Length);
        leg.GetComponent<SpriteRenderer>().sprite = m_sheet_knight_leg[iLegRandom];
        legPart.m_strNameKey = "PartName_kni_legs_0";
        fRandom = Random.Range(10, 13);
        fRandomDodge = Random.Range(7, 9);

        //		leg.GetComponent<Part> ().m_dicStat = new Dictionary<string, float>();

        //legPart.m_fHealth = fRandom;
        legPart.m_fCurHealth = fRandom;
        legPart.m_dicStat.Add("Health", fRandom);
        legPart.m_dicStat.Add("Dodge", fRandomDodge);

        legPart.m_dicStatBuff["Dodge"] = fRandomDodge;

        legPart.m_lstStrBuff.Add("LegBuff");
        legPart.m_iSaveValue = iLegRandom;
        legPart.m_iEnemyType = (int)ENEMY_TYPE.KNIGHT;

        if (Application.loadedLevelName.Equals("Main"))
        {
            Destroy(obj.GetComponent<FSM_Enemy>());
            obj.AddComponent<FSM_MainScene_Enemy>();
        }

        obj.transform.localPosition = RandomBornPos(obj);

        return obj;
    }

    Vector3 RandomBornPos(GameObject obj)
    {
        Vector3 vecBornPos = new Vector3(0, Random.Range(-0.35f, 0.35f));

        if (Random.Range(0, 2) == 0 || BattleSceneMgr.getInstance.m_bSiege)
        {
            vecBornPos = new Vector3(2f, vecBornPos.y);
        }
        else
        {
            vecBornPos = new Vector3(-2f, vecBornPos.y);
        }

        if (GameMgr.getInstance.m_bIsTutorial)
            vecBornPos = new Vector3(2f, 0.3f);

        if (!Application.loadedLevelName.Equals("Main"))
            obj.GetComponent<FSM_Enemy>().m_objHealthBar = Create_HealthBar(obj);

        return vecBornPos;
    }

    IEnumerator SetHairColor(DPPaletteMultiCombiner combiner, int iHairIdx)
    {
        yield return null;

        combiner.SetPaletteIndex(0, iHairIdx);

        yield return null;
        combiner.NextPalette(1);

        do
        {
            yield return new WaitForSeconds(0.1f);
            combiner.PrevPalette(1);
            combiner.UpdateTextures();
        } while (true);
    }
}
