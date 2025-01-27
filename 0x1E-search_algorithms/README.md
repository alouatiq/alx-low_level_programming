# 0x1E. C - Search Algorithms

This project focuses on implementing and analyzing search algorithms in C, specifically linear search and binary search. It also explores the time and space complexities of these algorithms.

## Tasks

### 0. Linear Search
- Implement a function `linear_search` that searches for a value in an array using linear search.
- Time Complexity: `O(n)`
- Space Complexity: `O(1)`

### 1. Binary Search
- Implement a function `binary_search` that searches for a value in a sorted array using binary search.
- Time Complexity: `O(log n)`
- Space Complexity: `O(1)`

### 2-6. Big O Notations
- Answer questions about the time and space complexities of the algorithms and a given function.

## Compilation
To compile the code, use the following command:
```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 <file.c> -o <output>
```

### Summary of Files
| File          | Content                                                                 |
|---------------|-------------------------------------------------------------------------|
| `0-linear.c`  | Implementation of linear search algorithm.                              |
| `1-binary.c`  | Implementation of binary search algorithm.                              |
| `2-O`         | Time complexity of linear search: `O(n)`.                               |
| `3-O`         | Space complexity of iterative linear search: `O(1)`.                    |
| `4-O`         | Time complexity of binary search: `O(log n)`.                           |
| `5-O`         | Space complexity of binary search: `O(1)`.                              |
| `6-O`         | Space complexity of `allocate_map`: `O(n * m)`.                         |
| `search_algos.h` | Header file with function prototypes.                                |
| `README.md`   | Project overview, instructions, and explanations.                       |
