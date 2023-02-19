#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - determine if number is positive or negative
 *
 * Description: program will assign a random number to the variable n each time
 * it is executed.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, l;



	l = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf(" the last digit of %d is %d and is greater than 5\n", n, l);
	else if (n == 0)
		printf(" the last digit of %d is %d and is 0\n", n, l);
	else
		printf(" the last digit of %d is %d and is less than 6 and not 0\n", n, l);
	return (0);
}
