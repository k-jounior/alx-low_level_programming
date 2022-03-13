#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function prints the lowercase alphabet
 *
 * Description: using the main function to print alphabet in reverse
 * the program prints lowercase alphabet in reverse
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'z' ; c >= 'a' ; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
