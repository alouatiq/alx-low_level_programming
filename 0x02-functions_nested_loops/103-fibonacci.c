#include <stdio.h>

/**
 * main - Prints the sum of even Fibonacci numbers below 4,000,000
 *
 * Return: Always 0
 */
int main(void)
{
unsigned long a, b, c, sum;
int i; // Declare loop variable outside of the loop

a = 1; /* First Fibonacci number */
b = 2; /* Second Fibonacci number */
sum = 0; /* Initialize sum */

/* Print the initial Fibonacci numbers 1 and 2 */
printf("%lu, %lu", a, b);

/* Start generating Fibonacci numbers from the third number */
for (i = 3; i <= 98; i++)
{
c = a + b; /* Calculate next Fibonacci number */

/* Check if the Fibonacci number is even and add to sum */
if (c % 2 == 0)
{
sum += c;
}

/* Print the Fibonacci number */
printf(", %lu", c);

/* Update values for next iteration */
a = b;
b = c;
}

/* Print the sum of even Fibonacci numbers */
printf("\nSum of even Fibonacci numbers below 4,000,000: %lu\n", sum);

return (0);
}
