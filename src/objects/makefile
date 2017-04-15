INC= -I../include/ -Iinclude/
OUT=../../out/objects/

CXXFLAGS = -O0 -g

.PHONY: all dirc

$(OUT)/Objects.o: $(patsubst %.cpp, $(OUT)%.o, $(wildcard *.cpp))
	ld -r $? -o $(OUT)/Objects.o
	

	
$(OUT)%.o: %.cpp
	$(CXX) -c $? $(INC) -o $@ $(CXXFLAGS)

dirc:
	-mkdir $(OUT)

	


