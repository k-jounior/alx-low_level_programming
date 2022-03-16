#include "main.h"

/**
 * _islower - prints lowercase characters
 *
 * Descripion: _islower prints lowercase characters
 * Return: 1 if lower otherwise 0
 * @c - is the int that will be used as an argument of the function
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
