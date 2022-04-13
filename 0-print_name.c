#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: char pointer to a name to be printed
 * @f: pointer to the printing function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
