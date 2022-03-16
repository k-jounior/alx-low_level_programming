#include "main.h"

/**
 * print_last_digit - printing the last digit of a number
 * @i: an integer input
 * Description: using print_last_digit function to print the last digit number
 * Return: return success
 */

int print_last_digit(int i)
{
	int n;

	if (i < 0)
	{
		n = -1 * (i % 10);
	}
	else
		n = i % 10;
	_putchar((n % 10) + '0');
	return (n % 10);
}

