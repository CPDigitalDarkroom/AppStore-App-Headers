varying highp vec4 FS_UV;

uniform sampler2D VideoTexture;
uniform sampler2D BlurredTexture;
uniform sampler2D MaskTexture0;
uniform sampler2D RampTexture0;
uniform sampler2D RampTexture1;

uniform highp float Alpha;
uniform mediump float UserParam;

void main(void)
{
    lowp vec3 source = texture2D(VideoTexture, FS_UV.xy).xyz;
    lowp vec3 blurred = saturate(texture2D(BlurredTexture, FS_UV.xy).xyz * 1.2);
    lowp vec3 multiplied = mix(source, source * blurred, 0.4);
    lowp vec3 soft = vec3(1) - ((vec3(1) - multiplied) * (vec3(1) - blurred));
    lowp vec3 backBlend = mix(multiplied, soft, 0.4);
    highp vec3 back = lookup2D_256(RampTexture0, backBlend);
    lowp vec3 frontBlend = mix(multiplied, soft, 0.3);
    highp vec3 front = lookup2D_256(RampTexture1, frontBlend);
    lowp vec3 mask = texture2D(MaskTexture0, FS_UV.zw).www;
    lowp vec3 final = sqrt(mix(back * back, front * front, mask.x * mask.x));
    gl_FragColor = vec4(mix(source, final.xyz, UserParam), compute_alpha(Alpha, FS_UV.z));
}