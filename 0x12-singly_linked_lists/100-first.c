#include <stdio.h>

void bf_main(void) __attribute__((constructor));
/**
 * bf_main - execute before the main function.
 *
 * Return: void
 */

void bf_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
