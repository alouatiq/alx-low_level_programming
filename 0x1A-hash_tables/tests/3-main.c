#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
	
/**
	* main - Test for hash_table_set function.
	*
	* Return: Always EXIT_SUCCESS.
	*/
int main(void)
{
	hash_table_t *ht;
	
	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "hetairas", "mentioner");
	hash_table_set(ht, "heliotropes", "neurospora");
	hash_table_set(ht, "depravement", "serafins");
	return (EXIT_SUCCESS);
}
