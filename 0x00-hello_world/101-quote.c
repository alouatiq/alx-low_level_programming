#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints a specific string to the standard error.
 *
 * Return: Always 1 (Error) to comply with the requirements.
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
