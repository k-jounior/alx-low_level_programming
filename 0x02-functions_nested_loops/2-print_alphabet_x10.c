#include "main.h"

/**
 * print_alphabet_x10 - using function to print alphabet 10 times
 *
 * Description: print_alphabet_x10 function prints alphabets 10 times
 * Return: return success
 */

void print_alphabet_x10(void)
{
	char m;
	int n;

	for (n = 0; n <= 9; n++)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
}
