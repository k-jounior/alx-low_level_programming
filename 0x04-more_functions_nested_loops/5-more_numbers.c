#include "main.h"

/**
 * more_numbers - printing more numbers
 * Decription: printing numbers form 0-14 to 10 times
 * Return: returns success
 */

void more_numbers(void)
{
	int x = 0;
	int y = 0;

	while (x <= 9)
	{
		while (y <= 14)
		{
			if (y > 9)
				_putchar(y / 10 + '0');
			_putchar(y % 10 + '0');
			y++;
		}
		_putchar('\n');
		x++;
		y = 0;
	}
}
