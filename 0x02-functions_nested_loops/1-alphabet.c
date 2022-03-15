#include "main.h"

/**
 * main - printing alphabets
 *
 * Description: using main function to print alphabets
 * the program prints alphabet in lowercase
 * Return: return success
 */

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
