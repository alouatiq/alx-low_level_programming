#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    char *ptr;

    while (*s)
    {
        for (ptr = accept; *ptr; ptr++)
        {
            if (*s == *ptr)
            {
                count++;
                break;
            }
        }
        if (*ptr == '\0')
            break;
        s++;
    }
    return (count);
}
