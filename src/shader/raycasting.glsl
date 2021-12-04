-- Vertex

#extension GL_ARB_explicit_attrib_location : enable

layout(location = 0) in vec3 vertex;

out vec2 texCoord;

void main()
{
	//ToDo
	gl_Position = vec4(vertex, 1.0);
	texCoord = ( vertex.xy + 1 ) / 2;
}

-- Fragment

uniform sampler2D frontFaces;
uniform sampler2D backFaces;
uniform sampler3D volume;

uniform int renderingMode;
uniform float neededSteps; 

in vec2 texCoord;
out vec4 fragColor;

void main()
{
	// ToDo
	vec3 entryPoint = vec3(texture(frontFaces, texCoord).r, 1.0 -  texture(frontFaces, texCoord).b, 1.0 - texture(frontFaces, texCoord).g);
	vec3 exitPoint = vec3(texture(backFaces, texCoord).r, 1.0 -  texture(backFaces, texCoord).b, 1.0 - texture(backFaces, texCoord).g);
	vec3 raydirection = exitPoint - entryPoint;

	
	float steps = neededSteps;
	vec3 singlestep = raydirection / steps;
	float intensity = 0.0f;
	
	switch(renderingMode)
	{
		case 0: //render front faces
		{
			fragColor = vec4(texture(frontFaces, texCoord).rgb,1);
			
			break;
		}
		
		case 1: //render back faces
		{
			fragColor = vec4(texture(backFaces, texCoord).rgb,1);
			
			break;
		}
		
		case 2: //render volume (MIP)
		{
			

			for(int i = 0; i < steps; i++){
				vec3 pos = entryPoint + i*singlestep;
				float currIntensity = texture(volume, pos).r;
					if(currIntensity > intensity){
					intensity = currIntensity;
					}
			}

			fragColor = vec4(intensity, intensity, intensity,1);
			
			
			break;
		}
		case 3: //render volume (Alpha-Compositing)
		{
			vec3 accColor = vec3(0.0);
			float alpha_a = 0.0f;
			float alpha_b = 0.0f;
			float alpha_c = 0.0f;
			int blendColor = 0;


			for(int i = 0; i < steps; i++){
				vec3 pos = entryPoint + i*singlestep;
				vec3 currColor = vec3(0.0);
				if(texture(volume, pos).r >= 0.01 && texture(volume, pos).r < 0.1 && blendColor != 0){
					currColor = vec3(0.0);
					alpha_b = 0.0;

					blendColor = 0;
					alpha_c = alpha_a + ((1-alpha_a) * alpha_b); 
					accColor = (alpha_a * accColor + (1 - alpha_a) * alpha_b * currColor) / alpha_c;

				}else if (texture(volume, pos).r >= 0.1 && texture(volume, pos).r < 0.3 && blendColor != 1){
					currColor = vec3(1.0, 0.7, 0.075);
					alpha_b = 0.0004;

					blendColor = 1;
					alpha_c = alpha_a + ((1-alpha_a) * alpha_b); 
					accColor = (alpha_a * accColor + (1 - alpha_a) * alpha_b * currColor) / alpha_c;

				}else if (texture(volume, pos).r >= 0.3 && texture(volume, pos).r < 0.75 && blendColor != 2){
					currColor = vec3(0.0, 0.8, 0.34);
					alpha_b = 0.002;

					blendColor = 2;
					alpha_c = alpha_a + ((1-alpha_a) * alpha_b); 
					accColor = (alpha_a * accColor + (1 - alpha_a) * alpha_b * currColor) / alpha_c;

				}else if (texture(volume, pos).r >= 0.75 && texture(volume, pos).r <= 1.0 && blendColor != 3){
					currColor = vec3(0.1, 0.7, 0.8);
					alpha_b = 0.06;

					blendColor = 3;
					alpha_c = alpha_a + ((1-alpha_a) * alpha_b); 
					accColor = (alpha_a * accColor + (1 - alpha_a) * alpha_b * currColor) / alpha_c;
				}
				
				
				if(alpha_c == 1.0){
					break;
				}
				alpha_a = alpha_c;
			}

			fragColor = vec4(accColor, alpha_c);


			break;
		}
	}
}