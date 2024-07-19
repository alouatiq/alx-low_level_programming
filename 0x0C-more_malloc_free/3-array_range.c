#include <stdlib.h>
#include "main.h"

int *array_range(int min, int max)
{
  int *arr;
  int i, size;

  if (min > max)
    return NULL;

  size = max - min + 1;
  arr = malloc(size * sizeof(int));
  if (arr == NULL)
    return NULL;

  for (i = 0; i < size; i++, min++)
    arr[i] = min;

  return arr;
}
