#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -c src/*.c
gcc -shared -o build/libdynamic.so *.o
rm *.o  # Clean up object files after the library is created
