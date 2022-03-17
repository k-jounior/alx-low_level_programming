#include "main.h"

/**
 * _isupper - printing uppercase characters
 * @c: character input
 * Description: using isupper to find uppercase characters
 * Return: 1 when upper otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
}
