#include <Object.h>
#include <cstring>

Object::Object():x(0),y(0),dx(0),dy(0),rot(0),drot(0){
	
	
	}

void Object::move(){
	x+=dx;
	y+=dy;
	rot+=drot;
	}
	
int Object::init(char** memptr, int* counter){
		char* data;
		int size=getData(&data);
		if(memptr==NULL)
			return size;
		memcpy((*memptr),data,size);
		(*counter)+=size;
		
		ptr=(*counter);
		offset=size;
		
		return size;
	}

void Object::paint(){
	
	
	
	}
