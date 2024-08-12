# 0x15. File I/O in C

## Description

This project is part of the ALX Low-Level Programming curriculum. It covers file descriptors, file I/O operations, and related system calls in C programming. The project tasks include creating functions to read from a file, create a file, append text to a file, and copy the content of one file to another. Additionally, the project includes working with ELF files and parsing their headers.

## Learning Objectives

By the end of this project, you should be able to:

- Understand how to create, open, close, read, and write files in C.
- Comprehend file descriptors and the three standard file descriptors (stdin, stdout, stderr).
- Utilize the I/O system calls (`open`, `close`, `read`, `write`) effectively.
- Understand the flags (`O_RDONLY`, `O_WRONLY`, `O_RDWR`) used in file operations.
- Set file permissions when creating files.
- Differentiate between functions and system calls.

## Requirements

- All code is written in C and compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- No more than 5 functions per file.
- No global variables are allowed.
- Only allowed standard library functions are `malloc`, `free`, and `exit`.
- Syscalls allowed: `read`, `write`, `open`, `close`.
- Code follows the Betty coding style.

## Project Tasks

### 0. Tread lightly, she is near
- **File:** `0-read_textfile.c`
- **Description:** A function that reads a text file and prints it to the POSIX standard output.

### 1. Under the snow
- **File:** `1-create_file.c`
- **Description:** A function that creates a file with specified content.

### 2. Speak gently, she can hear
- **File:** `2-append_text_to_file.c`
- **Description:** A function that appends text to the end of a file.

### 3. cp
- **File:** `3-cp.c`
- **Description:** A program that copies the content of one file to another.

### 4. elf
- **File:** `100-elf_header.c`
- **Description:** A program that displays the information contained in the ELF header at the start of an ELF file.
