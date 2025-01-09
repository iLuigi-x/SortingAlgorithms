# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -std=c++11

# Default target (will build both executables)
all: BubbleSort InsertionSort

# Rule to build BubbleSort executable
BubbleSort:
	$(CXX) $(CXXFLAGS) -o BubbleSort.o BubbleSort.cpp

# Rule to build InsertionSort executable
InsertionSort: InsertionSort.o
	$(CXX) $(CXXFLAGS) -o InsertionSort.o InsertionSort.cpp


# Clean up object files and executables
clean:
	rm -f *.o

.PHONY: all clean
