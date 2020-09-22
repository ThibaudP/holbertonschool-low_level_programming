#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 * natural - prints the sum of all the multiples of 3 and 4 under 1024 excl.
 *
 * Return: Always 0
 */

void natural(void)
{
	int i, tot;

	for (i = 0; (i < 1024); i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			tot = tot + i;
		}
	}
	printf("%d\n", tot);
}
