#pragma debug(off)
#ifndef MAX_TEXTURE_UNITS
#define MAX_TEXTURE_UNITS 8
#endif

lowp vec3 saturate(lowp vec3 c)
{
    return clamp(c, vec3(0), vec3(1));
}

lowp float saturate(lowp float c)
{
    return clamp(c, 0.0, 1.0);
}

lowp float compute_alpha(lowp float a, lowp float x)
{
    return 1.0;
    /*
    highp float d = saturate((a - x + 0.05) * 20.0);
    return d;
    */
}

lowp vec3 screen(lowp vec3 a, lowp vec3 b)
{
    return vec3(1.0) - ((vec3(1.0) - a) * (vec3(1.0) - b));
}

lowp vec3 overlay(lowp vec3 a, lowp vec3 b)
{
    lowp vec3 selector = saturate(saturate(a - vec3(0.5)) * 1000000.0);
    lowp vec3 la = 2.0 * a * b;
    lowp vec3 ga =  vec3(1.0) - vec3(2.0) * (vec3(1.0) - a) * (vec3(1.0) - b);
    return saturate(mix(la, ga, selector));
}

highp vec3 GammaToLinear(highp vec3 g)
{
    return pow(g, vec3(2.2));
}

highp vec3 LinearToGamma(highp vec3 g)
{
    return pow(g, vec3(1.0 / 2.2));
}

highp float smootherstep(highp float x)
{
    return x*x*x*(x*(x*6.0 - 15.0) + 10.0);
}

highp float step(highp float a, highp float b, highp float v)
{
    return saturate((v - a) / (b - a));
}

lowp float lookupSmoothVignette(lowp vec2 uv, highp vec2 aspect, sampler2D vignetteFalloff)
{
    lowp float d0 = ((distance(uv * vec2(aspect.x, 1.0), vec2(0.5 * aspect.x, 0.5)) * aspect.y));
    lowp float dist = texture2D(vignetteFalloff, vec2(d0, 0.0)).w;
    return dist;
}

lowp float lookupSmoothVignette(lowp vec2 uv, highp vec2 aspect, sampler2D vignetteFalloff, highp vec2 vignetteParam)
{
    lowp float d0 = pow(((distance(uv * vec2(aspect.x, 1.0), vec2(0.5 * aspect.x, 0.5)) * aspect.y)), vignetteParam.x) * vignetteParam.y;
    lowp float dist = texture2D(vignetteFalloff, vec2(d0, 0.0)).w;
    return dist;
}

highp float computeSmoothVignette(highp vec2 uv, highp vec2 aspect)
{
    highp float d1 = saturate(((distance(uv * vec2(aspect.x, 1.0), vec2(0.5 * aspect.x, 0.5)) * aspect.y) - 0.083) / (1.0 - 0.083));
    highp float d3 = mix(0.25, 1.0, 1.0 - d1);
    highp float d4 = mix(0.25, 1.0, step(smootherstep(0.25), smootherstep(1.0), smootherstep(d3)));
    return d4;
}

highp vec3 lookup2D_256(sampler2D lookupTex, highp vec3 point)
{
    highp vec3 ramp;
    highp vec3 adjusted_point = point * vec3(255.0 / 256.0) + vec3(0.5 / 256.0);
    ramp.x = texture2D(lookupTex, vec2(0, adjusted_point.x)).x;
    ramp.y = texture2D(lookupTex, vec2(0, adjusted_point.y)).y;
    ramp.z = texture2D(lookupTex, vec2(0, adjusted_point.z)).z;
    return ramp;
}

highp vec3 lookup3D_16(sampler2D lookupTex, highp vec3 point)
{
    highp vec3 abs_point = point * vec3(15.0);
    highp float b_index_0 = floor(abs_point.z);
    highp float b_index_1 = b_index_0 + 1.0;
    highp float b_frac = abs_point.z - b_index_0;
    highp vec2 rg_base = abs_point.xy + vec2(0.5);
    highp vec2 rg_samp_0 = rg_base;
    rg_samp_0.y += b_index_0 * 16.0;
    highp vec3 rg_0 = texture2D(lookupTex, rg_samp_0 * vec2(1.0 / 16.0, 1.0 / 256.0)).xyz;
    highp vec2 rg_samp_1 = rg_base;
    rg_samp_1.y += b_index_1 * 16.0;
    highp vec3 rg_1 = texture2D(lookupTex, rg_samp_1 * vec2(1.0 / 16.0, 1.0 / 256.0)).xyz;
    return mix(rg_0, rg_1, b_frac);
}

highp vec3 sampleSharpened(sampler2D tex, highp vec2 uv, highp vec2 scale, highp float strength)
{
    lowp vec3 mid = texture2D(tex, uv.xy).xyz;
    highp vec3 accum = vec3(0);
#if MAX_TEXTURE_UNITS <= 8
    accum += texture2D(tex, uv.xy + scale * vec2(+0.0, -1.0)).xyz;
    accum += texture2D(tex, uv.xy + scale * vec2(-1.0, +0.0)).xyz;
    accum += texture2D(tex, uv.xy + scale * vec2(+1.0, +0.0)).xyz;
    accum += texture2D(tex, uv.xy + scale * vec2(+0.0, +1.0)).xyz;
    accum *= -1.0;
    accum += mid * +4.0;
    return saturate(mid + accum * strength * 2.0);
#else
    accum += texture2D(tex, uv.xy + scale * vec2(-1.0, -1.0)).xyz;
    accum += texture2D(tex, uv.xy + scale * vec2(+0.0, -1.0)).xyz;
    accum += texture2D(tex, uv.xy + scale * vec2(+1.0, -1.0)).xyz;
    accum += texture2D(tex, uv.xy + scale * vec2(-1.0, +0.0)).xyz;
    accum += texture2D(tex, uv.xy + scale * vec2(+1.0, +0.0)).xyz;
    accum += texture2D(tex, uv.xy + scale * vec2(-1.0, +1.0)).xyz;
    accum += texture2D(tex, uv.xy + scale * vec2(+0.0, +1.0)).xyz;
    accum += texture2D(tex, uv.xy + scale * vec2(+1.0, +1.0)).xyz;
    accum *= -1.0;
    accum += mid * +8.0;
    return saturate(mid + accum * strength);
#endif
}