all: 
	cp -R src/* out/
	cd out && make build

clean: 
	rm -rf out/*
	
	

	
