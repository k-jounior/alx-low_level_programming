#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main functions prints all single digit numbers of base 10
 *
 * Description: using the main function 
 * the program prints all single digit numbers of base 10 starting from 0 
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
