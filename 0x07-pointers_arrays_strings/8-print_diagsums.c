#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - Prints the sum of the diagonals
 *
 * @a: the matrix of ints
 * @size: the size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size * i) + i];

	}

	for (j = 1; j <= size; j++)
	{
		sum2 += a[(size * j) - j];
	}

	printf("%i, %i\n", sum1, sum2);
}
