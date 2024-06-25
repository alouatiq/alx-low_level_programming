#include <stdio.h>

/**
 * main - Prints the sum of all multiples of 3 or 5 below 1024
 *
 * Return: Always 0
 */
int main(void)
{
int number, Sum;

Sum = 0;

for (number = 0; number < 1024; number++)
{
if (number % 3 == 0 || number % 5 == 0)
{
Sum += number;
}
}

printf("%d\n", Sum);

return 0;
}
