#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet,
 * Return: Zero
 */
int print_alphabet_x10(void)
{
int m;
char ch;

i = 0;

while (m < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
m++;
}
return (0);
}
