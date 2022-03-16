#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Description: the function prints the times table starting with 0
 * Return: return success
 */

void times_table(void)
{
	int i, j;

	if (n > 0 && n <= 9)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
				putformat(i * j);
			_putchar('\n');
		}
	}
}
