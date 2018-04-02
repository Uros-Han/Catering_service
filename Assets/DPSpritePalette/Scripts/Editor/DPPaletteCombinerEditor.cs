using UnityEngine;
using UnityEditor;
using System.Collections;

[CustomEditor(typeof(DPPaletteCombiner))]
public class DPPaletteCombinerEditor: Editor {

    DPPaletteCombiner dsp;
	public void OnEnable()
	{
		dsp = (DPPaletteCombiner)target;
	}

    public override void OnInspectorGUI()
    {
        EditorGUILayout.BeginVertical(EditorStyles.helpBox);

        if (dsp.UsePalettesFrom == null)
        {
            GUILayout.BeginHorizontal();
            EditorGUILayout.PrefixLabel(new GUIContent("Palette Texture 1", "The texture with the palettes!\nCheck the readme.txt for the format.\n" +
                                                       "For DPPaletteCombiner the palette textures must be Read/Write Enabled!!"));
            Texture2D oldTex = dsp.paletteTexture1;
            dsp.paletteTexture1 = (Texture2D)EditorGUILayout.ObjectField(dsp.paletteTexture1, typeof(Texture2D), false);
            if (oldTex != dsp.paletteTexture1)
            {
                dsp.UpdateTextures();
                if (dsp.GetComponent<DPSpritePaletteUI>() != null) dsp.GetComponent<DPSpritePaletteUI>().Refresh();
            }
            GUILayout.EndHorizontal();
        }

        GUILayout.BeginHorizontal();
        EditorGUILayout.PrefixLabel("Palette Index 1"); ;
        EditorGUI.BeginChangeCheck();
        int index1 = EditorGUILayout.IntField(dsp._currentIndex1);
        if (EditorGUI.EndChangeCheck())
        {
            Undo.RecordObject(target, "Changed Palette 1 Index");
            if (dsp.paletteTexture1 == null) index1 = 0;
            else index1 = Mathf.Clamp(index1, 0, dsp.paletteTexture1.width - 1);
            dsp.currentIndex1 = index1;
        }
        GUILayout.EndHorizontal();


        GUILayout.BeginHorizontal();
        if (GUILayout.Button("Previous Index", EditorStyles.miniButtonLeft)) { dsp.PrevPalette1(); }
        if (GUILayout.Button("Next Index", EditorStyles.miniButtonRight)) { dsp.NextPalette1(); }
        GUILayout.EndHorizontal();
        EditorGUILayout.EndVertical();

        EditorGUILayout.BeginVertical(EditorStyles.helpBox);
        if (dsp.UsePalettesFrom == null)
        {
            GUILayout.BeginHorizontal();
            EditorGUILayout.PrefixLabel(new GUIContent("Palette Texture 2", "The texture with the palettes!\nCheck the readme.txt for the format.\n" +
                                                       "For DPPaletteCombiner the palette textures must be Read/Write Enabled!!"));
            Texture2D oldTex = dsp.paletteTexture2;
            dsp.paletteTexture2 = (Texture2D)EditorGUILayout.ObjectField(dsp.paletteTexture2, typeof(Texture2D), false);
            if (oldTex != dsp.paletteTexture2)
            {
                dsp.UpdateTextures();
                if (dsp.GetComponent<DPSpritePaletteUI>() != null) dsp.GetComponent<DPSpritePaletteUI>().Refresh();
            }
            GUILayout.EndHorizontal();
        }

        GUILayout.BeginHorizontal();
        EditorGUILayout.PrefixLabel("Palette Index 2");
        EditorGUI.BeginChangeCheck();
        int index2 = EditorGUILayout.IntField(dsp._currentIndex2);
        if (EditorGUI.EndChangeCheck())
        {
            Undo.RecordObject(target, "Changed Palette 2 Index");
            if (dsp.paletteTexture2 == null) index2 = 0;
            else index2 = Mathf.Clamp(index2, 0, dsp.paletteTexture2.width - 1);
            dsp.currentIndex2 = index2;
        }
        GUILayout.EndHorizontal();

        GUILayout.BeginHorizontal();
        if (GUILayout.Button("Previous Index", EditorStyles.miniButtonLeft)) { dsp.PrevPalette2(); }
        if (GUILayout.Button("Next Index", EditorStyles.miniButtonRight)) { dsp.NextPalette2(); }
        GUILayout.EndHorizontal();

        EditorGUILayout.EndVertical();

        //if (GUILayout.Button("Update")) { dsp.UpdateTextures(); }

        EditorGUILayout.Space();

        EditorGUILayout.BeginVertical(EditorStyles.helpBox);
        GUILayout.BeginHorizontal();
        EditorGUILayout.PrefixLabel(new GUIContent("Use Palette Texture from", "Allows the reuse of the palette texture of ther Palette Combine to reduce draw calls"));
        DPPaletteCombiner otherCombiner = dsp.UsePalettesFrom;
        dsp.UsePalettesFrom = (DPPaletteCombiner)EditorGUILayout.ObjectField(otherCombiner, typeof(DPPaletteCombiner), true);
        if (otherCombiner != dsp.UsePalettesFrom && otherCombiner != dsp)
        {
            dsp.paletteTexture1 = dsp.paletteTexture2 = null;
            dsp.UpdateTextures();
            if (dsp.GetComponent<DPSpritePaletteUI>() != null) dsp.GetComponent<DPSpritePaletteUI>().Refresh();
        }
        GUILayout.EndHorizontal();
        EditorGUILayout.EndVertical();

        Canvas.ForceUpdateCanvases();
        SceneView.RepaintAll();
        if (GUI.changed) EditorApplication.delayCall += () => { EditorUtility.SetDirty(target); };
    }
}
