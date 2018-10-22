#version 410

in vec4 vertexColor;
out vec4 oColor;     // In from vertex shader

void main( void ) {
    oColor = vertexColor;
}
