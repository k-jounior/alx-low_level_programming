#include "main.h"

/**
 * reverse_array - reversing an array
 * @a: an array of integers
 * @n: number of elements in the array
 * Return: reversed array
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	n = n - 1;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
