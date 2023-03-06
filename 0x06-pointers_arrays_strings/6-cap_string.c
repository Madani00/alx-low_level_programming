#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitalize first letter of each word
 * @str: string to manipulate
 * Return: string
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
	if (i == 0 || isspace(str[i - 1]))
	{
		str[i] = toupper(str[i]);
	}
		i++;
	}
	return (str);
}
