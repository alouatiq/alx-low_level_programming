#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * is_digit - checks if a string contains only digits
 * @str: the string to check
 * Return: 1 if all digits, 0 otherwise
 */
int is_digit(char *str)
{
  while (*str)
    {
      if (!isdigit(*str))
	return 0;
      str++;
    }
  return 1;
}

/**
 * _strlen - calculates the length of a string
 * @str: the string
 * Return: the length of the string
 */
int _strlen(char *str)
{
  int len = 0;
  while (str[len])
    len++;
  return len;
}

/**
 * print_error - prints an error message and exits with status 98
 */
void print_error(void)
{
  printf("Error\n");
  exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: the number of arguments
 * @argv: the arguments
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
  char *num1, *num2;
  int len1, len2, i, j, carry, n1, n2, *result;

  if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
    print_error();

  num1 = argv[1];
  num2 = argv[2];
  len1 = _strlen(num1);
  len2 = _strlen(num2);

  result = calloc(len1 + len2, sizeof(int));
  if (result == NULL)
    return 98;

  for (i = len1 - 1; i >= 0; i--)
    {
      carry = 0;
      n1 = num1[i] - '0';
      for (j = len2 - 1; j >= 0; j--)
	{
	  n2 = num2[j] - '0';
	  carry += result[i + j + 1] + (n1 * n2);
	  result[i + j + 1] = carry % 10;
	  carry /= 10;
	}
      result[i + j + 1] += carry;
    }

  i = 0;
  while (i < len1 + len2 && result[i] == 0)
    i++;

  if (i == len1 + len2)
    putchar('0');
  else
    while (i < len1 + len2)
      putchar(result[i++] + '0');

  putchar('\n');
  free(result);
  return 0;
}
