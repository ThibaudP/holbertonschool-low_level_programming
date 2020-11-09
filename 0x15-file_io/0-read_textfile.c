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
	int len;
	int sta;

	if (letters > 0)
		buf = malloc(sizeof(char) * letters);
	else
		return (0);


	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (!fd)
		return (0);

	len = read(fd, buf, letters);
	if (len < 0)
		return (0);

	sta = write(1, buf, len);

	free(buf);

	if (sta == -1)
		return (0);

	return (sta);
}
