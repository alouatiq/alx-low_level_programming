#include <stdio.h>

/**
 * main - Entry point, prints all single digit numbers of base 10
 *        starting from 0, using only putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int digit = 0;

  while (digit <= 9)
    {
      putchar(digit + '0'); /* Convert digit to character and print */
      digit++;
    }

  putchar('\n'); /* Print a new line after all digits */

  return 0;
}
