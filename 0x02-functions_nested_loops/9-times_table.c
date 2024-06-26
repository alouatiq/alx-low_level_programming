#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 *
 * Description: This function prints the multiplication table
 * of the number 9 up to 9 times. The output should be formatted
 * exactly as specified in the example.
 */
void times_table(void)
{
int row, column, product;

for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{
product = row * column;
if (column == 0)
{
_putchar('0');
}
else
{
_putchar(',');
_putchar(' ');
if (product >= 10)
{
_putchar((product / 10) + '0');
}
else
{
_putchar(' ');
}
_putchar((product % 10) + '0');
}
}
_putchar('\n');
}
}
