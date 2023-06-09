#include "main.h"
#include <stdio.h>

/**
 * strlen_recursion - calculate the string length.
 * @s: string
 *
 * Return: length of the string
 */

int strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (strlen_recursion(s + 1) + 1);
}

/**
 * is_palindrome - palindrome
 * @s: string
 *
 * Return: 1 if true or 0.
 */

int is_palindrome(char *s)
{
	int len;

	len = strlen_recursion(s);
	if (len == 0)
		return (1);
	return (cm_drome(s, 0, len));
}

/**
 * cm_drome -  compare characters
 * @s: string
 * @a: iteractor
 * @len: string length
 *
 * Return: 1 or 0.
 */

int cm_drome(char *s, int a, int len)
{
	if (*(s + a) != *(s + len - a - 1))
		return (0);
	if (a >= len)
		return (1);
	return (cm_drome(s, a  + 1, len));
}

