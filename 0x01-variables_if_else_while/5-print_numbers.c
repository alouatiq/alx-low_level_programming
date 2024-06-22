#include <stdio.h>

/**
 * main - Entry point, prints all single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char digit = '0';
while (digit <= '9')
{
putchar(digit); /* Print the current digit */
digit++;
}

putchar('\n'); /* Print a new line after all digits */

return (0);
}
