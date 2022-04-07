#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: Minimum integer.
 * @max: Maximum integer.
 *
 * Return: min > max return to NULL.
 * if malloc fails, NULL.
 * Otherwise pointer to the newly created array.
 */
int *array_range(int min, int max)
{
int *arr;
int d;

if (min > max)
return (NULL);

arr = malloc(sizeof(*arr) * ((max - min) + 1));

if (arr == NULL)
return (NULL);

for (d = 0; min <= max; d++, min++)
arr[d] = min;

return (arr);
}
