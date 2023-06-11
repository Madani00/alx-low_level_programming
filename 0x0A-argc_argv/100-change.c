#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * @argc: int
 * @argv: vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n;
	int coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (coins = 0; n > 0; coins++)
	{
		if (n >= 25)
		{
			n -= 25;
		}
		else if (n >= 10)
		{
			n -= 10;
		}
		else if (n >= 5)
		{
			n -= 5;
		}
		else if (n >= 2)
		{
			n -= 2;
		}
		else
		{
			n -= 1;
		}
	}
	printf("%d\n", coins);
	return (0);
}
