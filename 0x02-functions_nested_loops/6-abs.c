#include "main.h"
#include <stdio.h>

/**
 * _abs - computing the absolute value of an integer
 * Description: compute the absolute value of type int
 * Return: success
 * @c: is an integer input
 */

int _abs(int c)
{

	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}
