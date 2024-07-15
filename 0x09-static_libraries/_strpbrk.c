#include <stddef.h>
#include "main.h"
#include <stddef.h>

char *_strpbrk(char *s, char *accept)
{
  char *ptr;

  while (*s)
    {
      for (ptr = accept; *ptr; ptr++)
	{
	  if (*s == *ptr)
	    return (s);
	}
      s++;
    }
  return (NULL);
}
