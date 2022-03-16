#include "main.h"

/**
 * print_sign - the function prints the signs
 *
 * Description: using the print_sign of numbers
 * @n - is the integer that is used in our function
 * Return: return 1, 0 or -1
 *
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+1');
		return (1);
	}
}
