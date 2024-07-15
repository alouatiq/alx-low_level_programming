#!/bin/bash

# Compile all .c files to .o files
gcc -c *.c

# Create the static library from all .o files
ar rcs liball.a *.o

# Clean up the .o files
rm *.o
