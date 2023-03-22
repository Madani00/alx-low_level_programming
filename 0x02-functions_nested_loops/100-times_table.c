#include "main.h"
/**
 * print_times_table -  prints the n times table, starting with 0
 * @n: parameter for an argument to be passed
 * Return: void
 */
void print_times_table(int n)
{
	int row, column, product;

	if (n >= 0 && n <= 14)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				product = (row * column);
				if (column == 0)
				{
					_putchar('0' + product);
				} else if (product <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + product);
				} else if (product > 9 && product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (product / 10));
					_putchar('0' + (product % 10));
				} else if (product > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((product / 100) + '0');
					_putchar(((product / 10) % 10) + '0');
					_putchar((product % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
