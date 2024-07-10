#include "main.h"
/**
 * _palindrome_helper - Helper function to check for palindrome.
 * @s: The string to check.
 * @start: The starting index.
 * @end: The ending index.
 * 
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int _strlen_rec(char *s)
{
if (*s == '\0')
{
return 0;
}
return 1 + _strlen_rec(s + 1);
}

int _palindrome_helper(char *s, int start, int end)
{
if (start >= end)
{
return 1;
}
if (s[start] != s[end])
{
return 0;
}
return _palindrome_helper(s, start + 1, end - 1);
}

int is_palindrome(char *s)
{
int len = _strlen_rec(s);
return _palindrome_helper(s, 0, len - 1);
}
