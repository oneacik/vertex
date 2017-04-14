#include <Object.h>
#include <cstring>
#include <GLFW/glfw3.h>

Object::Object():x(0),y(0),dx(0),dy(0),rot(0),drot(0){
	
	
	}

void Object::move(){
	x+=dx;
	y+=dy;
	rot+=drot;
	}
	
int Object::init(float** memptr, int* counter){
		float* data;
		
		int inc=getData(&data);//it is number of floats, not their size
		if(memptr==NULL)
			return inc*sizeof(float);
			
		memcpy(
		(void*)(*memptr),
		data,
		inc*sizeof(float)
		);
		
		(*counter)+=inc;
		
		ptr=(*counter);
		offset=inc;
		
		return inc*sizeof(float);
	}

void Object::paint(){
	glDrawArrays(GL_TRIANGLES, ptr, ptr+offset);
	}
