#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to modify
 *
 * Return: a pointer to the resulting string
 */
char *cap_string(char *str)
{
int i = 0;
int cap_next = 1;

while (str[i] != '\0')
{
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' || str[i] == ';' ||
str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' ||
str[i] == ')' || str[i] == '{' || str[i] == '}')
{
cap_next = 1;
}
else if (cap_next && str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 'a' + 'A';
cap_next = 0;
}
else
{
cap_next = 0;
}
i++;
}

return (str);
}
