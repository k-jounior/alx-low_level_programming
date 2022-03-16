#include "main.h"

/**
 * _islower - prints lowercase characters
 *
 * Descripion: _islower prints lowercase characters
 * Return: 1 if c is lower
 * Return: 0 if not lower
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
