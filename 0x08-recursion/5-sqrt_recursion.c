#include "main.h"

/**
 * _sqrt_recursion - prints the square root of a number
 * @n: integer input
 * Return: success
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);

	int i = 1, result = 1;

	while (result <= n)
	{
		i++;
		result = i * i;
	}
	return (i - 1);
}
