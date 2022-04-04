#include "main.h"
/**
 * create_array - function creates an array
 * @size: size of the array
 * @c: characters in the array
 * Return: Returns Null if size is 0.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	i = 0;

	if (size == 0)
	{
		return ('\0');
	}
	else
	{
		array = malloc(sizeof(char) * size);
		if (array = '\0')
		{
			return ('\0');
		}
		else
		{
			while (i < size)
			{
				array[i] = c;
				i++;
			}
		}
		return (array);
	}
}
