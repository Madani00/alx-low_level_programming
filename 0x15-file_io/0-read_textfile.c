#include "main.h"
#include <stdio.h>

/**
 * read_textfile - read a text file and print it to the POSIX standard output.
 * @filename: name of the file
 * @letters: number of letters
 *
 * Return:  number of letters or NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	ssize_t bread, bwrite;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	bread = read(fd, buf, letters);
	bwrite = write(STDOUT_FILENO, buf, bread);

	close(fd);
	return (bwrite);
}
