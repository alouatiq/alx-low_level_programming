#include <stdio.h>

/**
 * main - Entry point, prints all possible combinations
 * of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int num1, num2;

for (num1 = 0; num1 <= 98; num1++)
{
for (num2 = num1 + 1; num2 <= 99; num2++)
{
/* Print first number (two digits) */
putchar(num1 / 10 + '0');
putchar(num1 % 10 + '0');
/* Print space */
putchar(' ');
/* Print second number (two digits) */
putchar(num2 / 10 + '0');
putchar(num2 % 10 + '0');
/* Print comma and space if not the last combination */
if (!(num1 == 98 && num2 == 99))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n'); /* Print a new line after all combinations */
return (0);
}
