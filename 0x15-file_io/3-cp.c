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
			dprintf(STDERR_FILENO, "Usage: file_from file_to\n");
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error, Can't write to %s\n", av[2]);
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
	int fd_fr = 0, fd_to = 0, clo_sta = 0;
	ssize_t wr_sta = 0, rd_len = 0;

	if (ac != 3)
		exit_error(97, av, 0);

	fd_fr = open(av[1], O_RDONLY);
	if (fd_fr != -1)
	{
		fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
		if (fd_to != -1)
		{
			while ((rd_len = read(fd_fr, buf, 1024)) > 0)
			{
				wr_sta = write(fd_to, buf, rd_len);
				if (wr_sta == -1)
					exit_error(99, av, 0);
			}
			clo_sta = close(fd_to);
			if (clo_sta == -1)
				exit_error(100, av, fd_to);
		}
		else
			exit_error(98, av, 0);
		clo_sta = close(fd_fr);
		if (clo_sta == -1)
			exit_error(100, av, fd_fr);
	}

	return (0);
}
