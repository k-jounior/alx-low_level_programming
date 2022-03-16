#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer input
 * Description: printing all natural numbers to 98
 * Return: success
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d");
		if (n == 98)
			continue;
		printf(",");
		}
		printf("\n");
	}
	else
	{
	for (; n >= 98; n--)
	{
	printf("%d");
if (n == 98)
continue;
printf(", ");
	}
	}
printf("\n");
}
}
