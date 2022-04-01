#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints its name
 * @argc: Number of arguments
 * @argv: array of arguments
 * Return: Success
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
