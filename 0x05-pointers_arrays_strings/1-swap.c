#include "main.h"

/**
 * swap_int - function to swap two integers
 * @a: first integer to swap
 * @b: second integer to swap
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
