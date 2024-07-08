#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: If the substring is found - a pointer to the beginning of the located substring.
 *         If the substring is not found - NULL.
 */
char *_strstr(char *haystack, char *needle)
{
char *h, *n;

  /* If needle is empty, return the haystack */
if (*needle == '\0')
return (haystack);

  /* Iterate through each character in haystack */
while (*haystack)
{
h = haystack;
n = needle;

      /* Check if the substring matches */
while (*h && *n && (*h == *n))
{
h++;
n++;
}

      /* If we reached the end of needle, it means we found a match */
if (*n == '\0')
return (haystack);

haystack++;
}

  /* If no match is found, return NULL */
return (NULL);
}
