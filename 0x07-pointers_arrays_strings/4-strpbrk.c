#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 *
 * Return: If a set is matched - a pointer to the matched byte.
 *         If no set is matched - NULL.
 */
char *_strpbrk(char *s, char *accept)
{
char *a;

  /* Iterate through each character in the string s */
while (*s)
{
      /* Check if the current character in s matches any character in accept */
for (a = accept; *a; a++)
{
if (*s == *a)
return (s);
}
s++;
}

  /* If no match is found, return NULL */
return (NULL);
}
