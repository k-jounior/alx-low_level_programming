#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function prints all single digit numbers
 *
 * Description: using the main function
 * the program prints all single digit numbers for 0 - 9
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%i", n);
	}
	printf("\n");
	return (0);
}
