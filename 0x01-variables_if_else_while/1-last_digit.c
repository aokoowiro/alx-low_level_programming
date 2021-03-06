#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry
 *
 * Description: Prints the last digit of n and determines if it is
 * greater than 5, equal to 0, or less than 6 but not equal to 0
 *
 * Return: returns 0 (Success)
 */

int main(void)
{
int n;
int s;

srand(time(0));
n = rand() - RAND_MAX / 2;
s = n % 10;

if (s > 5)
printf("Last digit of %i is %i and is greater than 5\n", n, s);
else if (s == 0)
printf("Last digit of %i is %i and is 0\n", n, s);
else
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, s);
return (0);
}
