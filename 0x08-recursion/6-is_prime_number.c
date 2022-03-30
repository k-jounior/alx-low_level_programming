#include "main.h"

/**
 * is_prime_number - prints all prime numbers
 * @n: input integer to test
 * Return: success
 */

int is_prime_number(int n)
{
	int i;

	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
}
