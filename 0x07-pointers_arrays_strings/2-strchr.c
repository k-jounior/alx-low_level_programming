#include "main.h"

/**
 * _strchr - function that returns the occurence of character c
 * @s: the string to search from
 * @c: parameter to return
 * Return: Always return success
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
}
