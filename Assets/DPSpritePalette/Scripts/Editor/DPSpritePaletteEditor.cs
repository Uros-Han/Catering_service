using UnityEngine;
using UnityEditor;
using System.Collections;

[CustomEditor(typeof(DPSpritePalette))]
public class DPSpritePaletteEditor : Editor {

	DPSpritePalette dsp;
	public void OnEnable()
	{
		dsp = (DPSpritePalette)target;
	}

	public override void OnInspectorGUI()
	{
        GUILayout.BeginHorizontal();
        EditorGUILayout.PrefixLabel(new GUIContent("Palette Material", "The palette material. It should any Material of /Assets/DPSpritePalette/"));
        Material oldMaterial = dsp.paletteMaterial;
        dsp.paletteMaterial = (Material)EditorGUILayout.ObjectField(dsp.paletteMaterial, typeof(Material), false);
        if (dsp.paletteMaterial != oldMaterial) { dsp.Refresh(); }
        GUILayout.EndHorizontal();

        GUILayout.BeginHorizontal();
        EditorGUILayout.PrefixLabel(new GUIContent("Color", "Color Tint\nThis color overrides the SpriteRenderer's color."));
        EditorGUI.BeginChangeCheck();
        Color newcolor = EditorGUILayout.ColorField(dsp.color);
        if (EditorGUI.EndChangeCheck()) { Undo.RecordObject(target, "Changed Color"); dsp.color = newcolor; }
        GUILayout.EndHorizontal();

        bool hasPaletteCombiner = dsp.GetComponent<DPPaletteCombiner>() != null || dsp.GetComponent<DPPaletteMultiCombiner>() != null;
        if (!hasPaletteCombiner)
        {
            EditorGUILayout.Separator();

            GUILayout.BeginHorizontal();
            EditorGUILayout.PrefixLabel(new GUIContent("Palette Texture", "The texture with the palettes!\nCheck the readme.txt for the format.\n" +
                                                       "But the required texture import settings are:" +
                                                       "Generate Mipmaps = UNCHECKED\n" +
                                                       "Filter Mode = POINT\n" +
                                                       "Compression = None\n" +
                                                       "Format = Automatic True Color or RGBA32\n"));
            EditorGUI.BeginChangeCheck();
            Texture2D newTexture = (Texture2D)EditorGUILayout.ObjectField(dsp.paletteTexture, typeof(Texture2D), false);
            if (EditorGUI.EndChangeCheck())
            {
                Undo.RecordObject(target, "Changed Palette Texture");
                dsp.paletteTexture = newTexture;
            }
            GUILayout.EndHorizontal();

            GUILayout.BeginHorizontal();
            EditorGUILayout.PrefixLabel("Palette Index");

            EditorGUI.BeginChangeCheck();
            int newIndex = EditorGUILayout.IntField(dsp.CurrentPaletteIndex);
            if (EditorGUI.EndChangeCheck())
            {
                Undo.RecordObject(target, "Changed Palette Index");
                dsp.CurrentPaletteIndex = newIndex;

                if (dsp.paletteTexture == null) dsp.CurrentPaletteIndex = 0;
                else dsp.CurrentPaletteIndex = Mathf.Clamp(dsp.CurrentPaletteIndex, 0, dsp.paletteTexture.width - 1);
                dsp.PaletteIndex = dsp.CurrentPaletteIndex;
            }
            GUILayout.EndHorizontal();

            GUILayout.BeginHorizontal();
            if (GUILayout.Button("Previous Index")) { dsp.PrevPalette(); }
            if (GUILayout.Button("Next Index")) { dsp.NextPalette(); }
            GUILayout.EndHorizontal();
        }
        Canvas.ForceUpdateCanvases();
        SceneView.RepaintAll();
        if (GUI.changed) EditorApplication.delayCall += () => { EditorUtility.SetDirty(target); };
    }
}
