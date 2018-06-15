#shader vertex
#version 330 core 

layout(location  = 0) in vec2 position;
void main() {
	gl_Position = vec4(position, 1, 1);
};

#shader fragment
#version 330 core

uniform vec4 u_Color;
		
layout(location  = 0) out vec4 color;
void main() {
	color = u_Color;
};