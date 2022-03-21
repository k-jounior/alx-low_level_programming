#include "main.h"

/**
 * _puts - using _puts to print a string
 * @str: input string
 * Return: 0
 */

void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != 0; c++)
	{
		printf(str[c]);
	}
	printf('\n');
}
