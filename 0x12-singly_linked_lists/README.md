# Singly Linked Lists

This project involves implementing a singly linked list in C. The tasks include creating functions to manipulate the linked list, such as adding nodes, printing elements, and freeing the list.

## Data Structure

```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
