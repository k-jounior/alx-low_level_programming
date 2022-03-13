#include <stdio.h>
#include <stdlib.h>

/**
 * main - printing alphabets without 'e' and 'q'
 *
 * Description: using the main function
 * the program prints alphabets without e and q
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
