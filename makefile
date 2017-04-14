.PHONY= all clean
PUSIA=ciapa

all: 
	-mkdir out
	cd src && make all

clean: 
	-rm -rf out/*
	
	

	
