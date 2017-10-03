varying highp vec4 FS_UV;

uniform sampler2D VideoTexture;
uniform sampler2D MaskTexture0;
uniform sampler2D RampTexture0;

uniform highp float Alpha;

uniform highp vec2 AspectRatio;
uniform sampler2D VignetteFalloff;

void main(void)
{
    lowp vec3 source = texture2D(VideoTexture, FS_UV.xy).xyz;
    lowp vec3 grit = texture2D(MaskTexture0, FS_UV.zw).xyz;
    lowp float vignette = lookupSmoothVignette(FS_UV.zw, AspectRatio, VignetteFalloff);
    lowp vec3 adjusted = lookup3D_16(RampTexture0, mix(source, source * vignette, 0.65));
    lowp vec3 masked = adjusted;
    lowp vec3 textured = mix(masked, masked * grit, 0.25);
    lowp vec3 final = vec3(textured);
    gl_FragColor = vec4(final.xyz, compute_alpha(Alpha, FS_UV.z));
}