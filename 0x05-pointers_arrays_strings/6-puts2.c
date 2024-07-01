#include "main.h"

/**
 * puts2 - prints every other character of a string starting with the first one
 * @str: the string to print
 */
void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (i % 2 == 0)
{
putchar(str[i]);
}
}
putchar('\n');
}
