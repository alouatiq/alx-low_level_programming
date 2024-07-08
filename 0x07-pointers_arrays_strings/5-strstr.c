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
int index; // Declare variable to hold index for comparison

if (*needle == 0) // If needle is an empty string, return haystack directly
return (haystack);

while (*haystack) // Loop through the haystack string
{
index = 0; // Reset index to 0 for each iteration

if (haystack[index] == needle[index]) // If characters match at current position
{
do { // Start a do-while loop to check subsequent characters

if (needle[index + 1] == '\0') // If end of needle string is reached
return (haystack); // Return current position in haystack

index++; // Move to next character in needle

} while (haystack[index] == needle[index]); // Continue loop if characters match
}

haystack++; // Move to next character in haystack
}

return ('\0'); // Return NULL if substring is not found
}
