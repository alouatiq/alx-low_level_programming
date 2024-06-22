#include <stdio.h>

/**
 * main - Entry point, prints the alphabet in lowercase excluding 'q' and 'e'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
/* Check if the current letter is not 'e' or 'q' */
if (letter != 'e' && letter != 'q')
{
putchar(letter); /* Print the current letter */
	}
letter++;
}

putchar('\n'); /* Print a new line after the alphabets */

return (0);
}
