// DPSpritePalette Code
sampler2D _PaletteTex;
float4 _PaletteTextureSize;
float4 _SpriteColor;
float4 _SpriteSize;

float2 unmap(float val) {
	float2 res;
	val *= 256.0f;
	res.x = floor(val / 16);
	res.y = fmod(val, 16);
	res /= 15.0f;
	return res;
}

fixed4 DPSampleSpriteTexture(float2 uv, float index)
{
	half4 source = tex2D(_MainTex, uv);
	int maxColors = 32; // <--- change the number of max colors here
	if (source.a < 1.0 / 255.0) return fixed4(source.r, source.g, source.b, 0);

	half4 final = source;
	half indexYFinal = 0;
	half _PalleteIndex = index.x;
	half halfTextelSizeX = _PaletteTextureSize.x * 0.5f;
	fixed found = 0;

	#if defined(UNITY_COMPILER_HLSL)
	[unroll(32)] // <--- change the number of max colors here
	#endif
	for (int i = 0; i < maxColors; i++) {
		half indexY = (i + 0.5f) / _PaletteTextureSize.w;
		half4 corD = tex2D(_PaletteTex, float2(halfTextelSizeX, indexY));
		half4 diff = source - corD;
		half dist = dot(diff, diff);
		if (dist <= 0.000016f) {	// <--- change the precision here
			indexYFinal = indexY;
			found = 1;
			break;
		}
	}

	final = (found > 0) ? tex2D(_PaletteTex, half2(_PalleteIndex, indexYFinal)) : final;
	return final;
}
fixed4 DPSampleSpriteTextureBilinear(float2 uv, float index)
{
	half4 source = tex2D(_MainTex, uv);
	int maxColors = 32; // <--- change the number of max colors here
	//if (source.a < 1.0 / 255.0) return fixed4(source.r, source.g, source.b, 0);

	half4 final = source;
	half indexYFinal = 0;
	half _PalleteIndex = index.x;
	half halfTextelSizeX = _PaletteTextureSize.x * 0.5f;
	fixed found = 0;

	#if defined(UNITY_COMPILER_HLSL)
	[unroll(32)] // <--- change the number of max colors here
	#endif
	for (int i = 0; i < maxColors; i++) {
		half indexY = (i + 0.5f) / _PaletteTextureSize.w;
		half4 corD = tex2D(_PaletteTex, float2(halfTextelSizeX, indexY));
		half3 diff = source.rgb - corD.rgb;
		half dist = dot(diff, diff);
		if (dist <= 0.000016f) {	// <--- change the precision here
			indexYFinal = indexY;
			found = 1;
			break;
		}
	}
	final = (found > 0) ? tex2D(_PaletteTex, half2(_PalleteIndex, indexYFinal)) : final;
	final.a = source.a;
	return final;
}

fixed4 DPBilinear(float2 uv, float index)
{
	uv -= float2(0.5f / _SpriteSize.z, 0.5f / _SpriteSize.w);
	//uv -= float2(_SpriteSize.x, _SpriteSize.y);
	float2 f = frac(uv*_SpriteSize.zw);
	fixed4 tl = DPSampleSpriteTextureBilinear(uv, index);
	fixed4 tr = DPSampleSpriteTextureBilinear(uv + float2(1.0f/ _SpriteSize.z, 0), index);
	fixed4 bl = DPSampleSpriteTextureBilinear(uv + float2(0, 1.0f/ _SpriteSize.w), index);
	fixed4 br = DPSampleSpriteTextureBilinear(uv + float2(1.0f/ _SpriteSize.z, 1.0f/ _SpriteSize.w), index);
	fixed4 tA = lerp(tl, tr, f.x);
	fixed4 tB = lerp(bl, br, f.x);
	return lerp(tA, tB, f.y);
}

fixed4 DPBilinearUI(float2 uv, float index)
{
	//uv -= float2(0.5f / _SpriteSize.z, 0.5f / _SpriteSize.w);
	uv -= float2(_SpriteSize.x, _SpriteSize.y);
	float2 f = frac(uv*_SpriteSize.zw);
	fixed4 tl = DPSampleSpriteTextureBilinear(uv, index);
	fixed4 tr = DPSampleSpriteTextureBilinear(uv + float2(1.0f / _SpriteSize.z, 0), index);
	fixed4 bl = DPSampleSpriteTextureBilinear(uv + float2(0, 1.0f / _SpriteSize.w), index);
	fixed4 br = DPSampleSpriteTextureBilinear(uv + float2(1.0f / _SpriteSize.z, 1.0f / _SpriteSize.w), index);
	fixed4 tA = lerp(tl, tr, f.x);
	fixed4 tB = lerp(bl, br, f.x);
	return lerp(tA, tB, f.y);
}
