#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *o;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	o = argv[2];
	b = atoi(argv[3]);

	if (get_op_func(o) == NULL || o[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*o == '/' && b == 0) ||
	    (*o == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(o)(a, b));

	return (0);
}
