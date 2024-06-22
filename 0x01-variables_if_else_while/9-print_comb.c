#include <stdio.h>

/**
 * main - Entry point, prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit;

for (digit = 0; digit <= 9; digit++)
{
putchar(digit + '0'); /* Print the digit character */

if (digit < 9)
{
putchar(','); /* Print comma after digit */
putchar(' '); /* Print space after comma */
}
}

putchar('\n'); /* Print a new line after all combinations */

return (0);
}
