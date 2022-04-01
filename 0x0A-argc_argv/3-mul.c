#include "main.h"

/**
 * main - function to multiply two numbers
 * @argc: number of arguments
 * @argv: array of input arguments
 * Return: Success
 */

int main(int argc, char *argv[])
{
	int prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prod);
	}
	return (0);
}
