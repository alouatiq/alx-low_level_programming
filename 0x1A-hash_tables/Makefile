# Compiler and flags
CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89 -I.

# Sources and output
SRC = 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c 6-hash_table_delete.c 100-sorted_hash_table.c
OBJ = $(SRC:.c=.o)
TARGET = hash_tables

# Default target to build the executable
all: $(TARGET)

# Build the main executable using a test file
$(TARGET): $(OBJ) tests/0-main.c
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ) tests/0-main.c

# Compile each .c file into an object file (.o)
%.o: %.c hash_tables.h
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files and the executable
clean:
	rm -f $(OBJ) $(TARGET)

# Clean and then rebuild everything
rebuild: clean all
