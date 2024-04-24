# Makefile for simple C++ program 
 
# Compiler 
CC = g++ 
 
# Target executable 
TARGET = runUnitTests
 
all: $(TARGET) 
 
$(TARGET): unit_test_demo.cpp 
	$(CC) unit_test_demo.cpp sorting_algs.cpp catch.hpp -o $(TARGET)
 
clean: 
	rm -f $(TARGET) 