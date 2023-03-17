#include <stdio.h>

/**
 * main - entry point
 * Description: prints all possible different combinations of three digits
 * Return: 0 (success)
 */

int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '7'; i++)
	{
		for (j = '1'; j <= '8'; j++)
		{
			for (k = '2'; k <= '9'; k++)
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if (i == '7' && j == '8' && k == '9')
					{
						continue;
					}

					putchar(',');
					putchar(' ');
				}
		}
	}
	putchar('\n');
	return (0);
}
