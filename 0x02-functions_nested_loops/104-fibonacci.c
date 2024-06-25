#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
unsigned long a, b, c;
int count;

a = 1; // First Fibonacci number
b = 2; // Second Fibonacci number

printf("%lu, %lu", a, b); // Print the first two Fibonacci numbers

for (count = 3; count <= 98; count++)
{
c = a + b; // Calculate next Fibonacci number
printf(", %lu", c); // Print the Fibonacci number

// Update values for the next iteration
a = b;
b = c;
}

printf("\n"); // Print new line after all numbers

return 0;
}
