#ifndef OBJECT_H
#define OBJECT_H

class Object{
private:
	int ptr,offset;
	static char* buff;
public:
	int x,y,dx,dy,rot,drot;
	Object();
	virtual int init(float**, int*);
	virtual void paint();
	virtual void action() = 0;
	void move();
	virtual int getData(float**) = 0;
	
	static char* initAll();
	
	
	};

#endif
