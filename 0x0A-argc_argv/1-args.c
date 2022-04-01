#include "main.h"
#include <stdio.h>

/**
 * main - funtion to print the number of arguments
 * @argc: number of arguments
 * @argv: the array of arguments
 * Return: 0 is success
 */

int main(int argc, char *argv[] _attribute_((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
