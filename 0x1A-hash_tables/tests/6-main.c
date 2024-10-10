#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
	
/**
	* main - Test for hash_table_delete function.
	*
	* Return: Always EXIT_SUCCESS.
	*/
int main(void)
{
	hash_table_t *ht;
	
	ht = hash_table_create(1024);
	hash_table_set(ht, "c", "fun");
	hash_table_set(ht, "python", "awesome");
	hash_table_delete(ht);
	printf("Hash table deleted successfully.\n");
	return (EXIT_SUCCESS);
}
