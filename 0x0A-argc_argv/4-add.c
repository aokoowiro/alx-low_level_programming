#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers plus new line.
 * @argc: Number of command line arguments.
 * @argv: Arrays of commandline arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
int count, k, sum = 0;

for (count = 1; count < argc; count++)
{
for (k = 0; argv[count][k] != '\0'; k++)
{
if (!isdigit(argv[count][k]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[count]);
}
printf("%d\n", sum);
return (0);
}
