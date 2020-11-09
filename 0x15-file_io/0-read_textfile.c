#include "holberton.h"

/**
 * read_textfile - Reads a text file
 *
 * @filename: the name of the file to read
 * @letters: the length of the file to read
 *
 * Return: the number of letters that will be printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t len = 0, sta = -1;

	fd = open(filename, O_RDONLY);
	if (fd != -1 && filename)
	{
		buf = malloc(sizeof(char) * letters + 1);
		if (buf)
		{
			len = read(fd, buf, letters);
			buf[len] = '\0';

			if (len != -1)
				sta = write(1, buf, len);
			free(buf);
			close(fd);

			if (sta != -1)
				return (len);
		}
	}

	return (0);
}
