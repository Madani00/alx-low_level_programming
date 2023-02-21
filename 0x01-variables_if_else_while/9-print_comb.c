#include <stdio.h>

/**
 *main - print 0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
