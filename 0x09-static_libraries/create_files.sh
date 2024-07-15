#!/bin/bash

# Create main.h
cat << EOL > main.h

#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

#endif /* MAIN_H */
EOL

# Create _putchar.c
cat <<EOL > _putchar.c
#include "main.h"
#include <unistd.h>

int _putchar(char c)
{
    return write(1, &c, 1);
}
EOL

# Create _islower.c
cat <<EOL > _islower.c
#include "main.h"

int _islower(int c)
{
    return (c >= 'a' && c <= 'z');
}
EOL

# Create _isalpha.c
cat <<EOL > _isalpha.c
#include "main.h"

int _isalpha(int c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
EOL

# Create _abs.c
cat <<EOL > _abs.c
#include "main.h"

int _abs(int n)
{
    if (n >= 0)
        return (n);
    else
        return (-n);
}
EOL

# Create _isupper.c
cat <<EOL > _isupper.c
#include "main.h"

int _isupper(int c)
{
    return (c >= 'A' && c <= 'Z');
}
EOL

# Create _isdigit.c
cat <<EOL > _isdigit.c
#include "main.h"

int _isdigit(int c)
{
    return (c >= '0' && c <= '9');
}
EOL

# Create _strlen.c
cat <<EOL > _strlen.c
#include "main.h"

int _strlen(char *s)
{
    int len = 0;

    while (*s++)
        len++;
    return (len);
}
EOL

# Create _puts.c
cat <<EOL > _puts.c
#include "main.h"

void _puts(char *s)
{
    while (*s)
        _putchar(*s++);
    _putchar('\n');
}
EOL

# Create _strcpy.c
cat <<EOL > _strcpy.c
#include "main.h"

char *_strcpy(char *dest, char *src)
{
    char *ptr = dest;

    while (*src)
        *dest++ = *src++;
    *dest = '\0';
    return (ptr);
}
EOL

# Create _atoi.c
cat <<EOL > _atoi.c
#include "main.h"

int _atoi(char *s)
{
    int sign = 1;
    unsigned int num = 0;

    while (*s && (*s < '0' || *s > '9'))
    {
        if (*s == '-')
            sign *= -1;
        s++;
    }
    while (*s && (*s >= '0' && *s <= '9'))
    {
        num = num * 10 + (*s - '0');
        s++;
    }
    return (num * sign);
}
EOL

# Create _strcat.c
cat <<EOL > _strcat.c
#include "main.h"

char *_strcat(char *dest, char *src)
{
    char *ptr = dest;

    while (*dest)
        dest++;
    while (*src)
        *dest++ = *src++;
    *dest = '\0';
    return (ptr);
}
EOL

# Create _strncat.c
cat <<EOL > _strncat.c
#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
    char *ptr = dest;

    while (*dest)
        dest++;
    while (n-- && *src)
        *dest++ = *src++;
    *dest = '\0';
    return (ptr);
}
EOL

# Create _strncpy.c
cat <<EOL > _strncpy.c
#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
    char *ptr = dest;

    while (n-- && *src)
        *dest++ = *src++;
    while (n-- > 0)
        *dest++ = '\0';
    return (ptr);
}
EOL

# Create _strcmp.c
cat <<EOL > _strcmp.c
#include "main.h"

int _strcmp(char *s1, char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
EOL

# Create _memset.c
cat <<EOL > _memset.c
#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
    char *ptr = s;

    while (n--)
        *s++ = b;
    return (ptr);
}
EOL

# Create _memcpy.c
cat <<EOL > _memcpy.c
#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
    char *ptr = dest;

    while (n--)
        *dest++ = *src++;
    return (ptr);
}
EOL

# Create _strchr.c
cat <<EOL > _strchr.c
#include "main.h"

char *_strchr(char *s, char c)
{
    while (*s)
    {
        if (*s == c)
            return (s);
        s++;
    }
    return (c == '\0' ? s : NULL);
}
EOL

# Create _strspn.c
cat <<EOL > _strspn.c
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
EOL

# Create _strpbrk.c
cat <<EOL > _strpbrk.c
#include "main.h"

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
EOL

# Create _strstr.c
cat <<EOL > _strstr.c
#include "main.h"

char *_strstr(char *haystack, char *needle)
{
    char *h, *n;

    while (*haystack)
    {
        h = haystack;
        n = needle;
        while (*h && *n && (*h == *n))
        {
            h++;
            n++;
        }
        if (!*n)
            return (haystack);
        haystack++;
    }
    return (NULL);
}
EOL

echo "All files created successfully."
``
