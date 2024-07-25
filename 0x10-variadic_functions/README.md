# 0x10. C - Variadic Functions

This project covers the implementation and usage of variadic functions in C. Variadic functions allow for functions to accept a variable number of arguments, providing flexibility in the functions' parameter lists.

## Learning Objectives

- Understand what variadic functions are and when to use them
- Learn how to use `va_start`, `va_arg`, and `va_end` macros
- Practice creating functions that can take a variable number of arguments

## Project Files

### 0-sum_them_all.c

Function that returns the sum of all its parameters.

- **Prototype:** `int sum_them_all(const unsigned int n, ...);`
- If `n` is `0`, the function returns `0`.

**Example:**

```c
int sum = sum_them_all(2, 98, 1024);  // Returns 1122
int sum = sum_them_all(4, 98, 1024, 402, -1024);  // Returns 500
