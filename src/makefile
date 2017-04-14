INC=include/

build: main.o Object.o
	$(CXX) $? -o exec -lglfw -lGL

.cpp.o:
	$(CXX) -c $? -I $(INC) -o $@

Object.o: Object.cpp
main.o: main.cpp


build: main.cpp
	export LD_LIBRARY_PATH=/usr/lib64/
	$(CXX) $? -o $(OUT)exec -lglfw -lGL


	
