#include "main.h"

/**
 * more_numbers - printing more numbers
 * Decription: printing numbers form 0-14 to 10 times
 * Return: returns success
 */

void more_numbers(void)
{
	int x, y;

	while (x <= 14)
	{
		for (y = 0; y <= 9; y++)
		{
			_putchar(y);
		}
	}
	_putchar('\n');
}
