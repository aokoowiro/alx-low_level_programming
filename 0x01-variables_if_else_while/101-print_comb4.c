#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Ptint all possible different combo of 3 digits
 *
 * Return: 0
 */

int main(void)
{
int e, f, g, h;

for (e = 0; e < 1000; e++)
{
f = e / 100; /* hundreds */
g = (e / 10) % 10; /* tens */
h = e % 10; /* unit */

if (f < g && g < h)
{
putchar(f + '0');
putchar(g + '0');
putchar(h + '0');

if (e < 700)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
