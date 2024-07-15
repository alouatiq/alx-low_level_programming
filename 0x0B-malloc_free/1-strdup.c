#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a new string which
 * is a duplicate of the string str.
 * @str: The string to duplicate.
 * Return: A pointer to the duplicated string, or NULL
 * if str is NULL or if insufficient memory was available.
 */
char *_strdup(char *str)
{
char *dup;
unsigned int i, length = 0;

if (str == NULL)
return (NULL);

while (str[length] != '\0')
length++;

dup = (char *)malloc((length + 1) * sizeof(char));
if (dup == NULL)
return (NULL);

for (i = 0; i <= length; i++)
dup[i] = str[i];

return (dup);
}
