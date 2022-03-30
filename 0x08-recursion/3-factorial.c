#include "main.h"

/**
 * factorial - function to get the factorial of a number
 * @n: integer input
 * Return: -1 if less than 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
