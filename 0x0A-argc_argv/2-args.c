#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point, prints all arguments
 *
 * @argc: number of args
 * @argv: array of args
 *
 * Return: Always 1
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (1);
}
