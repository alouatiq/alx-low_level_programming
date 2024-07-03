#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to encode
 *
 * Return: a pointer to the resulting string
 */
char *leet(char *str)
{
int i, j;
char leet_chars[] = "aAeEoOtTlL";
char leet_replacements[] = "4433007711";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; leet_chars[j] != '\0'; j++)
{
if (str[i] == leet_chars[j])
{
str[i] = leet_replacements[j];
}
}
}

return (str);
}
