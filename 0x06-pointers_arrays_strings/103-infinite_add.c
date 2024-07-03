#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: the first number
 * @n2: the second number
 * @r: the buffer to store the result
 * @size_r: the size of the buffer
 *
 * Return: a pointer to the result if it can be stored in r, otherwise 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, len1, len2, sum, carry;

for (len1 = 0; n1[len1] != '\0'; len1++)
;
for (len2 = 0; n2[len2] != '\0'; len2++)
;

if (len1 > size_r - 1 || len2 > size_r - 1)
return (0);

carry = 0;
k = size_r - 1;
r[k--] = '\0';

for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--, k--)
{
sum = carry;
if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';
carry = sum / 10;
if (k < 0)
return (0);
r[k] = (sum % 10) + '0';
}

if (carry > 0)
{
if (k < 0)
return (0);
r[k--] = carry + '0';
}

return (&r[k + 1]);
}
