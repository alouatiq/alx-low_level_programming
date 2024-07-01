#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: the string to reverse and print
 */
void print_rev(char *s)
{
int len = 0;

while (s[len] != '\0')
{
len++;
}
for (len--; len >= 0; len--)
{
putchar(s[len]);
}
putchar('\n');
}
