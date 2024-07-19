#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc
 * @ptr: Pointer to the memory previously allocated
 * @old_size: Size of the allocated space for ptr
 * @new_size: New size of the new memory block
 * Return: Pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
unsigned int min_size;

if (new_size == old_size)
return ptr;

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return NULL;
}

if (ptr == NULL)
return malloc(new_size);

new_ptr = malloc(new_size);
if (new_ptr == NULL)
return NULL;

min_size = old_size < new_size ? old_size : new_size;
memcpy(new_ptr, ptr, min_size);
free(ptr);

return new_ptr;
}
