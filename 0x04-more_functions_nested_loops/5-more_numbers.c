#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14.
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int i, cha;

	for (i = 0; i < 10; i++)
	{
		for (cha = 0; cha < 15; cha++)
		{
			if (cha >= 10)
				_putchar((cha / 10) + '0');
			_putchar((cha % 10) + '0');
		}
		_putchar('\n');
	}
}
