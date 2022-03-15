#include <stdio.h>
#include <stdlib.h>

/**
 * main - printing _putchar
 *
 * Description: using main function
 * Return: return success
 */

int main(void)
{
	char a[] = {'_','p','u','t','c','h','a','r'};
        unsigned int b;

	for (b = 0; b < sizeof(a); b++)
	{
		putchar(a[b]);
	}
	putchar('\n');
	return (0);
}
