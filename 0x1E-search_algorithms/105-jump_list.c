#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
	* jump_list - Searches for a value in a sorted list using jump search.
	* @list: Pointer to the head of the list.
	* @size: Number of nodes in the list.
	* @value: Value to search for.
	*
	* Return: Pointer to the first node where value is located, or NULL if not found.
	*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size);
	listint_t *prev = list, *curr = list;

	if (list == NULL)
	return (NULL);

	while (curr->n < value && curr->index < size - 1)
	{
	prev = curr;
	for (size_t i = 0; i < step && curr->index < size - 1; i++)
	curr = curr->next;
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
