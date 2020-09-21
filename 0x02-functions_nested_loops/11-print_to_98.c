#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - Prints every int from n to 98
 * @n: starting int
 *
 * Return: Always 0
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ",n);
			n++;
		}
		printf("98\n");
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ",n);
			n--;
		}
		printf("98\n");
	}
	else
	{
		printf("98\n");
	}
}
