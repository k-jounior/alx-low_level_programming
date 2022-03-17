#include "main.h"

/**
 * main - print if the number is positive, zero or negative
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero or negative"
 * Return: 0
 */

void positive_or_negative(int i)
{

	srand(time(0));
	i = rand() - RAND_MAX / 2;

	if (i > 0)
	{
		printf("%i is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%i is zero\n",  i);
	}
	else if (i < 0)
	{
		printf("%i is negative\n", i);
	}
	return (0);
}

