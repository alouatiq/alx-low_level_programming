# 0x05. C - Pointers, Arrays, and Strings

This project is part of the ALX Low-Level Programming curriculum and focuses on the use of pointers, arrays, and strings in the C programming language. The project aims to provide a deeper understanding of memory manipulation, pointer arithmetic, and string handling in C.

## Learning Objectives
By completing this project, you should be able to:
- Understand how to use pointers to manipulate data directly in memory.
- Perform pointer arithmetic to navigate through arrays.
- Implement functions that operate on strings and arrays.
- Gain a deeper understanding of how arrays and pointers are related in C.

## Project Structure
The project contains multiple tasks, each focused on different aspects of pointers, arrays, and strings. Below is a list of the tasks along with a brief description of each:

### Task 0: 98 Battery St.
**File:** `0-reset_to_98.c`
- Write a function that takes a pointer to an int as a parameter and updates the value it points to to 98.
- **Prototype:** `void reset_to_98(int *n);`

### Task 1: Don't Swap Horses in Crossing a Stream
**File:** `1-swap.c`
- Write a function that swaps the values of two integers.
- **Prototype:** `void swap_int(int *a, int *b);`

### Task 2: This Report, by Its Very Length, Defends Itself Against the Risk of Being Read
**File:** `2-strlen.c`
- Write a function that returns the length of a string.
- **Prototype:** `int _strlen(char *s);`

### Task 3: I Do Not Fear Computers. I Fear the Lack of Them
**File:** `3-puts.c`
- Write a function that prints a string, followed by a new line, to stdout.
- **Prototype:** `void _puts(char *str);`

### Task 4: I Can Only Go One Way. I've Not Got a Reverse Gear
**File:** `4-print_rev.c`
- Write a function that prints a string, in reverse, followed by a new line.
- **Prototype:** `void print_rev(char *s);`

### Task 5: A Good Engineer Thinks in Reverse and Asks Himself About the Stylistic Consequences of the Components and Systems He Proposes
**File:** `5-rev_string.c`
- Write a function that reverses a string.
- **Prototype:** `void rev_string(char *s);`

### Task 6: Half the Lies They Tell About Me Aren't True
**File:** `6-puts2.c`
- Write a function that prints every other character of a string, starting with the first character, followed by a new line.
- **Prototype:** `void puts2(char *str);`

### Task 7: Winning is Only Half of It. Having Fun is the Other Half
**File:** `7-puts_half.c`
- Write a function that prints half of a string, followed by a new line.
- **Prototype:** `void puts_half(char *str);`
- The function should print the second half of the string.
- If the number of characters is odd, the function should print the last `n` characters of the string, where `n = (length_of_the_string - 1) / 2`.

### Task 8: Arrays are Not Pointers
**File:** `8-print_array.c`
- Write a function that prints `n` elements of an array of integers, followed by a new line.
- **Prototype:** `void print_array(int *a, int n);`
- Numbers must be separated by a comma, followed by a space.
- The numbers should be displayed in the same order as they are stored in the array.
- You are allowed to use `printf`.

### Task 9: strcpy
**File:** `9-strcpy.c`
- Write a function that copies the string pointed to by `src`, including the terminating null byte (`\0`), to the buffer pointed to by `dest`.
- **Prototype:** `char *_strcpy(char *dest, char *src);`
- **Return value:** the pointer to `dest`.

## Compilation
To compile any of the tasks, you can use the following command:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main.c file.c -o output
