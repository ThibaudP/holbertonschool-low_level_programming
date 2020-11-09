#include "holberton.h"

/**
 * create_file - Creates a text file
 *
 * @filename: the name of the file to create
 * @text_content: content to put in the file
 *
 * Return: 1 if success, -1 if failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t	sta = 0, len = 0;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd != -1 && filename)
	{
		while (text_content && text_content[len])
			len++;

		if (len > 0)
			sta = write(fd, text_content, len);

		close(fd);

		if (sta != -1)
			return (1);
	}

	return (-1);
}
