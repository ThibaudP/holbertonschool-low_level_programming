#include <stdio.h>

/**
 * main - Entry point,
 * prints the executable file name.
 *
 * @argc: number of args
 * @argv: array of args
 *
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
