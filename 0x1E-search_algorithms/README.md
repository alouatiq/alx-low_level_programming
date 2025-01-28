# 0x1E. C - Search Algorithms

This project focuses on implementing various search algorithms in C. Each algorithm is designed with a specific use case and optimized for efficiency.

## Learning Objectives
- Understand what a search algorithm is.
- Learn about linear search, binary search, jump search, and more.
- Determine the best search algorithm depending on the problem.

## Requirements
- All files are compiled on Ubuntu 20.04 LTS using `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`.
- Code follows the Betty style guidelines.
- No more than 5 functions per file.
- A `search_algos.h` header file is included with all function prototypes.

## Files
- **`search_algos.h`**: Header file with function prototypes and structures.
- **Search Algorithms**:
  - `0-linear.c`: Linear search in an array.
  - `1-binary.c`: Binary search in a sorted array.
  - `100-jump.c`: Jump search in a sorted array.
  - `102-interpolation.c`: Interpolation search in a sorted array.
  - `103-exponential.c`: Exponential search in a sorted array.
  - `104-advanced_binary.c`: Advanced binary search for the first occurrence.
  - `105-jump_list.c`: Jump search in a singly linked list.
  - `106-linear_skip.c`: Linear search in a skip list.
- **Big O Complexity**:
  - `2-O`: Time complexity of linear search.
  - `3-O`: Space complexity of linear search.
  - `4-O`: Time complexity of binary search.
  - `5-O`: Space complexity of binary search.
  - `6-O`: Space complexity of a dynamic allocation function.
  - `101-O`: Time complexity of jump search.
  - `107-O`: Time complexity of jump search in a linked list.
  - `108-O`: Time complexity of jump search in a skip list.
- **Helper Functions**:
  - `create_list.c`, `print_list.c`, `free_list.c`: Manage singly linked lists.
  - `create_skiplist.c`, `print_skiplist.c`, `free_skiplist.c`: Manage skip lists.
