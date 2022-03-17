#include "main.h"

/**
 * print_diagonal - this function draws a diagonal line on terminal
 * @n: input character
 * Description: using print_diagonal function
 * Return: returns success
 */

void print_diagonal(int n)
{
	char a = '0';
	char b = '0';

	if (n > 0)
	{
		while (a < n)
		{
			while (b < a)
			{
				_putchar(' ');
				b++;
			}
			a++;
			b = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
