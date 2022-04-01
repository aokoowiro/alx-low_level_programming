#include <stdlib.h>
#include <stdio.h>

/**
 *main - multiply 2 numbers
 *@argc: number of arguments passed to the functions
 *@argv: argument vector of pointers to strings
 *
 *Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{

if (argc != 3)
{
puts("Error");
return (1);
}

printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
