#include "main.h"

/**
 * print_numbers - printing numbers from 0 to 9
 * Description: using print_number function to print the numbers from 0-9
 * Return: always return success
 *
 */

void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
