#include "main.h"

/**
 * rev_string - reversing a string
 * @s: pointer to the string input
 * Description: writing a function that prints a string in reverse
 * Return: nothing
 */

void rev_string(char *s)
{
	int c, r;
	char ch;

	for (c = '\0'; s[c] != 0; c++)
	{
	}
	r = 0;
	for (c = c - 1; r < c; r++)
	{
		ch = s[c];
		s[c] = s[r];
		s[r] = ch;
		c--;
	}
}
