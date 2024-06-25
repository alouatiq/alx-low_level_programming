#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times in lowercase
 *
 * Description: This function prints the alphabet in lowercase,
 * followed by a new line, 10 times. It utilizes the _putchar
 * function to print characters.
 */
void print_alphabet_x10(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
int i, j;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 26; j++)
{
_putchar(alphabet[j]);
}
_putchar('\n');
}
}
