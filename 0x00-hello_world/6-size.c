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

	printf("Size of a char: %lu. \n", (unsigned long)sizeof(c) "byte(s)");
	printf("Size of an int: %lu. \n", (unsigned long)sizeof(i) "byte(s)");
	printf("Size of a long int: %lu. \n", (unsigned long)sizeof(l) "byte(s)");
	printf("Size of a long long int: %lu. \n", (unsigned long)sizeof(ll) "byte(s)");
	printf("Size of a float: %lu. \n", (unsigned long)sizeof(f) "byte(s)");

	return (0);
}
