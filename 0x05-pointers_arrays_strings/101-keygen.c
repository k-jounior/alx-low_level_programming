#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * password for the program 101-crackme
 * Return: Always return success
 */

int main(void)
{
	int psswd[100];
	int i, sum, n;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		psswd[i] = rand() % 78;
		sum += (psswd[i] + '0');
		putchar(psswd[i] + '0');

		if ((2772 - sum) - '0' < 78);
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
