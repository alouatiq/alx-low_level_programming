#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number up to which the times table should be printed
 *
 * Description: If n is greater than 15 or less than 0, the function
 * does not print anything. The output is formatted to match the
 * specified requirements.
 */
void print_times_table(int n)
{
int i, j, product; /* Declare variables at the beginning */

if (n < 0 || n > 15)
return;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
product = i * j;

/* Print the number with appropriate formatting */
if (j == 0)
printf("%d", product); /* No leading comma for the first column */
else
printf(", %3d", product); /* 3 spaces padding for alignment */
	}
printf("\n"); /* Move to the next line after each row */
}
}
