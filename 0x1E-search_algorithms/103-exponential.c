#include "search_algos.h"
#include <stdio.h>

/**
	* binary_search_range - Searches for a value using Binary Search in a range
	* @array: Pointer to the first element of the array
	* @left: The starting index of the range
	* @right: The ending index of the range
	* @value: The value to search for
	*
	* Return: The index where the value is located, or -1 if not found
	*/
int binary_search_range(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	while (left <= right)
	{
	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	printf("%d%s", array[i], (i < right) ? ", " : "\n");

	mid = left + (right - left) / 2;

	if (array[mid] == value)
	return (mid);
	else if (array[mid] < value)
	left = mid + 1;
	else
	right = mid - 1;
	}

	return (-1);
}

/**
	* exponential_search - Searches for a value using Exponential Search
	* @array: Pointer to the first element of the array
	* @size: The number of elements in the array
	* @value: The value to search for
	*
	* Return: The first index where the value is located, or -1 if not found
	*/
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t left, right;

	if (array == NULL || size == 0)
	return (-1);

	/* Find range for binary search */
	while (bound < size && array[bound] < value)
	{
	printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
	bound *= 2;
	}

	/* Perform binary search in the range */
	left = bound / 2;
	right = (bound < size) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	return (binary_search_range(array, left, right, value));
}
