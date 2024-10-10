#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
	
/**
	* main - Test for key_index function.
	*
	* Return: Always EXIT_SUCCESS.
	*/
int main(void)
{
	char *s;
	unsigned long int size;
	
	size = 1024;
	s = "cisfun";
	printf("Index of '%s': %lu\n", s, key_index((unsigned char *)s, size));
	s = "Don't forget to tweet today";
	printf("Index of '%s': %lu\n", s, key_index((unsigned char *)s, size));
	s = "98";
	printf("Index of '%s': %lu\n", s, key_index((unsigned char *)s, size));
	return (EXIT_SUCCESS);
}
