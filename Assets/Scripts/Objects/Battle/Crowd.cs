using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Crowd : MonoBehaviour
{
    // Use this for initializatin
    void Start()
    {
        StartCoroutine(layerOrderHandlr());
    }


    IEnumerator layerOrderHandlr()
    {
        int iSortingOrder = 0;
        SpriteRenderer spriteRenderer = GetComponent<SpriteRenderer>();

        do
        {
            iSortingOrder = (int)(-transform.localPosition.y * 1000f);

            spriteRenderer.sortingOrder = iSortingOrder;

            yield return null;

        } while (true);
    }
}
