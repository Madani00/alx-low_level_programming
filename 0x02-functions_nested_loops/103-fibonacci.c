#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * Return: 0 (success)
 */

int main(void)
{
	int sum = 0, x = 0, y = 1, next = 0;

	while (next < 4000000)
	{
		next = x + y;
		x = y;
		y = next;
		if (next % 2 == 0)
		{
			sum = sum + next;
		}
	}
	printf("%d\n", sum);
	return (0);
}
