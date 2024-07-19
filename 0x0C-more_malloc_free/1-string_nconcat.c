#include <stdlib.h>
#include <string.h>
#include "main.h"

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
  char *new_str;
  unsigned int len1 = s1 ? strlen(s1) : 0;
  unsigned int len2 = s2 ? strlen(s2) : 0;
  unsigned int len_to_copy = n < len2 ? n : len2;

  new_str = malloc(len1 + len_to_copy + 1);
  if (new_str == NULL)
    return NULL;

  if (s1)
    strcpy(new_str, s1);
  if (s2)
    strncat(new_str, s2, len_to_copy);
  new_str[len1 + len_to_copy] = '\0';

  return new_str;
}
