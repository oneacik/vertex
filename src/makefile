INC=include/

build: main.o Object.o
	$(CXX) $? -o exec -lglfw -lGL

.cpp.o:
	$(CXX) -c $? -I $(INC) -o $@

Object.o: Object.cpp
main.o: main.cpp




	
