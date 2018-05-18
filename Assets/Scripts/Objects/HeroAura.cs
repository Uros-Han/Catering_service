using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HeroAura : MonoBehaviour
{

    public GameObject m_objOwner;

    // Use this for initialization
    void Start()
    {
        StartCoroutine(Aura());

    }

    IEnumerator Aura()
    {
        SpriteRenderer ownerSprite = m_objOwner.transform.Find("Body").GetComponent<SpriteRenderer>();
        ParticleSystemRenderer particle = GetComponent<ParticleSystemRenderer>();
        Vector3 positionAdjuster = new Vector3(0f, 0.135f, 0f);
        Unit heroUnit = m_objOwner.GetComponent<Unit>();

        while (m_objOwner != null && heroUnit.m_fCurMorale > 0f)
        {
            particle.sortingOrder = ownerSprite.sortingOrder - 2;

            transform.position = m_objOwner.transform.position + positionAdjuster;

            yield return null;
        }

        SpriteToParticlesAsset.SpriteToParticles spriteToParticles = GetComponent<SpriteToParticlesAsset.SpriteToParticles>();
        spriteToParticles.EmissionRate = 0f;

        //ParticleSystem particle1 = GetComponent<ParticleSystem>();
        //SpriteToParticlesAsset.SpriteToParticles spriteToParticles = GetComponent<SpriteToParticlesAsset.SpriteToParticles>();
        //while (m_objOwner != null && spriteToParticles.EmissionRate > 0f)
        //{
        //    //particle1.maxParticles -= 1;
        //    spriteToParticles.EmissionRate -= 5f;

        //    yield return null;
        //}

        gameObject.SetActive(false);
    }
}
