#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
	* jump_list - Searches for a value in a sorted singly linked list
	*             using the Jump Search algorithm.
	* @list: Pointer to the head of the linked list.
	* @size: The number of nodes in the linked list.
	* @value: The value to search for.
	*
	* Return: Pointer to the first node where the value is located, or NULL.
	*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size);
	listint_t *prev = list, *current = list;
	size_t index;

	if (!list || size == 0)
	return (NULL);

	/* Jump through the list to find the block containing the value */
	while (current->next && current->index < size && current->n < value)
	{
	prev = current;
	for (index = 0; index < step && current->next; index++)
	current = current->next;

	printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);

	/* Perform linear search within the identified block */
	while (prev && prev->index <= current->index)
	{
	printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
	if (prev->n == value)
	return (prev);
	prev = prev->next;
	}

	return (NULL);
}
