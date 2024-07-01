#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to the string to be converted.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;
char *str = s;

while (*str != '\0')
{
if (*str == '-')
{
sign *= -1;
}
else if (*str >= '0' && *str <= '9')
{
num = (num * 10) + (*str - '0');
}
else if (num > 0)
{
break;
}
str++;
}
return (num * sign);
}
