#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer input
 * Description: printing all natural numbers to 98
 * Return: success
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			print("%d");
		if (n == 98)
			continue;
		_putchar(",");
		}
		_putchar("\n");
	}
	else
	{
	for (; n >= 98; n--)
	{
	_putchar("%d");
if (n == 98)
continue;
_putchar(", ");
	}
	}
	_putchar("\n");
}
}
