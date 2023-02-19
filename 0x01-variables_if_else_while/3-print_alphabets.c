#include <stdio.h>

/**
 *main - print lowercase a-z and then in uppercase
 *Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	char alpha1 = 'A';

	while (alpha1 <= 'Z')
	{
		putchar(alpha1);
		alpha1++;
	}
	putchar('\n');

	return (0);
}

