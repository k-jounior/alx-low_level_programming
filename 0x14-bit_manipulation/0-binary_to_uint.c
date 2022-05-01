#include "main.h"

/**
 * binary_to_uint - converts binary value to unsigned int
 * @b: pointer to a string of characters
 * Return: retruns the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	unsigned int power = 0;
	int count = 0;

	if (!b)
		return (0);
	/* Get length of string */
	while (b[count] != '\0')
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);
		count++;
	}
	count -= 1;
	while (count >= 0)
	{
		if (b[count] == '1')
			value += _pow_recursion(2, power);
		power++;
		count--;
	}
	return (value);
}
