// Vertex shader inputs
varying highp vec4 FS_UV;

uniform sampler2D VideoTexture;
uniform sampler2D MaskTexture0;
uniform sampler2D RampTexture0;
uniform sampler2D RampTexture1;

uniform highp float Alpha;

void main(void)
{
    lowp vec3 source = texture2D(VideoTexture, FS_UV.xy).xyz;
    lowp vec3 mask = texture2D(MaskTexture0, FS_UV.zw).www;
    lowp vec3 inside = lookup3D_16(RampTexture0, source);
    lowp vec3 outside = lookup3D_16(RampTexture1, source);
    lowp vec3 masked = mix(inside, outside, 1.0 - mask.x);
    lowp vec3 final = masked;
    gl_FragColor = vec4(final.xyz, compute_alpha(Alpha, FS_UV.z));
}