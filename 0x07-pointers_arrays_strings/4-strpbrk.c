#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 *
 * Return: If a set is matched - a pointer to the matched byte.
 *         If no set is matched - NULL.
 */
int main(void)
{

char *s = "hello, world";
char *f = "world";
char *t;

t = _strpbrk(s, f);
printf("%s\n", t);
return (0);
}
