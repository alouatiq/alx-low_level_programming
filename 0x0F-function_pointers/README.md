# 0x0F. C - Function Pointers

## Description
This project is focused on learning and implementing function pointers in C. Function pointers provide a powerful way to manage and manipulate functions as first-class objects, allowing more flexible and reusable code. The project includes tasks that demonstrate how to use function pointers to print names, iterate over arrays, search for integers, perform arithmetic operations, and print opcodes.

## Project Structure
The project contains the following files:

### Header File
- **function_pointers.h**: Header file containing function prototypes and necessary includes for tasks 0, 1, and 2.

### Task 0
- **0-print_name.c**: Function that prints a name using a callback function.
  - **Prototype**: `void print_name(char *name, void (*f)(char *));`

### Task 1
- **1-array_iterator.c**: Function that executes a function given as a parameter on each element of an array.
  - **Prototype**: `void array_iterator(int *array, size_t size, void (*action)(int));`

### Task 2
- **2-int_index.c**: Function that searches for an integer in an array.
  - **Prototype**: `int int_index(int *array, int size, int (*cmp)(int));`

### Task 3
This task requires four different files:
- **3-calc.h**: Header file containing function prototypes and data structures for a simple calculator program.
- **3-op_functions.c**: Functions to perform basic arithmetic operations.
  - **Prototypes**:
      - `int op_add(int a, int b);`
          - `int op_sub(int a, int b);`
	      - `int op_mul(int a, int b);`
	          - `int op_div(int a, int b);`
		      - `int op_mod(int a, int b);`
		      - **3-get_op_func.c**: Function that selects the correct function to perform an operation.
		        - **Prototype**: `int (*get_op_func(char *s))(int, int);`
			- **3-main.c**: Main function for the simple calculator program.
			  - Usage: `./calc num1 operator num2`

### Task 4
- **100-main_opcodes.c**: Program that prints the opcodes of its own main function.
  - Usage: `./main number_of_bytes`

## Compilation
To compile the programs, use the following commands:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_name.c -o a
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-array_iterator.c -o b
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-int_index.c -o c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
gcc -std=gnu89 100-main_opcodes.c -o main
