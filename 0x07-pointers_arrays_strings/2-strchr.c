#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located.
 *
 * Return: If c is found - a pointer to the first occurrence.
 *         If c is not found - NULL.
 */
char *_strchr(char *s, char c)
{
  /* Iterate through each character in the string s */
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}

  /* Check if the character to be located is the null terminator */
if (c == '\0')
return (s);

  /* If the character is not found, return NULL */
return (NULL);
}
