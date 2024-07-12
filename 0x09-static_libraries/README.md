# Static Libraries Project

This repository contains a collection of functions implemented in C, compiled into a static library (`libmy.a`), and a sample program that demonstrates the usage of these functions.

## Project Files

- **libmy.a**: Static library containing various utility functions.
- **main.c**: Sample program demonstrating the usage of functions from `libmy.a`.
- **main.h**: Header file containing function prototypes for all functions implemented in `libmy.a`.
- **create_static_lib.sh**: Shell script to automate the creation of `libmy.a` from `.c` files.
- **README.md**: This file, providing an overview of the project.

## Functions Implemented

The following functions are implemented in `libmy.a`:

- `int _putchar(char c);`
- `int _islower(int c);`
- `int _isalpha(int c);`
- `int _abs(int n);`
- `int _isupper(int c);`
- `int _isdigit(int c);`
- `int _strlen(char *s);`
- `void _puts(char *s);`
- `char *_strcpy(char *dest, char *src);`
- `int _atoi(char *s);`
- `char *_strcat(char *dest, char *src);`
- `char *_strncat(char *dest, char *src, int n);`
- `char *_strncpy(char *dest, char *src, int n);`
- `int _strcmp(char *s1, char *s2);`
- `char *_memset(char *s, char b, unsigned int n);`
- `char *_memcpy(char *dest, char *src, unsigned int n);`
- `char *_strchr(char *s, char c);`
- `unsigned int _strspn(char *s, char *accept);`
- `char *_strpbrk(char *s, char *accept);`
- `char *_strstr(char *haystack, char *needle);`