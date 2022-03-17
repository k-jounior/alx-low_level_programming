#include "main.h"

/**
 * print_square - printing the square
 * @size: the input character
 * Description: using the print_square function
 * Return: return success
 */

void print_square(int size)
{
	char m = '0';
	char n = '0';

	if (size > 0)
	{
		while (m < size)
		{
			while (n < size)
			{
				_putchar('#');
				n++;
			}
			n = 0;
			m++;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

