#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
	* linear_skip - Searches for a value in a sorted skip list using linear search.
	* @list: Pointer to the head of the skip list.
	* @value: Value to search for.
	*
	* Return: Pointer to the first node where value is located, or NULL if not found.
	*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev = list, *curr = list;

	if (list == NULL)
	return (NULL);

	while (curr->express && curr->n < value)
	{
	prev = curr;
	curr = curr->express;
	printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev->index, curr->index);

	while (prev->index <= curr->index)
	{
	printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
	if (prev->n == value)
	return (prev);
	prev = prev->next;
	}

	return (NULL);
}
