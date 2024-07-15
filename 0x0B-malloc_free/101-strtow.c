#include <stdlib.h>
#include <stdio.h>

/**
 * count_words - Helper function to count the number of words in a string
 * @str: The string to evaluate
 * Return: Number of words
 */
int count_words(char *str)
{
int flag = 0, count = 0;

while (*str)
{
if (*str == ' ')
{
flag = 0;
}
else if (flag == 0)
{
flag = 1;
count++;
}
str++;
}

return count;
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: Pointer to an array of strings (words)
 */
char **strtow(char *str)
{
char **words, *tmp;
int i, k = 0, len = 0, words_count, c = 0, start, end;

if (str == NULL || *str == '\0')
return NULL;

while (*(str + len))
len++;
words_count = count_words(str);
if (words_count == 0)
return NULL;

words = (char **) malloc((words_count + 1) * sizeof(char *));
if (words == NULL)
return NULL;

for (i = 0; i <= len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (c)
{
end = i;
tmp = (char *) malloc((c + 1) * sizeof(char));
if (tmp == NULL)
return NULL;
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
words[k++] = tmp - c;
c = 0;
}
}
else if (c++ == 0)
start = i;
}
words[k] = NULL;

return words;
}
