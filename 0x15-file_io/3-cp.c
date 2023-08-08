#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * @ac: number of arguments
 * @av: array of pointers to arguments
 *
 * Return: always 0
 */

int main(int ac, char *av[])
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(av[1], av[2]);

	return (0);
}

/**
 * copy_file - copies content from one file to another.
 * @src: the file to copy from
 * @dest: destination
 */

void copy_file(const char *src, const char *dest)
{
	char buffer[1024];
	int from, to;
	ssize_t w, r;

	from = open(src, O_RDONLY);
	r = read(from, buffer, sizeof(buffer));
	if (r == -1 || from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", src);
		exit(98);
	}	
	to = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	w = write(to, buffer, r);
	if (w == -1 || to == -1)
	{	
		dprintf(2, "Error: Can't write to %s\n", dest);
		exit(99);
	}
	if (close(from) == -1)
	{
		dprintf(2, "Error: Can't close fd FD_VALUE %d\n", from);
		exit(100);
	}
	if (close(to) == -1)
	{
		dprintf(2, "Error: Can't close fd FD_VALUE %d\n", to);
		exit(100);
	}	
}
