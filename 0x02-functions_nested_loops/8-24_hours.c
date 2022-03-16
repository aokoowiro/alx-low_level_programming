#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: Always 0.
 */

int jack_bauer(void)
{
int hrs;
int mins;

for (hrs = 0; hrs < 24; hrs++)
{
for (mins = 0; mins < 60; mins++)
{
_putchar((hrs / 10) + '0');
_putchar((hrs % 10) + '0');
_putchar(':');
_putchar((mins / 10) + '0');
_putchar((mins % 10) + '0');
_putchar('\n');
}
}
return (0);
}
