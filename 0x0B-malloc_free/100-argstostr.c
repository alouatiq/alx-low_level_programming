#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: The array of arguments.
 *
 * Return: A pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
  char *str;
  int i, j, k = 0, length = 0;

  if (ac == 0 || av == NULL)
    return (NULL);

  for (i = 0; i < ac; i++)
    {
      for (j = 0; av[i][j] != '\0'; j++)
	length++;
      length++;
    }

  str = (char *)malloc((length + 1) * sizeof(char));
  if (str == NULL)
    return (NULL);

  for (i = 0; i < ac; i++)
    {
      for (j = 0; av[i][j] != '\0'; j++)
	str[k++] = av[i][j];
      str[k++] = '\n';
    }
  str[k] = '\0';

  return (str);
}
