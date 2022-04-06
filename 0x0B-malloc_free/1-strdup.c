#include "main.h"

/**
 * _strdup - function to return a pointer to a newly allocated string
 * @str: string to return
 * Return: returns a string to a new line
 */

char *_strdup(char *str)
{
	char *pdup;
	int i;
	int len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	pdup = malloc(sizeof(char) * (len + 1));

	if (pdup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		pdup[i] = str[i];
	pdup[len] = '\0';

	return (pdup);
}
