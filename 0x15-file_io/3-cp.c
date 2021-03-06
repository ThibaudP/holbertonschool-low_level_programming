#include "holberton.h"

/**
 * exit_error - Exits with a specific error code
 *
 * @code: error code to return
 * @av: args passed from cp
 * @fd: current opened fd
 */

void exit_error(int code, char **av, int fd)
{
	switch (code)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			break;
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			break;
	}
	exit(code);
}

/**
 * main - Entry point
 *
 * @ac: number of args
 * @av: value of args
 *
 * Return: 1 if success, -1 if failure
 */

int main(int ac, char **av)
{
	char buf[1024];
	int fd_fr, fd_to;
	ssize_t wr_sta, rd_len;

	if (ac != 3)
		exit_error(97, av, 0);

	fd_fr = open(av[1], O_RDONLY);
	if (fd_fr == -1)
		exit_error(98, av, 0);

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		exit_error(99, av, 0);

	while ((rd_len = read(fd_fr, buf, 1024)) != 0)
	{
		if (rd_len == -1)
			exit_error(98, av, 0);

		wr_sta = write(fd_to, buf, rd_len);

		if (wr_sta == -1 || wr_sta != rd_len)
			exit_error(99, av, 0);
	}

	if (close(fd_to) == -1)
		exit_error(100, av, fd_to);

	if (close(fd_fr) == -1)
		exit_error(100, av, fd_fr);

	return (0);
}
