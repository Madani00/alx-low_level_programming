#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int ll;
	float f;

	printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(ll));
	printf("Size of a float: %d byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
