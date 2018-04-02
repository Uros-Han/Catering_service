using UnityEngine;
using UnityEditor;
using System.Collections;
using System.Collections.Generic;
using System.IO;

/***********************************************************************
 *  DPSpritePalette
 *  Created by Davi Santos - davisan2@gmail.com
 ***********************************************************************/

public class PaletteBuilderPngWindow : EditorWindow
{
    // The png palette file from PyxelEdit has 14x14 pixel
    private int PngPixelSizeWidth = 14;
    private int PngPixelSizeHeight = 14;

    [MenuItem("Window/DP Sprite Palette/Palette Builder - PNG")]
    static void CreatePBWindow()
    {
        PaletteBuilderPngWindow window = (PaletteBuilderPngWindow)EditorWindow.GetWindow(typeof(PaletteBuilderPngWindow), true, "Palette Builder - PNG");
        window.Show();
    }

    string PaletteName = "";
    Texture BasePalette = null;
    Texture[] Palettes;
    Vector2 scrollPosition;

    void OnGUI()
    {
        GUILayout.BeginHorizontal();
        if (GUILayout.Button("Save Palette Definition"))
        {
            SavePaletteData();
        }
        if (GUILayout.Button("Load Palette Definition"))
        {
            LoadPaletteData();
        }
        GUILayout.EndHorizontal();

        GUILayout.Label("Settings\nRemember: Set Filter Mode to 'Point' and \nCompression to 'None'\nMake sure all exported png has the same size", EditorStyles.boldLabel);
        PaletteName = EditorGUILayout.TextField("Palette Texture Name:", PaletteName);


        GUILayout.BeginHorizontal();
        EditorGUILayout.PrefixLabel(new GUIContent("Base Palette (.png):", "The Base Color palette."));
        BasePalette = (Texture)EditorGUILayout.ObjectField(BasePalette, typeof(Texture), false);
        GUILayout.EndHorizontal();

        scrollPosition = EditorGUILayout.BeginScrollView(scrollPosition);

        if (Palettes == null) Palettes = new Texture[64];

        for (int i = 0; i < Palettes.Length; ++i)
        {
            GUILayout.BeginHorizontal();
            EditorGUILayout.PrefixLabel(new GUIContent("Palette " + (i + 1) + " (.png):", ""));
            Palettes[i] = (Texture)EditorGUILayout.ObjectField(Palettes[i], typeof(Texture), false);
            GUILayout.EndHorizontal();
        }
        EditorGUILayout.EndScrollView();

        if (GUILayout.Button("Create Palette Texture!"))
        {
            if (Palettes == null) { EditorUtility.DisplayDialog("Error!", "Unexpected error!", "Close"); return; }
            if (PaletteName == null || string.IsNullOrEmpty(PaletteName)) { EditorUtility.DisplayDialog("Error!", "The Palette Texture Name is not assigned!", "Close"); return; }
            if (BasePalette == null) { EditorUtility.DisplayDialog("Error!", "The Base Palette is not assigned!", "Close"); return; }
            if (Palettes != null && Palettes[0] == null) { EditorUtility.DisplayDialog("Error!", "Must have at last one palette assigned and no skips between the palettes!", "Close"); return; }

            bool PaletteIsOk = true;
            bool foundNull = false;
            int PosSkipped = 0;
            for (int i = 0; i < Palettes.Length; ++i)
            {
                if (foundNull && Palettes[i] != null) PaletteIsOk = false;
                if (Palettes[i] == null && !foundNull) { foundNull = true; PosSkipped = i + 1; }
            }
            if (!PaletteIsOk) { EditorUtility.DisplayDialog("Error!", "You Skipped the Palette #" + PosSkipped + "!", "Close"); return; }


            EditorApplication.delayCall += CreatePalette;
        }

    }

    void CreatePalette()
    {
        int retVal = CreatePaletteTexture();
        if (retVal == -1) { EditorUtility.DisplayDialog("Error!", "Error while reading the Base Palette! The format is not recognized!", "Close"); return; }
        if (retVal > 0) { EditorUtility.DisplayDialog("Error!", "Error while reading the Palette" + retVal + "! The format is not recognized!", "Close"); return; }
        if (retVal < -10) { EditorUtility.DisplayDialog("Error!", "The Palette " + (-retVal - 10) + " has a different number of colors! Make sure all textures has the same szize!", "Close"); return; }
    }


    int CreatePaletteTexture()
    {
        List<int> indexes = new List<int>();
        Color32[] basePal = ReadPngPalette(BasePalette, indexes);
        if (basePal == null) return -1;

        
        List<Color32[]> palColors = new List<Color32[]>();

        for (int i = 0; i < Palettes.Length; ++i)
        {
            Color32[] colors = ReadPngPalette(Palettes[i], indexes);
            if (Palettes[i] != null && colors == null) return i + 1;
            if (Palettes[i] != null && colors != null) palColors.Add(colors);
        }

        // check sizes
        Debug.Log("colors="+ indexes.Count);
        int basePalSize = indexes.Count;
        /*
        for (int i = 0; i < palColors.Count; ++i)
        {
            int size = palColors[i].Length;
            if (size != basePalSize) return -(i + 1) - 10;
        }
        */

        // all done, now just create the texture!
        int numCols = basePalSize;
        int numPals = palColors.Count + 1;
        Texture2D tex = new Texture2D(numPals, numCols+1, TextureFormat.RGBA32, false);
        tex.filterMode = FilterMode.Point;
        tex.wrapMode = TextureWrapMode.Clamp;

        // copy the base colors
        for (int j = 0; j < numCols; ++j)
        {
            tex.SetPixel(0, j, basePal[numCols - 1 - j]);
        }
        tex.SetPixel(0, numCols, Color.clear);

        // copy the palettes
        for (int i = 1; i < numPals; ++i)
        {
            for (int j = 0; j < numCols; ++j)
            {
                //Debug.Log("a" + (numCols - 1 - j));
                //Debug.Log("b" + palColors[i].Length);
                if ( (numCols - 1 - j) >= palColors[i-1].Length) return -(i + 0) - 10;
                
                tex.SetPixel(i, j, palColors[i - 1][numCols - 1 - j]);
            }
            tex.SetPixel(i, numCols, Color.clear);
        }

        byte[] pngData = tex.EncodeToPNG();

        string path = "Assets";
        foreach (UnityEngine.Object obj in Selection.GetFiltered(typeof(UnityEngine.Object), SelectionMode.Assets))
        {
            path = AssetDatabase.GetAssetPath(obj);
            if (File.Exists(path))
            {
                path = Path.GetDirectoryName(path);
            }
            break;
        }

        string saveDir = EditorUtility.SaveFilePanel("Save Palette Texture", path, PaletteName + ".paltex.png", "paltex.png");

        if (pngData != null && !string.IsNullOrEmpty(saveDir)) File.WriteAllBytes(saveDir, pngData);
        DestroyImmediate(tex);
        AssetDatabase.Refresh();
        
        return 0;
    }

    Color32[] ReadPngPalette(Texture tex, List<int> indexes)
    {
        if (tex== null) return null;
        Texture2D tmpTex = CopyTexture(tex);
        Color32[] texColors = tmpTex.GetPixels32();

        bool BuildIndexes = indexes.Count == 0;

        int numberOfColors = (tmpTex.width / PngPixelSizeWidth) * (tmpTex.height / PngPixelSizeHeight);
        //Debug.Log("Colors:" + numberOfColors);
        //Color32[] colors = new Color32[numberOfColors];
        List<Color32> colors = new List<Color32>();
        for (int i = 0; i < numberOfColors; ++i)
        {
            int x = (i * PngPixelSizeWidth) % tmpTex.width;
            int y = ((i * PngPixelSizeWidth) / tmpTex.width)*PngPixelSizeHeight;
            //Debug.Log(string.Format("{0}, {1}", x,y));

            int cindex = x + y * tmpTex.width;
            if(cindex >= tmpTex.width*tmpTex.height) { EditorUtility.DisplayDialog("Error!", string.Format("The size of texture {0} is different. Make sure all exported png has the same size!", tex.name), "Close"); return null;  }
            Color32 c = texColors[cindex];

            if (BuildIndexes && c.a != 0) { indexes.Add(i); colors.Add(c); }
            if (!BuildIndexes && indexes.Contains(i)) colors.Add(c);
            //colors[i] = c;

        }
        return colors.ToArray();
    }

    Texture2D CopyTexture(Texture tex)
    {
        Texture2D newTexture = new Texture2D(tex.width, tex.height, TextureFormat.RGBA32, false);
        RenderTexture tmp = RenderTexture.GetTemporary(tex.width, tex.height, 0, RenderTextureFormat.Default, RenderTextureReadWrite.Linear);
        Graphics.Blit(tex, tmp);
        RenderTexture previous = RenderTexture.active;
        RenderTexture.active = tmp;
        newTexture.ReadPixels(new Rect(0, 0, tmp.width, tmp.height), 0, 0);
        newTexture.Apply();
        RenderTexture.active = previous;
        RenderTexture.ReleaseTemporary(tmp);
        return newTexture;
    }


    void SavePaletteData()
    {
        string path = "Assets";
        foreach (UnityEngine.Object obj in Selection.GetFiltered(typeof(UnityEngine.Object), SelectionMode.Assets))
        {
            path = AssetDatabase.GetAssetPath(obj);
            if (File.Exists(path))
            {
                path = Path.GetDirectoryName(path);
            }
            break;
        }
        string saveDir = EditorUtility.SaveFilePanel("Save Palette Texture Data", path, "", "datapal.asset");
        saveDir = saveDir.Replace(Application.dataPath, "Assets");

        if (!string.IsNullOrEmpty(saveDir))
        {
            PaletteTexturePngSaveData paletteData = ScriptableObject.CreateInstance<PaletteTexturePngSaveData>();

            paletteData.PaletteName = PaletteName;
            paletteData.BasePalette = BasePalette;
            paletteData.Palettes = new Texture[Palettes.Length];
            for (int i = 0; i < Palettes.Length; ++i)
            {
                paletteData.Palettes[i] = Palettes[i];
            }

            AssetDatabase.CreateAsset(paletteData, saveDir);
            AssetDatabase.SaveAssets();
        }

    }
    void LoadPaletteData()
    {
        string path = "Assets";
        foreach (UnityEngine.Object obj in Selection.GetFiltered(typeof(UnityEngine.Object), SelectionMode.Assets))
        {
            path = AssetDatabase.GetAssetPath(obj);
            if (File.Exists(path))
            {
                path = Path.GetDirectoryName(path);
            }
            break;
        }
        string loadDir = EditorUtility.OpenFilePanel("Open Palette Texture Data", path, "datapal.asset");
        loadDir = loadDir.Replace(Application.dataPath, "Assets");

        if (!string.IsNullOrEmpty(loadDir))
        {
            PaletteTexturePngSaveData paletteData = AssetDatabase.LoadAssetAtPath(loadDir, typeof(PaletteTexturePngSaveData)) as PaletteTexturePngSaveData;

            PaletteName = paletteData.PaletteName;
            BasePalette = paletteData.BasePalette;
            Palettes = new Texture[paletteData.Palettes.Length];
            for (int i = 0; i < paletteData.Palettes.Length; ++i)
            {
                Palettes[i] = paletteData.Palettes[i];
            }
        }
    }
}
