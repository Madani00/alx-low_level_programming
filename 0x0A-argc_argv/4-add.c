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

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
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
	}
	return (0);
}
