#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to print
 */
void print_number(int n)
{
int reversed = 0;
int digit;
int is_negative = 0;

  /* Handle negative numbers */
if (n < 0) {
is_negative = 1;
n = -n; /* Make n positive */
}

  /* Special case for 0 */
if (n == 0) {
_putchar('0');
return;
}

  /* Reverse the digits */
while (n != 0) {
digit = n % 10; /* Get the last digit */
reversed = reversed * 10 + digit; /* Build reversed number */
n /= 10; /* Move to the next digit */
}

  /* Print the reversed number */
if (is_negative)
_putchar('-'); /* Print negative sign if necessary */

  /* Print each digit from reversed */
while (reversed != 0) {
digit = reversed % 10;
_putchar(digit + '0'); /* Convert digit to character and print */
reversed /= 10;
}
}
