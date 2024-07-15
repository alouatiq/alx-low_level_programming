#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: A pointer to the newly allocated space in memory
 *  containing s1 followed by s2, and null terminated, or
 *  NULL if it fails.
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
unsigned int i, j, length1 = 0, length2 = 0;

if (s1 != NULL)
while (s1[length1] != '\0')
length1++;
if (s2 != NULL)
while (s2[length2] != '\0')
length2++;

concat = (char *)malloc((length1 + length2 + 1) * sizeof(char));
if (concat == NULL)
return (NULL);

for (i = 0; i < length1; i++)
concat[i] = s1[i];
for (j = 0; j < length2; j++)
concat[i + j] = s2[j];
concat[i + j] = '\0';
return (concat);
}
