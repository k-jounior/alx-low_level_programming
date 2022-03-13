#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function prints all the numbers of base 16
 *
 * Description: using the main function
 * the program prints all the numbers of base 16 in lowercase
 * Return: 0
 */

int main(void)
{
	char ch;
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
	}
	for (ch = 'a' ; ch <= 'f' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

