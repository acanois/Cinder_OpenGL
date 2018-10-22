#version 410

uniform mat4 ciModelViewProjection;

in vec4 ciPosition;

out vec4 vertexColor;

void main( void ) {
    gl_Position = ciModelViewProjection * ciPosition;
    vertexColor = vec4( 1.0, 0.5, 0.25, 1.0 );
}
