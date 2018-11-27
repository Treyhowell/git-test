# FIle: Makefile
# Author: Trey Howell
# Description: this is the make file for the vector class

# Compiler Version
   CC=g++
# Target
TARGET=list

# Compile with all errors and warnings
CFLAGS=-c -Wall $(DEBUG)

# Makefile syntax
# target: dependencies
#(tab) system command(s)

all: $(TARGET)

$ (TARGET): Main.o
	$(CC) Main.o -o $(TARGET)
Main.o: Main.cpp
	$(CC) $(CFLAGS) Main.cpp
clean:
	rm * .o *~ $(TARGET)
