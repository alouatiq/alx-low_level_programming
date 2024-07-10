#include "main.h"
/**
 * factorial - Recursively calculates the factorial of a given number.
 * @n: The number whose factorial is to be calculated.
 * 
 * Return: The factorial of the number.
 *         -1 if n is negative to indicate an error.
 */
int factorial(int n)
{
if (n < 0)
{
return -1;
}
if (n == 0)
{
return 1;
}
return n * factorial(n - 1);
}
