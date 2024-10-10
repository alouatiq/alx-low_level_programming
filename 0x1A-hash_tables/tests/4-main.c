#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
	
/**
	* main - Test for hash_table_get function.
	*
	* Return: Always EXIT_SUCCESS.
	*/
int main(void)
{
	hash_table_t *ht;
	char *value;
	
	ht = hash_table_create(1024);
	hash_table_set(ht, "c", "fun");
	hash_table_set(ht, "python", "awesome");
	
	value = hash_table_get(ht, "python");
	printf("Value for 'python': %s\n", value);
	value = hash_table_get(ht, "c");
	printf("Value for 'c': %s\n", value);
	value = hash_table_get(ht, "javascript");
	printf("Value for 'javascript': %s\n", value ? value : "(null)");
	return (EXIT_SUCCESS);
}
