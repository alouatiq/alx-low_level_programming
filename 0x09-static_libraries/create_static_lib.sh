#!/bin/bash

# Compile all .c files into object files
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create the static library liball.a from all object files
ar rcs liball.a *.o

# Clean up: remove all object files (*.o)
rm *.o
