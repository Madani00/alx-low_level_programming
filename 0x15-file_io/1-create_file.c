#include "main.h"
#include <stdio.h>

/**
 * create_file - This function creates a file
 * @filename: The name of the file to create
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure,
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t bb_write;
	int fd;
	int len = 0;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1 || filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (*(text_content + len) != '\0')
			len++;
		bb_write = write(fd, text_content, len);
		if (bb_write == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
