#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array of @nmemb
 * @nmemb: Number of elements in array.
 * @size: bytes.
 *
 * Return: NULL if nmemb or size is 0, otherwise
 * pointer to memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *arr;
unsigned int d;

if (nmemb == 0 || size == 0)
return (NULL);

arr = malloc(nmemb * size);

if (arr == NULL)
return (NULL);

for (d = 0; d < (nmemb * size); d++)
arr[d] = 0;

return (arr);
}
