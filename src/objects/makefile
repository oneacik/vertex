INC= -I../include/ -Iinclude/
OUT=../../out/objects/

CXXFLAGS = -O0 -g

.PHONY: all dir

all: $(OUT)Sample.o
	-mkdir $(OUT)
	
$(OUT)Sample.o: Sample.cpp
	-mkdir $(OUT)
	$(CXX) -c $? $(INC) -o $@ $(CXXFLAGS)


	


