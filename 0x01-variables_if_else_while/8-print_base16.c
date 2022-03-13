#include <stdio.h>

/**
 * main - program entry
 *
 * Description: print base 16 values using lowercase, putchar()
 *
 * Return: 0
 */

int main(void)
{
  int i;
  char b;

  for (i = 0; i < 10; i++)
    {
      putchar(i + '0');
    }
  for (b = 'a'; b <= 'f'; b++)
    {
      putchar(b);
    }
  putchar('\n');
  return (0);
}
