#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - Entry point, multiplies the two numbers passed as argv
 *
 * @argc: number of args
 * @argv: array of args
 *
 * Return: Always 1
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (1);
}
