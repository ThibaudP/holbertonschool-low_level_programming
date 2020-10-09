#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - Entry point, counts the coins needed to reach sum 
 *
 * @argc: number of args
 * @argv: array of args
 *
 * Return: Always 1
 */

int main(int argc, char **argv)
{
	int i, sum, nb = 0, tot = 0;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
		
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (1);
	}

	sum = atoi(argv[1]);

	for (i = 0; coins[i]; i++)
	{
		nb = sum / coins[i];
		if (nb > 0)
			sum %= (nb * coins[i]);
		tot += nb;
	}

	printf("%i\n", tot);
	return (1);
}
