#include "main.h"

/**
 * _strspn - returns number of bytes
 * @s: for the count action
 * @accept: parameter for char
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	i = 0;

	while (s[i] != '\0')
	{
		k = 0;
		for (j = 0; accept[j] != '\0'; j++;)
		{
			if (s[i] == accept[j])
				k = 1;
		}
		j = 0;
		if (k == 0)
			break;
		i++;
	}
	return (i);
}
