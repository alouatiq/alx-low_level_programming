#include <stdlib.h>

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
  char **words;
  int i, j, k, l, count = 0, length = 0;

  if (str == NULL || *str == '\0')
    return (NULL);

  for (i = 0; str[i]; i++)
    {
      if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
	count++;
    }

  words = (char **)malloc((count + 1) * sizeof(char *));
  if (words == NULL)
    return (NULL);

  for (i = 0, j = 0; j < count; j++)
    {
      while (str[i] == ' ')
	i++;
      for (length = 0; str[i + length] != ' ' && str[i + length]; length++);
      words[j] = (char *)malloc((length + 1) * sizeof(char));
      if (words[j] == NULL)
	{
	  for (k = 0; k < j; k++)
	    free(words[k]);
	  free(words);
	  return (NULL);
	}
      for (l = 0; l < length; l++)
	words[j][l] = str[i + l];
      words[j][l] = '\0';
      i += length;
    }
  words[j] = NULL;

  return (words);
}
