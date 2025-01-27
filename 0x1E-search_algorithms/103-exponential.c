#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * binary_search - Helper function for binary search.
 * @array: Pointer to the first element of the array.
 * @left: Left index of the subarray.
 * @right: Right index of the subarray.
 * @value: Value to search for.
 *
 * Return: Index where value is located, or -1 if not found.
 */
int binary_search(int *array, size_t left, size_t right, int value)
{
    size_t mid, i;

    while (left <= right)
    {
        printf("Searching in array: ");
        for (i = left; i <= right; i++)
        {
            printf("%d", array[i]);
            if (i < right)
                printf(", ");
        }
        printf("\n");

        mid = (left + right) / 2;

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
 * exponential_search - Searches for a value in a sorted array using exponential search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index where value is located, or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1;

    if (array == NULL)
        return (-1);

    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, (bound < size ? bound : size - 1));

    return binary_search(array, bound / 2, (bound < size ? bound : size - 1), value);
}
