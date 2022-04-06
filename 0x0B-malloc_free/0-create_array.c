#include "main.h"
/**
 * create_array - function creates an array
 * @size: size of the array
 * @c: characters in the array
 * Return: Returns Null if size is 0.
 */

char *create_array(unsigned int size, char c)
{
	char *par;
	unsigned int i;

	par = malloc(sizeof(c) * size);

	if (!size || !par)
		return (NULL);
	for (i = 0; i < size; i++)
		par[i] = c;
	return (par);
}
