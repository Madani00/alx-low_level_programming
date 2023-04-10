#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main -  a program that adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: if Error return 1, else return 0.
 */

int main(int argc, char *argv[])
{
	int sum = 0, i;

	for (i = 1; argv[i]; ++i)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	if (argc < 2)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
