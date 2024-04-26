# Compiler - g++
CC = g++ 
 
# Target executable - generated runUnitTests executable
TARGET = runUnitTests
 
all: $(TARGET) 
 
# compile command - compile dependencies sorting_algs.cpp and catch.hpp alongside unit_test_demo.cpp
$(TARGET): unit_test_demo.cpp 
	$(CC) unit_test_demo.cpp sorting_algs.cpp catch.hpp -o $(TARGET)
 
# clean command
clean: 
	rm -f $(TARGET) 