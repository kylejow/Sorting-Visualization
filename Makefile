all: main
CXXFLAGS=-Wall -g
CXX=g++
main: main.o display.o selectionsort.o insertionsort.o mergesort.o quicksort.o
	$(CXX) -o $@ $^
clean:
	rm -f *.o *.exe