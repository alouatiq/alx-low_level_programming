#include <stdio.h>

/**
 * main - Entry point, prints all hexadecimal digits in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char digit;

for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit); /* Print digits 0-9 */
}

for (digit = 'a'; digit <= 'f'; digit++)
{
putchar(digit); /* Print letters a-f */
}
putchar('\n'); /* Print a new line after all hexadecimal digits */

return 0;
}
