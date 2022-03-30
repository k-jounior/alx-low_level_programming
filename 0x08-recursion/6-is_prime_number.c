#include "main.h"

/**
 * is_prime_number - prints all prime numbers
 * @n: input integer to test
 * Return: success
 */

int is_prime_number(int n)
{
	int i = 0;

	for (i = 2; i <= n / 2; i++)
	{
		if (n % i != 0)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
