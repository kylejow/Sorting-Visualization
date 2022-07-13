all: main
CXXFLAGS=-Wall -g
CXX=g++
main: main.o display.o selectionsort.o
	$(CXX) -o $@ $^
clean:
	rm -f *.o *.exe