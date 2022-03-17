#include "main.h"

/**
 * print_most_numbers - function to print numbers for 0 - 9
 * Description: the function ommits 2 and 4
 * Return: return success
 *
 */

void print_most_numbers(void)
{
	char x = '0';

	while (x <= '9')
	{
		if (x != '2' && x != '4')
		{
			_putchar(x);
		}
		x++;
	}
	_putchar('\n');
}
