#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - Entry point, adds the two numbers passed as argv
 *
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0 if successful, 1 if Error
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}


	printf("%i\n", sum);
	return (0);
}
