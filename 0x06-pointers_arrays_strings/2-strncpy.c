#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination address
 * @src: source address
 * @n: number of spaces to copy
 * Return: the value of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
