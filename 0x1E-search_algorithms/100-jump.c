#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using jump search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index where value is located, or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step = sqrt(size), prev = 0, i;

    if (!array)
        return (-1);

    while (array[step] < value && step < size)
    {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
        prev = step;
        step += sqrt(size);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

    for (i = prev; i < size && i <= step; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return ((int)i);
    }
    return (-1);
}
