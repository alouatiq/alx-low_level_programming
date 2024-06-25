#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int count;
unsigned long x, y, fib;

x = 1;  /* First Fibonacci number */
y = 2;  /* Second Fibonacci number */

/* Print the first Fibonacci number */
printf("%lu", x);

/* Print the second Fibonacci number */
printf(", %lu", y);

/* Calculate and print the next 96 Fibonacci numbers */
for (count = 3; count <= 98; count++)
{
fib = x + y;  /* Calculate next Fibonacci number */
printf(", %lu", fib);

/* Update x and y for the next iteration */
x = y;
y = fib;
}

printf("\n");  /* New line after all numbers have been printed */

return (0);
}
