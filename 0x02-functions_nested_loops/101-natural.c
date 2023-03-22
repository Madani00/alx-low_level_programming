#include <stdio.h>

/**
 * main - main function
 * Return: always 0
 */

int main(void)
{
	int n, sum = 0;

	for (n = 3; n < 10; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sum = sum + n;
		}
	}
	printf("%d", sum);
	return (0);
}
