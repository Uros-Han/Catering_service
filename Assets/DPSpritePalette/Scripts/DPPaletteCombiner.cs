using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/***********************************************************************
 *  DPSpritePalette
 *  Created by Davi Santos - davisan2@gmail.com
 ***********************************************************************/

[ExecuteInEditMode]
public class DPPaletteCombiner : MonoBehaviour
{
    DPSpritePalette dps;
    DPSpritePaletteUI dpsui;

    public Texture2D paletteTexture1;
    public Texture2D paletteTexture2;
    Texture2D combinedPaletteTexture;
    public int numberOfPalettesTexture1 { get; private set; }
    public int numberOfPalettesTexture2 { get; private set; }
    public int numberOfColorsTexture1 { get; private set; }
    public int numberOfColorsTexture2 { get; private set; }
    public int numberOfColorsCombinedTexture { get { return (combinedPaletteTexture == null) ? 1 : combinedPaletteTexture.height; } }
    public int numberOfPalettesCombinedTexture { get { return (combinedPaletteTexture == null) ? 1 : combinedPaletteTexture.width; } }
    bool isDirty = true;

    [Header("Override ")]
    public DPPaletteCombiner UsePalettesFrom = null;

    /// <summary>
    /// Set the index 1
    /// </summary>
    public int currentIndex1
    {
        get { return _currentIndex1; }
        set { SetPalette1Index(value); }
    }
    /// <summary>
    /// /// Set the index 2
    /// </summary>
    public int currentIndex2
    {
        get { return _currentIndex2; }
        set { SetPalette2Index(value); }
    }

    // don't change this from scripts use currentIndex1, currentIndex2, SetPalette1Index, SetPalette2Index or SetPaletteIndex()!!
    public int _currentIndex1;
    public int _currentIndex2;

    /// <summary>
	/// Change to the next palette.
	/// </summary>
    public void NextPalette1()
    {
        _currentIndex1 = (_currentIndex1 + 1) % numberOfPalettesTexture1;
        SetPalette1Index(_currentIndex1);
    }

    /// <summary>
	/// Change to the next palette.
	/// </summary>
    public void NextPalette2()
    {
        _currentIndex2 = (_currentIndex2 + 1) % numberOfPalettesTexture2;
        SetPalette2Index(_currentIndex2);
    }

    /// <summary>
	/// Change to the previous palette.
	/// </summary>
    public void PrevPalette1()
    {
        if (_currentIndex1 == 0) _currentIndex1 = numberOfPalettesTexture1 - 1;
        else _currentIndex1 -= 1;
        SetPalette1Index(_currentIndex1);
    }

    /// <summary>
	/// Change to the previous palette.
	/// </summary>
    public void PrevPalette2()
    {
        if (_currentIndex2 == 0) _currentIndex2 = numberOfPalettesTexture2 - 1;
        else _currentIndex2 -= 1;
        SetPalette2Index(_currentIndex2);
    }

    /// <summary>
    /// Sets the index of the both palettes
    /// </summary>
    /// <param name="index1">Index of Palette 1</param>
    /// <param name="index2">Index of Palette 2</param>
    public void SetPaletteIndex(int index1, int index2)
    {
        if (dps == null && dpsui == null)
        {
            GetDPS();
            UpdateTextures();
        }

        _currentIndex1 = Mathf.Clamp(index1, 0, numberOfPalettesTexture1 - 1);
        _currentIndex2 = Mathf.Clamp(index2, 0, numberOfPalettesTexture2 - 1);
        int index = GetIndex(_currentIndex1, _currentIndex2);
        if (dps != null) dps.SetPaletteIndex(index);
        if (dpsui != null) dpsui.SetPaletteIndex(index);
    }

    /// <summary>
    /// Sets the index of the palette 1
    /// </summary>
    /// <param name="index">Index of Palette 1</param>
    public void SetPalette1Index(int index)
    {
        SetPaletteIndex(index, _currentIndex2);
    }

    /// <summary>
    /// Sets the index of the palette 2
    /// </summary>
    /// <param name="index">Index of Palette 2</param>
    public void SetPalette2Index(int index)
    {
        SetPaletteIndex(_currentIndex1, index);
    }

    /// <summary>
    /// Set The Palette Texture #1. You  must call UpdateTextures after this to apply the changes. 
    /// </summary>
    /// <param name="texture"></param>
    public void SetPaletteTexture1(Texture2D texture)
    {
        paletteTexture1 = texture;
        isDirty = true;
    }

    /// <summary>
    /// Set The Palette Texture #2. You  must call UpdateTextures after this to apply the changes. 
    /// </summary>
    /// <param name="texture"></param>
    public void SetPaletteTexture2(Texture2D texture)
    {
        paletteTexture2 = texture;
        isDirty = true;
    }

    /// <summary>
    /// If you changed any palette textures in run-time, call this method to update the combined paletteTexture
    /// </summary>
    public void UpdateTextures()
    {
        if (UsePalettesFrom != null)
        {
            UseOtherPaletteTex();
            return;
        }
        if (isDirty)
        {
            combinedPaletteTexture = CombineTextures(paletteTexture1, paletteTexture2);
            isDirty = false;
        }
        SetPaletteTexture();
        _currentIndex1 = Mathf.Clamp(_currentIndex1, 0, numberOfPalettesTexture1 - 1);
        _currentIndex2 = Mathf.Clamp(_currentIndex2, 0, numberOfPalettesTexture2 - 1);
    }

    private void UseOtherPaletteTex()
    {
        if (UsePalettesFrom == null) return;
        if (UsePalettesFrom == this)
        {
            Debug.LogError("Cyclic reference of DPPaletteCombiners is not allowed!");
            return;
        }
        if (UsePalettesFrom.combinedPaletteTexture == null) UsePalettesFrom.UpdateTextures();
        paletteTexture1 = UsePalettesFrom.paletteTexture1;
        paletteTexture2 = UsePalettesFrom.paletteTexture2;
        numberOfPalettesTexture1 = UsePalettesFrom.numberOfPalettesTexture1;
        numberOfPalettesTexture2 = UsePalettesFrom.numberOfPalettesTexture2;
        numberOfColorsTexture1 = UsePalettesFrom.numberOfColorsTexture1;
        numberOfColorsTexture2 = UsePalettesFrom.numberOfColorsTexture2;
        UsePalettesFrom.UpdateTextures();
        combinedPaletteTexture = UsePalettesFrom.combinedPaletteTexture;
        SetPaletteTexture();
        _currentIndex1 = Mathf.Clamp(_currentIndex1, 0, numberOfPalettesTexture1 - 1);
        _currentIndex2 = Mathf.Clamp(_currentIndex2, 0, numberOfPalettesTexture2 - 1);
    }

    private void Awake()
    {
        GetDPS();
        UpdateTextures();
    }
    private void Start()
    {
        UseOtherPaletteTex();
    }

    private void GetDPS()
    {
        dps = GetComponent<DPSpritePalette>();
        dpsui = GetComponent<DPSpritePaletteUI>();
        if (dps == null && dpsui == null) Debug.LogError(string.Format("The game object {0} doesn't have a DPSpritePalette or DPSpritePaletteUI component attached. Please attach it then add this component!", gameObject.name));
    }

    private void SetPaletteTexture()
    {
        if (combinedPaletteTexture == null) return;
        if (dps != null) dps.SetPalette(combinedPaletteTexture, false);
        if (dpsui != null) dpsui.SetPalette(combinedPaletteTexture, false);
    }

    private int GetIndex(int index1, int index2)
    {
        return index1 * numberOfPalettesTexture2 + index2;
    }

    /// <summary>
    /// Combine two palettes textures
    /// </summary>
    /// <param name="tex1"></param>
    /// <param name="tex2"></param>
    /// <returns></returns>
    Texture2D CombineTextures(Texture2D tex1, Texture2D tex2)
    {
        if (tex1 == null || tex2 == null) return null;

        numberOfPalettesTexture1 = tex1.width;
        numberOfPalettesTexture2 = tex2.width;
        numberOfColorsTexture1 = tex1.height;
        numberOfColorsTexture2 = tex2.height;

        Color32[] texColors1 = tex1.GetPixels32();
        Color32[] texColors2 = tex2.GetPixels32();

        int numCombinedPalettes = numberOfPalettesTexture1 * numberOfPalettesTexture2;
        int numCombinedColors = tex1.height + tex2.height;

        if ((dps != null && numCombinedColors > DPSpritePalette.MAX_PALETTE_COLORS) || (dpsui != null && numCombinedColors > DPSpritePaletteUI.MAX_PALETTE_COLORS))
        {
            Debug.LogError("The combined palette color number exceeds the MAX_PALETTE_COLORS value!");
            return null;
        }

        int width = numCombinedPalettes;
        int height = numCombinedColors;
        Texture2D newTex = new Texture2D(width, height, TextureFormat.RGBA32, false);
        newTex.filterMode = FilterMode.Point;
        Color[] colors = new Color[width * height];

        for (int j = 0; j < numberOfColorsTexture1; ++j)
        {
            colors[j * width + 0] = texColors1[j * tex1.width + 0];

            for (int i = 0; i < numberOfPalettesTexture1; ++i)
            {
                for (int k = 0; k < numberOfPalettesTexture2; ++k)
                {
                    colors[j * width + (i) * numberOfPalettesTexture2 + k] = texColors1[j * tex1.width + i];
                }
            }

        }

        for (int j = 0; j < numberOfColorsTexture2; ++j)
        {
            colors[(j + tex1.height) * width + 0] = texColors2[j * tex2.width + 0];

            for (int k = 0; k < numberOfPalettesTexture1; ++k)
            {
                for (int i = 0; i < numberOfPalettesTexture2; ++i)
                {
                    colors[(j + tex1.height) * width + (i) + k * (numberOfPalettesTexture2)] = texColors2[j * tex2.width + i];
                }
            }
        }

        newTex.SetPixels(colors);
        newTex.Apply(true, true);
        //newTex.Apply(true, false);
        newTex.name = string.Format("{0}_{1}", tex1.name, tex2.name);
        //byte[] bytes = newTex.EncodeToPNG();
        //System.IO.File.WriteAllBytes(Application.dataPath + "/../debug.png", bytes);
        return newTex;
    }
}