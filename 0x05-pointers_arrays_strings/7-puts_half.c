#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string to print
 */
void puts_half(char *str)
{
int len = 0, i;

while (str[len] != '\0')
{
len++;
}
i = (len % 2 == 0) ? len / 2 : (len + 1) / 2;
for (; i < len; i++)
{
putchar(str[i]);
}
putchar('\n');
}
