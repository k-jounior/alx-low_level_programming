#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the main function prints all possible combinations
 *
 * Description: using the main function to print all possible combinations.
 * the program prints all possible combinations of single-digit numbers
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		if (ch != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
