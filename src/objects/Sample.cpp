#include "Sample.h"

float Sample::c[]=
	{0.f , 1.f,
	 1.f ,-1.f,
	-1.f ,-1.f};
	
int Sample::getData(float** ret){
	(*ret)=(float*)&c;
	return sizeof(c)/sizeof(float);
	}
