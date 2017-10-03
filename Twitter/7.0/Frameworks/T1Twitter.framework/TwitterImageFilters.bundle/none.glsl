varying highp vec4 FS_UV;

uniform sampler2D VideoTexture;

uniform highp float Alpha;

void main(void)
{
    lowp vec3 video = texture2D(VideoTexture, FS_UV.xy).xyz;
    gl_FragColor = vec4(video.xyz, compute_alpha(Alpha, FS_UV.z));
}