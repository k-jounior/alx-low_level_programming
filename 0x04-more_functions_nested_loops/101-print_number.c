#include "main.h"

/**
 * print_number - printing an integer
 * @n: integer input
 * Return: return success
 */

void print_number(int n)
{
	while (n >= 48 && n <= 57)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
	return (0);
}
