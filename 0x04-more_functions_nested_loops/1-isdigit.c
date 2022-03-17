#include "main.h"

/**
 * _isdigit - checking for a digit
 * @c: integer input
 * Description: using _isdigit to check for digit 0 through 9
 * Return: returns 1 if is a digit and 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
