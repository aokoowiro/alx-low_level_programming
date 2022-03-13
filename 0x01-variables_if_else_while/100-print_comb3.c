#include <stdio.h>

/**
 * main - entry
 *
 * Description: print all possible combinations of two digits
 *
 * Return: 0
 */

int main(void)
{
int a;
int b;
int c;

a  = 0;

while (a < 100)
{
b = a / 10; /* tens */
c = a % 10; /* unit */

if (b < c)
{
putchar(b + '0');
putchar(c + '0');

if (a < 89)
{
putchar(',');
putchar(' ');
}
}

a++;
}
putchar('\n');
return (0);
}
