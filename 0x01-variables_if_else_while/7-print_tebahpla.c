#include <stdio.h>

/**
 * main - Entry point, prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  char letter = 'z';

  while (letter >= 'a')
    {
      putchar(letter); /* Print the current letter */
      letter--;
    }

  putchar('\n'); /* Print a new line after all letters */

  return 0;
}
