#include "main.h"
#include <string.h>

/**
 * puts2 - printing every character of a string
 * @str: String value to test
 * Return nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
