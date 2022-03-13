#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabets in lower and upper case
 *
 * Description: using the main function
 * the program prints alphates in upper case and lower case
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a' && 'A' ; ch <= 'z' && 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
