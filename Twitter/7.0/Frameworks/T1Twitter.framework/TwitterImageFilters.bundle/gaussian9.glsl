varying highp vec4 FS_UV;

uniform sampler2D InTexture;

uniform highp vec4 Coeffs0;
uniform highp vec4 Coeffs1;
uniform highp vec4 Coeffs2;

uniform highp vec2 KernelScale;

void main(void)
{
    highp vec3 accum = vec3(0);

    accum += texture2D(InTexture, FS_UV.xy + KernelScale * -4.0).xyz * Coeffs0.x;
    accum += texture2D(InTexture, FS_UV.xy + KernelScale * -3.0).xyz * Coeffs0.y;
    accum += texture2D(InTexture, FS_UV.xy + KernelScale * -2.0).xyz * Coeffs0.z;
    accum += texture2D(InTexture, FS_UV.xy + KernelScale * -1.0).xyz * Coeffs0.w;

    accum += texture2D(InTexture, FS_UV.xy + KernelScale * +0.0).xyz * Coeffs1.x;

    accum += texture2D(InTexture, FS_UV.xy + KernelScale * +1.0).xyz * Coeffs1.y;
    accum += texture2D(InTexture, FS_UV.xy + KernelScale * +2.0).xyz * Coeffs1.z;
    accum += texture2D(InTexture, FS_UV.xy + KernelScale * +3.0).xyz * Coeffs1.w;
    accum += texture2D(InTexture, FS_UV.xy + KernelScale * +4.0).xyz * Coeffs2.x;

    gl_FragColor = vec4(accum.xyz, 1);
}