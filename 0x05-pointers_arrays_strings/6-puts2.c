#include "main.h"

/**
 * puts2 - printing every character of a string
 * @str: String value to test
 * Return nothing
 */

void puts2(char *str)
{
	int i;
	char c;

	for (c = 0; str(c) != 0; c++)
	{
		if (i % 2 == 0)
		{
			l = str[i];
			_putchar(str[c]);
		}
	}
	_putchar('\n');
}
