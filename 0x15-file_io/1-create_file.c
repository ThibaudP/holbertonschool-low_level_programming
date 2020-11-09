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
	int fd, sta, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0700);
	if (!fd)
		return (-1);

	while (text_content[len])
		len++;

	if (len != 0)
		sta = write(fd, text_content, len);

	if (sta == -1)
		return (-1);

	return (1);
}
