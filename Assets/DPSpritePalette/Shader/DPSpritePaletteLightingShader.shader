// Upgrade NOTE: upgraded instancing buffer 'PerDrawSprite' to new syntax.

Shader "DP Shaders/Sprite Palette Lighting"
{
	Properties
	{
		[PerRendererData] _MainTex ("Sprite Texture", 2D) = "white" {}
		_Color ("Tint", Color) = (1,1,1,1)
		[MaterialToggle] PixelSnap("Pixel snap", Float) = 0
		[HideInInspector] _RendererColor("RendererColor", Color) = (1,1,1,1)
		[HideInInspector] _Flip("Flip", Vector) = (1,1,1,1)
		[PerRendererData] _AlphaTex("External Alpha", 2D) = "white" {}
		[PerRendererData] _EnableExternalAlpha("Enable External Alpha", Float) = 0

		[PerRendererData] _PaletteTex ("Palette Texture", 2D) = "white" {}
		[PerRendererData] _PaletteTextureSize ("Palette Texture Size", Vector) = (0,0,0,0)
		[PerRendererData] _SpriteSize("Sprite Texture Size", Vector) = (0,0,0,0)
	}

	SubShader
	{
		Tags
		{ 
			"Queue"="Transparent" 
			"IgnoreProjector"="True" 
			"RenderType"="Transparent" 
			"PreviewType"="Plane"
			"CanUseSpriteAtlas"="True"
		}

		Cull Off
		Lighting Off
		ZWrite Off
		Blend One OneMinusSrcAlpha

		CGPROGRAM
		#pragma target 3.0
		#pragma surface surf Lambert vertex:vert nofog nolightmap nodynlightmap keepalpha noinstancing
		#pragma multi_compile _ PIXELSNAP_ON
		#pragma multi_compile _ ETC1_EXTERNAL_ALPHA

		sampler2D _MainTex;
		fixed4 _Color;
		sampler2D _AlphaTex;
		float _AlphaSplitEnabled;

		#include "DPSpritePalette.cginc"

		#ifdef UNITY_INSTANCING_ENABLED
		UNITY_INSTANCING_BUFFER_START(PerDrawSprite)
			fixed4 unity_SpriteRendererColorArray[UNITY_INSTANCED_ARRAY_SIZE];
		float4 unity_SpriteFlipArray[UNITY_INSTANCED_ARRAY_SIZE];
		UNITY_INSTANCING_BUFFER_END(PerDrawSprite)

		#define _RendererColor unity_SpriteRendererColorArray[unity_InstanceID]
		#define _Flip unity_SpriteFlipArray[unity_InstanceID]
		#endif // instancing

		CBUFFER_START(UnityPerDrawSprite)
		#ifndef UNITY_INSTANCING_ENABLED
			fixed4 _RendererColor;
		float4 _Flip;
		#endif
		float _EnableExternalAlpha;
		CBUFFER_END

		struct Input
		{
			float2 uv_MainTex;
			fixed4 color;
			float index;
		};
		
		void vert (inout appdata_full v, out Input o)
		{
			v.vertex.xy *= _Flip.xy;

			#if defined(PIXELSNAP_ON)
			v.vertex = UnityPixelSnap (v.vertex);
			#endif
			
			UNITY_INITIALIZE_OUTPUT(Input, o);
			
			float2 colorgb = unmap(v.color.g);
			float4 INcolor = float4(v.color.r, colorgb.x, colorgb.y, v.color.a);
			o.color = INcolor * _Color * _RendererColor;
			o.index = v.color.b;
		}

		fixed4 SampleSpriteTexture (float2 uv, float index)
		{
			fixed4 color = DPSampleSpriteTexture(uv, index);

			#if ETC1_EXTERNAL_ALPHA
			fixed4 alpha = tex2D(_AlphaTex, uv);
			color.a = lerp(color.a, alpha.r, _EnableExternalAlpha);
			#endif

			return color;
		}

		void surf (Input IN, inout SurfaceOutput o)
		{
			fixed4 c = SampleSpriteTexture (IN.uv_MainTex, IN.index) * IN.color;
			o.Albedo = c.rgb * c.a;
			o.Alpha = c.a;
		}
		ENDCG
	}

Fallback "Transparent/VertexLit"
}
