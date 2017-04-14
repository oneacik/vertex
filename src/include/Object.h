class Object{
private:
	int ptr,offset;
public:
	int x,y,dx,dy,rot,drot;
	Object();
	virtual int init(char**, int*) = 0;
	virtual void paint();
	virtual void action() = 0;
	void move();
	virtual int getData(char**) = 0;
	
	
	
	};
