// Vertex shader inputs
varying highp vec4 FS_UV;

uniform sampler2D VideoTexture;
uniform sampler2D RampTexture0;
uniform sampler2D VignetteFalloff;

uniform highp float Alpha;
uniform highp vec2 AspectRatio;

uniform mediump float UserParam;
uniform mediump vec2 VignetteParam;

void main(void)
{
    lowp float vignette = lookupSmoothVignette(FS_UV.zw, AspectRatio, VignetteFalloff, VignetteParam);
    lowp vec3 source = texture2D(VideoTexture, FS_UV.xy).xyz;
    source = mix(source, source * vignette, 0.25);
    lowp vec3 final = lookup3D_16(RampTexture0, source);
    gl_FragColor = vec4(mix(source, final.xyz, UserParam), compute_alpha(Alpha, FS_UV.z));
}