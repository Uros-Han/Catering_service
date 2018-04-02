using System.Linq;
using UnityEngine;


[System.Serializable]
public class DPPaletteTextureIndex
{
    public Texture2D PaletteTexture;
    public int index;

    public int numberOfPalettes { get { return (PaletteTexture == null) ? 0 : PaletteTexture.width; } }
    public int numberOfColors { get { return (PaletteTexture == null) ? 0 : PaletteTexture.height; } }

    public string name { get { return PaletteTexture == null ? "" : PaletteTexture.name; } }

    public void NextPalette()
    {
        index = (index + 1) % numberOfPalettes;
    }

    public void PrevPalette()
    {
        if (index == 0) index = numberOfPalettes - 1;
        else index -= 1;
    }
}

[ExecuteInEditMode]
public class DPPaletteMultiCombiner : MonoBehaviour
{
    [SerializeField]
    DPPaletteTextureIndex[] PaletteTextures;

    Texture2D paletteTexture;
    DPSpritePalette dps;
    DPSpritePaletteUI dpsui;

    bool isDirty = true;
    public DPPaletteMultiCombiner UsePalettesFrom = null;

    private void Awake()
    {
        GetDPS();
    }

    private void GetDPS()
    {
        dps = GetComponent<DPSpritePalette>();
        dpsui = GetComponent<DPSpritePaletteUI>();
        if (dps == null && dpsui == null) Debug.LogError(string.Format("The game object {0} doesn't have a DPSpritePalette or DPSpritePaletteUI component attached. Please attach it then add this component!", gameObject.name));
    }

    private void Start()
    {
        UpdateTextures();
    }

    /// <summary>
    /// Sets the index of the palette paletteNumber
    /// </summary>
    /// <param name="paletteNumber"></param>
    /// <param name="index"></param>
    public void SetPaletteIndex(int paletteNumber, int index)
    {
        if (PaletteTextures == null || paletteNumber >= PaletteTextures.Length || paletteNumber < 0) { Debug.LogError(string.Format("Palette Number {0} is out of range on {1}", paletteNumber, gameObject.name)); return; }
        PaletteTextures[paletteNumber].index = index;
        UpdateTextures();
    }

    /// <summary>
    /// Return the palette index of the 'Palette Texture' paletteNumber
    /// </summary>
    /// <param name="paletteNumber"></param>
    /// <returns>The palette index of the Palette Texture paletteNumber</returns>
    public int GetIndex(int paletteNumber)
    {
        if (PaletteTextures == null || paletteNumber >= PaletteTextures.Length || paletteNumber < 0) { Debug.LogError(string.Format("Palette Number {0} is out of range on {1}", paletteNumber, gameObject.name)); return 0; }
        return PaletteTextures[paletteNumber].index;
    }

    /// <summary>
    /// Returns all the assigned Palettes Textures.
    /// </summary>
    /// <returns>All the assigned Palettes Textures</returns>
    public DPPaletteTextureIndex[] GetPaletteTextures()
    {
        isDirty = true;
        return PaletteTextures;
    }

    /// <summary>
    /// Replaces the assigned Palette Textures.
    /// </summary>
    /// <param name="PaletteTextures"></param>
    public void SetPaletteTextures(DPPaletteTextureIndex[] PaletteTextures)
    {
        this.PaletteTextures = PaletteTextures;
        isDirty = true;
        UpdateTextures();
    }

    /// <summary>
    /// Replaces the 'paletteNumber'-th Palette Texture
    /// </summary>
    /// <param name="paletteNumber">Number of Palette Texture to be changed</param>
    /// <param name="tex">The new Palette Texture</param>
    private void SetPaletteTexture(int paletteNumber, Texture2D tex)
    {
        if (PaletteTextures == null || paletteNumber >= PaletteTextures.Length || paletteNumber < 0) { Debug.LogError(string.Format("Palette Number {0} is out of range on {1}", paletteNumber, gameObject.name)); return; }
        PaletteTextures[paletteNumber].PaletteTexture = tex;
        isDirty = true;
        UpdateTextures();
    }

    /// <summary>
    /// Change to the next palette.
    /// </summary>
    public void NextPalette(int paletteNumber)
    {
        if (PaletteTextures == null || paletteNumber >= PaletteTextures.Length || paletteNumber < 0) { Debug.LogError(string.Format("Palette Number {0} is out of range on {1}", paletteNumber, gameObject.name)); return; }
        PaletteTextures[paletteNumber].NextPalette();
    }

    /// <summary>
	/// Change to the previous palette.
	/// </summary>
    public void PrevPalette(int paletteNumber)
    {
        if (PaletteTextures == null || paletteNumber >= PaletteTextures.Length || paletteNumber < 0) { Debug.LogError(string.Format("Palette Number {0} is out of range on {1}", paletteNumber, gameObject.name)); return; }
        PaletteTextures[paletteNumber].PrevPalette();
    }

    /// <summary>
    /// Create the Combined Palette Texture
    /// </summary>
    public void UpdateTextures()
    {
        if(dps == null && dpsui == null) GetDPS();

        if (UsePalettesFrom != null)
        {
            UseOtherPaletteTex();
            return;
        }
        if (isDirty)
        {
            paletteTexture = CombineTextures();
            isDirty = false;
        }
        SetPaletteTexture();
        SetPaletteIndex();
    }

    private void UseOtherPaletteTex()
    {
        if (UsePalettesFrom == null) return;
        if (UsePalettesFrom == this)
        {
            Debug.LogError("Cyclic reference of DPPaletteCombiners is not allowed!");
            return;
        }
        PaletteTextures = UsePalettesFrom.PaletteTextures;
        if (UsePalettesFrom.paletteTexture == null) UsePalettesFrom.UpdateTextures();
        UsePalettesFrom.UpdateTextures();
        paletteTexture = UsePalettesFrom.paletteTexture;
        SetPaletteTexture();
        SetPaletteIndex();
    }


    private void SetPaletteIndex()
    {
        if (dps != null) dps.SetPaletteIndex(1);
        if (dpsui != null) dpsui.SetPaletteIndex(1);
    }

    private void SetPaletteTexture()
    {
        if (dps != null) dps.paletteTexture = paletteTexture;
        if (dpsui != null) dpsui.paletteTexture = paletteTexture;
    }

    Texture2D CombineTextures()
    {
        if (PaletteTextures == null)
        {
            Debug.LogError(string.Format("Palettes not assigned on {0}!", gameObject.name));
            return null;
        }

        int numCombinedColors = 0;
        foreach (var palette in PaletteTextures)
        {
            numCombinedColors += palette.numberOfColors;
        }

        if ((dps != null && numCombinedColors > DPSpritePalette.MAX_PALETTE_COLORS) || (dpsui != null && numCombinedColors > DPSpritePaletteUI.MAX_PALETTE_COLORS))
        {
            Debug.LogError("The combined palette color number exceeds the MAX_PALETTE_COLORS value!");
            return null;
        }

        int height = numCombinedColors;
        int width = 2;
        
        Texture2D newTex = new Texture2D(width, height, TextureFormat.RGBA32, false);
        newTex.filterMode = FilterMode.Point;
        Color32[] colors = new Color32[width * height];

        int BasePaletteColorIndex = 0;
        foreach (var palette in PaletteTextures)
        {
            if (palette.PaletteTexture == null) continue;
            Color32[] paletteColors = palette.PaletteTexture.GetPixels32();

            if(palette.index >= palette.PaletteTexture.width)
            {
                Debug.LogError(string.Format("Palette Index {0} is out of range on {1}", palette.index, palette.PaletteTexture.name));
                return null;
            }
            for (int i = 0; i < palette.PaletteTexture.height; ++i)
            {
                colors[BasePaletteColorIndex * width + 0] = paletteColors[i* palette.PaletteTexture.width+0];
                colors[BasePaletteColorIndex * width + 1] = paletteColors[i * palette.PaletteTexture.width+ palette.index];
                BasePaletteColorIndex++;
            }

        }
        newTex.SetPixels32(colors);
        newTex.Apply(true, true);
        newTex.name = "Combined Palette Texture";
        return newTex;
    }

}
