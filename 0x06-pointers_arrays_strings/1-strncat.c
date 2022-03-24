#include "main.h"

/**
 * _strncat - writing a function that concatenates two strings
 * _strncat: using the function to concatenate strings
 * @dest: destination for the final string
 * @src: the address of the source string
 * @n: integer of the string to test
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int i;

	while (dest[x] != '\0')
	{
		x++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[x] = src[i];
		i++;
	}
	return (dest);
}
