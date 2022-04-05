#include "main.h"
#include <stdlib.h>
/**
 * create_array -  of chars.
 * @size: of array.
 * @c: char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
char *ar;
unsigned int i;

if (size == 0)
return (NULL);

cr = malloc(sizeof(c) * size);

if (ar == NULL)
return (NULL);

for (i = 0; i < size; i++)
ar[i] = c;

return (ar);
}