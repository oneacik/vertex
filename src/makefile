INC=include/
OUT=../out/
.PHONY = all
CXXFLAGS = -O0 -g

all:  $(OUT)exec

$(OUT)main.o: main.cpp
	$(CXX) -c $? -I $(INC) -o $@ $(CXXFLAGS)

$(OUT)Object.o: Object.cpp $(INC)Object.h
	$(CXX) -c $< -I $(INC) -o $@ $(CXXFLAGS)

$(OUT)objects/Sample.o: 
	cd objects && make

$(OUT)exec: $(OUT)main.o $(OUT)Object.o $(OUT)objects/Sample.o
	$(CXX) $? -o $@ -lGL -lglfw $(CXXFLAGS)


