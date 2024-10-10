CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89
SRC = 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c \
      4-hash_table_get.c 5-hash_table_print.c 6-hash_table_delete.c 100-sorted_hash_table.c
OBJ = $(SRC:.c=.o)
HEADER = hash_tables.h
TARGET = hash_tables

all: $(TARGET)

$(TARGET): $(OBJ)
    $(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o: %.c $(HEADER)
    $(CC) $(CFLAGS) -c $< -o $@

clean:
    rm -f *.o $(TARGET)

rebuild: clean all
