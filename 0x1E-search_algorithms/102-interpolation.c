#include "search_algos.h"
#include <stdio.h>

/**
	* interpolation_search - Searches for a value
 	* in a sorted array using interpolation
	* @array: Pointer to the first element of the array
	* @size: The number of elements in the array
	* @value: The value to search for
	*
	* Return: The first index where the value is located, or -1 if not found
	*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (!array)
	return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
	/* Calculate the probe position */
	pos = low + (((double)(high - low) / (array[high] - array[low])) *
		(value - array[low]));

	if (pos >= size)
	{
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
	}

	printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

	/* Check if the value is found */
	if (array[pos] == value)
	return ((int)pos);

	/* Narrow the search range */
	if (array[pos] < value)
	low = pos + 1;
	else
	high = pos - 1;
	}

	return (-1);
}
