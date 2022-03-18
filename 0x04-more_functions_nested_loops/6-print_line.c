#include "main.h"

/**
 * print_line - printing a straigt line
 * @n: integer input
 * Description: printing a straight line
 * Return: return success
 */

void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a <= n)
		{
			_putchar(95);
			a++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
