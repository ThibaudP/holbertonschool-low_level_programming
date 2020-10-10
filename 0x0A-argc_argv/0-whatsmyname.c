#include <stdio.h>

/**
 * main - Entry point,
 * prints the executable file name.
 *
 * @argc: number of args
 * @argv: array of args
 *
 * Return: Always 1
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (1);
}
