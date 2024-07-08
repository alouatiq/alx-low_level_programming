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
char *bhaystack; // Pointer to store the beginning of the current haystack substring
char *pneedle;   // Pointer to iterate through needle

while (*haystack != '\0') // Loop through haystack until the end
{
bhaystack = haystack; // Save current position in haystack
pneedle = needle;     // Start needle comparison from beginning

while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
{
haystack++; // Move to next character in haystack
pneedle++;  // Move to next character in needle
}

if (!*pneedle) // If entire needle is matched
return (bhaystack); // Return start of matched substring in haystack

haystack = bhaystack + 1; // Move haystack to the next character
}

return (0); // Return NULL if substring is not found
}
