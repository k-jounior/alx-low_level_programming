#include "main.h"

/**
 * _isalpha - checking alphabetic characters
 *
 * Description: using _isalpha to check alphabetic characters
 * @c - is the int that will be used by the function
 * Return: returns 1 otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
