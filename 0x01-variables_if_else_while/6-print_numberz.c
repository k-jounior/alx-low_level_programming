#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function prints single digit numbers
 *
 * Description: using main function to print single digit numbers of base 10
 * the program prints single digit numbers from 0 to 9
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
