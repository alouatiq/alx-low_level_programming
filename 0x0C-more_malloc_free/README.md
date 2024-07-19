# 0x0C. More malloc, free

This project focuses on advanced memory management techniques in C, specifically using dynamic memory allocation functions such as `malloc`, `calloc`, and `realloc`. You will learn how to allocate, deallocate, and manage memory efficiently, as well as manipulate strings and arrays in dynamically allocated memory.

## Project Overview

Dynamic memory allocation is a powerful feature in C that allows programs to request memory from the operating system at runtime. This project covers the following key concepts:

- **malloc:** Allocates a specified number of bytes and returns a pointer to the allocated memory.
- **calloc:** Allocates memory for an array of elements, initializes them to zero, and returns a pointer to the allocated memory.
- **realloc:** Changes the size of a previously allocated memory block and returns a pointer to the new block.
- **String manipulation:** Concatenating and copying strings using dynamically allocated memory.
- **Error handling:** Properly handling memory allocation failures.

## Table of Contents

- [Tasks](#tasks)
  - [Task 0: Trust no one](#task-0-trust-no-one)
    - [Task 1: string_nconcat](#task-1-string_nconcat)
      - [Task 2: _calloc](#task-2-_calloc)
        - [Task 3: array_range](#task-3-array_range)
	  - [Task 4: _realloc](#task-4-_realloc)
	    - [Task 5: We must accept finite disappointment, but never lose infinite hope](#task-5-we-must-accept-finite-disappointment-but-never-lose-infinite-hope)

## Tasks

### Task 0: Trust no one

Write a function that allocates memory using `malloc`.

- **Prototype:** `void *malloc_checked(unsigned int b);`
- **Returns:** a pointer to the allocated memory.
- If `malloc` fails, the `malloc_checked` function should cause normal process termination with a status value of 98.

**File:** `0-malloc_checked.c`

```c
#include <stdlib.h>
#include "main.h"

void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);
        if (ptr == NULL)
	    {
	            exit(98);
		        }
			    return ptr;
			    }
			    