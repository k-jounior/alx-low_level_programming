#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible combinations of three digits
 *
 * Description: using the main function to print all the possible combinations 
 * of three digits
 * the program prints all the possible combinations of three digits
 * Return: always return success
 */

int main(void)
{
	char a, b, c;

	for (a = '0'; a <= 9; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{
			for (c = b + 1; c <= '9'; c++)
				if ((b !=a)!=c)
				{
					putchar(a);
					putchar(b);
					putchar(c);

					if (a == '7' && b == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
		}
	}
	putchar('\n');

	return (0);
}
