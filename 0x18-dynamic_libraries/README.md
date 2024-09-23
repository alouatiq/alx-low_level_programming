# 0x18. C - Dynamic libraries

This project focuses on creating and using dynamic libraries in C. It includes tasks to create a dynamic library, write a script to create a dynamic library, call C functions from Python, and an advanced task involving code injection.

## Files

- `main.h`: Header file containing all function prototypes.
- `libdynamic.so`: Dynamic library containing all required functions.
- `1-create_dynamic_lib.sh`: Script to create liball.so from all .c files in the current directory.
- `100-operations.so`: Dynamic library for C functions callable from Python.
- `101-make_me_win.sh`: Shell script for code injection task (advanced).

## Usage

To compile the dynamic library:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -c *.c
gcc -shared -o libdynamic.so *.o
```

To use the library:
```
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
```

## Author

[Your Name]

