#include "main.h"

/**
 * _pow_recursion - funtion to return x raised to y
 * @x: integer input
 * @y: power factor
 * Return: success
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return(1);
	else
		return (x * _pow_recursion(x, y - 1));
}
