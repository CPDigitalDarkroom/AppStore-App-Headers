// Vertex inputs
attribute vec4 Position;
attribute vec4 UV;

// Constant
uniform vec4 OffsetScale;

uniform vec4 Rotation;

uniform vec2 Aspect;

// Pixel shader inputs
varying vec4 FS_UV;

void main(void)
{
    FS_UV = UV.xyzw;
    vec2 pos = Position.xy;
    pos = (pos.xy * OffsetScale.zw) + OffsetScale.xy;
    vec2 pos2 = pos;
    pos2.x = Rotation.x * pos.x + Rotation.z * pos.y;
    pos2.y = Rotation.y * pos.x + Rotation.w * pos.y;
    pos2 *= Aspect;
    gl_Position = vec4(pos2.xy, Position.z, Position.w);
}