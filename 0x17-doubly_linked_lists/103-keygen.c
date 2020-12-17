#include <stdio.h>
#include <stdlib.h>

/**
 * main - keygen for crackme5... or not
 *
 * @argc: number of args to main
 * @argv: args to main
 *
 * Return: always EXIT_SUCCESS
 */

int main(int argc, char **argv)
{
	if (argc == 2)
		puts(argv[1]);

	return (EXIT_SUCCESS);
}
