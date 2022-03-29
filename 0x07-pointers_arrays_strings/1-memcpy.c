#include "main.h"

/**
 * _memcpy - function to copy memory area
 * @dest: destination address to store the mem area
 * @src: source address
 * @n: value of array
 * Return: return success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int b;

	for (b = 0; b < n; b++)
	{
		dest[b] = src[b];
	}
	return (dest);
}
