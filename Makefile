all: main
CXXFLAGS=-Wall -g
CXX=g++
main: main.o display.o selectionsort.o mergesort.o insertionsort.o quicksort.o
	$(CXX) -o $@ $^
clean:
	rm -f *.o *.exe