// Upgrade NOTE: upgraded instancing buffer 'PerDrawSprite' to new syntax.

Shader "DP Shaders/Sprite Palette Bilinear"
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

		Pass
		{
		CGPROGRAM
			#pragma target 3.0
			#pragma vertex vert
			#pragma fragment frag
			#pragma multi_compile_instancing
			#pragma multi_compile _ PIXELSNAP_ON
			#pragma multi_compile _ ETC1_EXTERNAL_ALPHA
			#include "UnityCG.cginc"
			
			sampler2D _MainTex;
			sampler2D _AlphaTex;
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

			struct appdata_t
			{
				float4 vertex   : POSITION;
				float4 color    : COLOR;
				float2 texcoord : TEXCOORD0;
				UNITY_VERTEX_INPUT_INSTANCE_ID
			};

			struct v2f
			{
				float4 vertex   : SV_POSITION;
				fixed4 color    : COLOR;
				float2 texcoord  : TEXCOORD0;
				float index     : TEXCOORD1;
				UNITY_VERTEX_OUTPUT_STEREO
			};
			
			fixed4 _Color;

			v2f vert(appdata_t IN)
			{
				v2f OUT;

				UNITY_SETUP_INSTANCE_ID(IN);
				UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(OUT);

				#ifdef UNITY_INSTANCING_ENABLED
				IN.vertex.xy *= _Flip.xy;
				#endif

				OUT.vertex = UnityObjectToClipPos(IN.vertex);
				OUT.texcoord = IN.texcoord;
				
				#ifndef UNITY_INSTANCING_ENABLED
				float2 colorgb = unmap(IN.color.g);
				float4 INcolor = float4(IN.color.r, colorgb.x, colorgb.y, IN.color.a);
				OUT.color = INcolor * _Color *_RendererColor;
				OUT.index = IN.color.b;
				#else
				float2 colorgb = unmap(_RendererColor.g);
				float4 INcolor = float4(_RendererColor.r, colorgb.x, colorgb.y, _RendererColor.a);
				OUT.color = INcolor * _Color *_RendererColor;
				OUT.index = _RendererColor.b;
				#endif
				
				#ifdef PIXELSNAP_ON
				OUT.vertex = UnityPixelSnap (OUT.vertex);
				#endif

				return OUT;
			}

			

			fixed4 SampleSpriteTexture (float2 uv, float index)
			{
				fixed4 color = DPBilinear(uv, index);

				#if ETC1_EXTERNAL_ALPHA
				fixed4 alpha = tex2D(_AlphaTex, uv);
				color.a = lerp(color.a, alpha.r, _EnableExternalAlpha);
				#endif

				return color;
			}

			fixed4 frag(v2f IN) : SV_Target
			{
				fixed4 c = SampleSpriteTexture (IN.texcoord, IN.index) * IN.color;
				c.rgb *= c.a;
				return c;
			}
		ENDCG
		}
	}
}
