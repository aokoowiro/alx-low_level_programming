#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory.
 * @b: bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
char *d;

d = malloc(b);
if (d == NULL)
exit(98);
return (d);
}
