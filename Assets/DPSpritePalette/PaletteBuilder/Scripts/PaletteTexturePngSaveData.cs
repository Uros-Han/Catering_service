using UnityEngine;
using System.Collections;
using System;

/***********************************************************************
 *  DPSpritePalette
 *  Created by Davi Santos - davisan2@gmail.com
 ***********************************************************************/

[Serializable]
public class PaletteTexturePngSaveData : ScriptableObject
{
    public string PaletteName;
    public Texture BasePalette;
    public Texture[] Palettes;

}
