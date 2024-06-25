#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
void intcalculate_sum_of_even_fibonacci (void)
{
long int i, x = 1, y = 2, sum = 0, tSum = 0;

// Loop to calculate the Fibonacci sequence and sum even numbers
for (i = 0; i < 49; i++) // Iterate 49 times to find the first 50 Fibonacci numbers
{
if ((y % 2 == 0) && (y <= 4000000)) // Check if the current Fibonacci number (y) is even and not exceed 4,000,000
{
tSum = tSum + y; // Add the even Fibonacci number to the total sum (tSum)
}
sum = x + y; // Calculate the next Fibonacci number
x = y; // Update the previous Fibonacci number
y = sum; // Update the current Fibonacci number
}
printf("%ld\n", tSum); // Print the total sum of even Fibonacci numbers

return (0); // Return 0 to indicate successful execution
}
