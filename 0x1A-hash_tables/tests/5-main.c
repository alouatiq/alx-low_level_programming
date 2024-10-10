#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
	
/**
	* main - Test for hash_table_print function.
	*
	* Return: Always EXIT_SUCCESS.
	*/
int main(void)
{
	hash_table_t *ht;
	
	ht = hash_table_create(1024);
	hash_table_set(ht, "c", "fun");
	hash_table_set(ht, "python", "awesome");
	hash_table_print(ht);
	return (EXIT_SUCCESS);
}
