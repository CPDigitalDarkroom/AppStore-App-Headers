varying highp vec4 FS_UV;

uniform sampler2D VideoTexture;
uniform sampler2D MaskTexture0;
uniform sampler2D InsideLUT;
uniform sampler2D OutsideLUT;

uniform highp float Alpha;
uniform mediump float UserParam;

void main(void)
{
    lowp vec3 source = texture2D(VideoTexture, FS_UV.xy).xyz;
    lowp float mask = texture2D(MaskTexture0, FS_UV.zw).w;

    lowp vec3 mapped1 = lookup3D_16(InsideLUT, source);
    lowp vec3 mapped2 = lookup3D_16(OutsideLUT, source);
    lowp vec3 masked = mix(mapped1, mapped2, 1.0 - mask);
    lowp vec3 final = masked;
    gl_FragColor = vec4(mix(source, final.xyz, UserParam), compute_alpha(Alpha, FS_UV.z));
}