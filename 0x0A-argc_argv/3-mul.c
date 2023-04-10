#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, k;

	i = atoi(argv[1]);
	k = atoi(argv[2]);

	if (argc == 0)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", i * k);
	}
	return (0);
}
