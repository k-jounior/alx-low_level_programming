#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - printing all the posible combinations of two digits
 *
 * Description: using the main function to print all possible combinations
 * the program prints 01, 02, ... 89
 * Return: always success
 */

int main(void)
{
	int ch, p;

	for (ch = '0'; ch <= '9'; ch++)
	{
		for (p = ch + 1; p <= '9'; p++)
		{
			if (p != ch)
			{
				putchar(ch);
				putchar(p);

				if (ch == '8' && p == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
