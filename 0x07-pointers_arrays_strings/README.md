# 0x07. C - Even more pointers, arrays and strings

This project is part of the ALX Low-Level Programming curriculum. It focuses on deepening your understanding of pointers, arrays, and strings in C programming.

## Learning Objectives

By the end of this project, you should be able to:

- Understand and use pointers to pointers.
- Understand and use multidimensional arrays.
- Understand and apply string manipulation functions.
- Use standard library functions for string and memory operations.


## Files

### main.h

The main header file containing all function prototypes.

```c
#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);

#endif /* MAIN_H */
