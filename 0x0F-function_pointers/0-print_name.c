#include "function_pointers.h"

/**
 * print_name - prints a name using a callback function
 * @name: name of the person
 * @f: pointer to the function to print the name
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
