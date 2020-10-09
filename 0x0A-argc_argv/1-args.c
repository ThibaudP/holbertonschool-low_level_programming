#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point,
 * prints the executable file name.
 *
 * @argc: number of args
 * @argv: array of args
 *
 * Return: Always 1
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%i\n", argc - 1);
	return (1);
}
