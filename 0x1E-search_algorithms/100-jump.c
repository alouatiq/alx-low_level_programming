#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
	* jump_search - Searches for a value in a sorted array using Jump Search
	* @array: Pointer to the first element of the sorted array
	* @size: The number of elements in the array
	* @value: The value to search for
	*
	* Return: The first index where value is located, or -1 if not found
	*/
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev = 0;

	if (array == NULL || size == 0)
	return (-1);

	step = sqrt(size);

	/* Jump in steps until value is less than or equal to current step */
	while (step < size && array[step] < value)
	{
	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	prev = step;
	step += sqrt(size);
	}

	/* Corrected boundary print */
	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	printf("Value found between indexes [%lu] and [%lu]\n", prev, (step < size) ? step : size - 1);

	/* Perform linear search in the identified block */
	while (prev < size && prev <= step)
	{
	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	if (array[prev] == value)
	return ((int)prev);
	prev++;
	}

	return (-1);
}
