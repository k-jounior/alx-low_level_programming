#include "main.h"

/**
 * main - using main function to print alphabet 10 times
 *
 * Description: the main function prints alphabets 10 times
 * Return: return success
 */

void print_alphabet_x10(void)
{
	char m;
	int n;

	for (n = 0; n <= 10; n++)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
	}
	_putchar('\n');
}
