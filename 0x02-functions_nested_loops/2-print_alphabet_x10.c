#include "main.h"

/**
 * main - using main function to print alphabet 10 times
 *
 * Description: the main function prints alphabets 10 times
 * Return: return success
 */

void print_aphabet_x10(void)
{
	char m;
	int n;

	for (m = 'a'; m <= 'z'; m++)
	{
		while (n <= 10)
		{
			_putchar(m);
		}
	}
	_putchar('\n');
}
