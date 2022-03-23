#include "main.h"

/**
 * puts2 - printing every character of a string
 * @str: String value to test
 * Return nothing
 */

void puts2(char *str)
{
	int i, ch;

	ch = 0;

	while (str[ch] != '\0')
	{
		ch++;
	}
	for (i = 0; i < ch; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
