#include "main.h"

/**
 * _isupper - printing uppercase characters
 * @c: character input
 * Description: using isupper to find uppercase characters
 * Return: 1 when upper otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
