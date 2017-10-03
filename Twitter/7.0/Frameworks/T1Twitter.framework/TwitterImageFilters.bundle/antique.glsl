varying highp vec4 FS_UV;

uniform sampler2D VideoTexture;
uniform sampler2D MaskTexture0;
uniform sampler2D DotTexture;
uniform sampler2D RampTexture0;
uniform sampler2D RampTexture1;
uniform sampler2D VignetteFalloff;

uniform highp vec2 DotScale;
uniform highp float Alpha;
uniform highp vec2 AspectRatio;

uniform mediump float UserParam;
uniform mediump vec2 VignetteParam;

void main(void)
{
    lowp float vignette = lookupSmoothVignette(FS_UV.zw, AspectRatio, VignetteFalloff, VignetteParam);
    lowp vec3 source = texture2D(VideoTexture, FS_UV.xy).xyz;
    lowp float blend = texture2D(MaskTexture0, FS_UV.zw).w;
    lowp vec3 dots = texture2D(DotTexture, FS_UV.zw * DotScale).xyz;
    lowp vec3 masked = mix(source, source * vignette, 0.65);
    lowp vec3 back = lookup3D_16(RampTexture0, masked);
    lowp vec3 front = lookup3D_16(RampTexture1, masked);
    lowp vec3 adjusted = mix(back, front, blend);
    lowp vec3 textured = mix(adjusted, overlay(adjusted, dots), 0.12);
    lowp vec3 final = textured;
    gl_FragColor = vec4(mix(source, final.xyz, UserParam), compute_alpha(Alpha, FS_UV.z));
}