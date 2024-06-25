#include <stdio.h>

/**
 * intcalculate_sum_of_even_fibonacci - Calculate sum of even
 * Fibonacci numbers up to 4,000,000
 */
void intcalculate_sum_of_even_fibonacci(void)
{
long int x = 1, y = 2, sum = 0, tSum = 0;

/* Loop to calculate the Fibonacci sequence and sum even numbers */
while (y <= 4000000)
{
if (y % 2 == 0)
{
tSum += y;
}
sum = x + y;
x = y;
y = sum;
}

/* Print the sum of even Fibonacci numbers */
printf("%ld\n", tSum);
}

/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
intcalculate_sum_of_even_fibonacci();
return (0);
}
