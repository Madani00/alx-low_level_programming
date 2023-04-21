#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @ac: aarg number
 * @av: args
 * Return: 0
 */

int main(int ac, char *av[])
{
	int a, b, res;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(av[1]);
	b = atoi(av[3]);
	if (!get_op_func(av[2]))
	{
		printf("Error\n");
		exit(99);
	}
	if ((*av[2] == '/' || *av[2] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = (get_op_func(av[2]))(a, b);
	printf("%i\n", res);
	return (0);
}
