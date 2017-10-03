// Vertex shader inputs
varying highp vec4 FS_UV;

uniform sampler2D VideoTexture;
uniform sampler2D RampTexture0;
uniform sampler2D RampTexture1;
uniform sampler2D VignetteFalloff;

uniform highp vec2 AspectRatio;
uniform highp float Alpha;
uniform mediump float UserParam;

void main(void)
{
    lowp vec3 source = texture2D(VideoTexture, FS_UV.xy).xyz;
    lowp float vignette = pow(lookupSmoothVignette(FS_UV.zw, AspectRatio, VignetteFalloff), 1.4);
    lowp vec3 inside = lookup3D_16(RampTexture0, source);
    lowp vec3 outside = lookup3D_16(RampTexture1, source);
    lowp vec3 masked = mix(inside, outside, 1.0 - vignette);
    lowp vec3 final = masked;
    gl_FragColor = vec4(mix(source, final.xyz, UserParam), compute_alpha(Alpha, FS_UV.z));
}