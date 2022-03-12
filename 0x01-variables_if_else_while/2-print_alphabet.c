#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabet in lower case
 *
 * Description: using the main function
 * this program prints alphabets in lower case
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a', ch <= 'z', ch++)
	{
		putchar(ch);
	}
	return (0);
}
