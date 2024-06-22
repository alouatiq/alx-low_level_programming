#include <stdio.h>

/**
 * main - Entry point, prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  char letter = 'a';

  while (letter <= 'z')
    {
      putchar(letter);
      letter++;
    }
  putchar('\n'); /* Print a new line after the alphabet */

  return 0;
}
