#include <stdio.h>

/**
 * main - print 0123456789abcdef
 *
 * Description: a program that prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	for (int i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (char c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}

	return (0);
}
