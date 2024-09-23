#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -c *.c
gcc -shared -o libdynamic.so *.o
rm *.o  # Clean up object files
