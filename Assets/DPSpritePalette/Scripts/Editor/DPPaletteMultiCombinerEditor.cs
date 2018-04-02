using System.Linq;
using UnityEngine;
using UnityEditor;

public static class DPPaletteEditorList
{

    private static GUIContent previousPaletteContent = new GUIContent("Previous", "Previous Palette");
    private static GUIContent nextPaletteContent = new GUIContent("Next", "Next Palette");
    private static GUIContent addButtonContent = new GUIContent("+", "Add Palette Texture");
    private static GUIContent deleteButtonContent = new GUIContent("-", "Remove Palette Texture");
    private static GUIContent addButtonContent2 = new GUIContent("Add Palette Texture", "Add Palette Texture");
    private static GUILayoutOption miniButtonWidth = GUILayout.Width(20f);

    public static void Show(SerializedProperty list, bool showListSize, DPPaletteMultiCombiner dsp)
    {
        if (!list.isArray) return;

        EditorGUILayout.PropertyField(list);
        EditorGUI.indentLevel += 1;
        if (list.isExpanded)
        {
            if (showListSize) EditorGUILayout.PropertyField(list.FindPropertyRelative("Array.size"));
            
            for (int i = 0; i < list.arraySize; i++)
            {
                EditorGUILayout.BeginVertical(EditorStyles.helpBox);
                EditorGUILayout.BeginHorizontal();
                EditorGUILayout.PropertyField(list.GetArrayElementAtIndex(i), new GUIContent("Palete Texture " + i, "The texture with the palettes!\nCheck the readme.txt for the format.\n" +
                                                   "For DPPaletteMultiCombiner the palette textures must be Read/Write Enabled!!"));
                

                if (GUILayout.Button(addButtonContent, EditorStyles.miniButtonLeft, miniButtonWidth)) { list.InsertArrayElementAtIndex(i); }
                if (GUILayout.Button(deleteButtonContent, EditorStyles.miniButtonRight, miniButtonWidth))
                {
                    int oldSize = list.arraySize;
                    list.DeleteArrayElementAtIndex(i);
                    if (list.arraySize == oldSize) list.DeleteArrayElementAtIndex(i);
                }
                EditorGUILayout.EndHorizontal();


                EditorGUILayout.BeginHorizontal();
                GUILayout.FlexibleSpace();
                if (GUILayout.Button(previousPaletteContent, EditorStyles.miniButtonLeft, GUILayout.Width(100))) {
                    dsp.GetPaletteTextures()[i].PrevPalette();
                    dsp.UpdateTextures();
                    if (dsp.GetComponent<DPSpritePaletteUI>() != null) dsp.GetComponent<DPSpritePaletteUI>().Refresh();
                }
                if (GUILayout.Button(nextPaletteContent, EditorStyles.miniButtonRight, GUILayout.Width(100))) {
                    dsp.GetPaletteTextures()[i].NextPalette();
                    dsp.UpdateTextures();
                    if (dsp.GetComponent<DPSpritePaletteUI>() != null) dsp.GetComponent<DPSpritePaletteUI>().Refresh();
                }
                EditorGUILayout.EndHorizontal();
                EditorGUILayout.EndVertical();
            }
            EditorGUILayout.BeginHorizontal();
            GUILayout.FlexibleSpace();
            if (GUILayout.Button(addButtonContent2, EditorStyles.miniButton, GUILayout.Width(200))) {
                list.arraySize += 1;
            }
            EditorGUILayout.EndHorizontal();
            
        }
        EditorGUI.indentLevel -= 1;
    }
}

[CustomEditor(typeof(DPPaletteMultiCombiner)), CanEditMultipleObjects]
public class DPPaletteMultiCombinerEditor : Editor
{
    DPPaletteMultiCombiner dsp;
    public void OnEnable()
    {
        dsp = (DPPaletteMultiCombiner)target;
    }

    public override void OnInspectorGUI()
    {
        serializedObject.Update();
        if (dsp.UsePalettesFrom == null)
        {   
            DPPaletteEditorList.Show(serializedObject.FindProperty("PaletteTextures"), false, dsp);
        }
        serializedObject.ApplyModifiedProperties();

        EditorGUILayout.BeginVertical(EditorStyles.helpBox);
        GUILayout.BeginHorizontal();
        EditorGUILayout.PrefixLabel(new GUIContent("Use Palette Texture from", "Allows the reuse of the palette texture of ther Palette Multi Combine to reduce draw calls"));
        DPPaletteMultiCombiner otherCombiner = dsp.UsePalettesFrom;
        dsp.UsePalettesFrom = (DPPaletteMultiCombiner)EditorGUILayout.ObjectField(otherCombiner, typeof(DPPaletteMultiCombiner), true);
        if (otherCombiner != dsp.UsePalettesFrom && otherCombiner != dsp)
        {
            dsp.UpdateTextures();
            if (dsp.GetComponent<DPSpritePaletteUI>() != null) dsp.GetComponent<DPSpritePaletteUI>().Refresh();
        }
        GUILayout.EndHorizontal();
        EditorGUILayout.EndVertical();

        Canvas.ForceUpdateCanvases();
        SceneView.RepaintAll();
        if (GUI.changed) EditorApplication.delayCall += () => { EditorUtility.SetDirty(target); };
    }
    private static GUIContent addButtonContent = new GUIContent("+", "Add");
    private static GUIContent deleteButtonContent = new GUIContent("-", "Remove");
    private static GUILayoutOption miniButtonWidth = GUILayout.Width(20f);

}

[CustomPropertyDrawer(typeof(DPPaletteTextureIndex))]
public class DPPaletteTextureIndextDrawer : PropertyDrawer
{
    int contentHeight = 16;
    public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
    {
        EditorGUI.BeginProperty(position, label, property);

        position = EditorGUI.PrefixLabel(position, GUIUtility.GetControlID(FocusType.Passive), label);

        var indent = EditorGUI.indentLevel;
        EditorGUI.indentLevel = 0;

        var textureRect = new Rect(position.x, position.y, 100, contentHeight);
        var indexRect = new Rect(position.x-40, position.y+contentHeight+1, 122, contentHeight);
        DPPaletteMultiCombiner dps = property.serializedObject.targetObject as DPPaletteMultiCombiner;
        DPSpritePaletteUI dpsui = dps.GetComponent<DPSpritePaletteUI>();

        EditorGUI.PropertyField(textureRect, property.FindPropertyRelative("PaletteTexture"), GUIContent.none);
        EditorGUIUtility.labelWidth = 40;
        EditorGUI.PropertyField(indexRect, property.FindPropertyRelative("index"), new GUIContent("Index"));
        EditorGUI.indentLevel = indent;
        EditorGUI.EndProperty();
    }
    public override float GetPropertyHeight(SerializedProperty property, GUIContent label)
    {
        return 2*(contentHeight+1);
    }
}
