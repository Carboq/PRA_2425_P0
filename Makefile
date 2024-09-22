
all: output

main.o: main.cpp clase.h
	g++ -c main.cpp

clase.o: clase.cpp clase.h
	g++ -c clase.cpp
	
output: main.o clase.o
	g++ -o output main.o clase.o 

clean:
	rm -f *.o output

test: all
	./output
