#include "main.h"

/**
 * void print_alphabet - in lowercase with newline,
 * Return: zero (Success)
 */

int print_alphabet(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
return (0);
}
