#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
	
/**
	* main - Test for hash_table_create.
	*
	* Return: Always EXIT_SUCCESS.
	*/
int main(void)
{
	hash_table_t *ht;
	
	ht = hash_table_create(1024);
	if (ht == NULL)
	{
	printf("Failed to create hash table\n");
	return (EXIT_FAILURE);
	}
	printf("Hash table created with size: %lu\n", ht->size);
	return (EXIT_SUCCESS);
}
