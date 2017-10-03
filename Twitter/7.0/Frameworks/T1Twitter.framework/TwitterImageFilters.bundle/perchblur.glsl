varying highp vec4 FS_UV;

uniform sampler2D VideoTexture;
uniform sampler2D BlurredTexture;
uniform sampler2D RampTexture;

uniform highp float Alpha;
uniform mediump float UserParam;

void main(void)
{
    lowp vec3 blurred = texture2D(BlurredTexture, FS_UV.xy).xyz;
    lowp vec3 final = lookup3D_16(RampTexture, blurred);
    gl_FragColor = vec4(mix(blurred, final, UserParam), 1);
}