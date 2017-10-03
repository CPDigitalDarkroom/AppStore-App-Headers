varying highp vec4 FS_UV;

uniform sampler2D VideoTexture;
uniform sampler2D MaskTexture0;
uniform sampler2D MaskTexture1;
uniform sampler2D RampTexture0;
uniform sampler2D RampTexture1;

uniform highp float Alpha;

uniform highp vec2 AspectRatio;
uniform highp vec2 Scale;
uniform highp vec2 NoiseScale;
uniform mediump float UserParam;

void main(void)
{
    lowp vec3 source = texture2D(VideoTexture, FS_UV.xy+0.5*Scale).xyz;
    lowp vec3 noise = texture2D(MaskTexture0, FS_UV.zw*NoiseScale).xyz;
    lowp vec3 mask = texture2D(MaskTexture1, FS_UV.zw).www;
    lowp vec3 overlayedNoise = overlay(source, noise);
    lowp vec3 inner = lookup3D_16(RampTexture0, mix(source, overlayedNoise, 0.08));
    lowp vec3 outer = lookup3D_16(RampTexture1, mix(source, overlayedNoise, 0.03));
    lowp vec3 masked = mix(inner, outer, 1.0 - mask.x);
    lowp vec3 textured = masked;
    lowp vec3 final = vec3(textured);
    gl_FragColor = vec4(mix(source, final.xyz, UserParam), compute_alpha(Alpha, FS_UV.z));
}