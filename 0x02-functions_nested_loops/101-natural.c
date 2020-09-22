#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int i, tot;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			tot = tot + i;
		}
	}
	printf("%i\n", tot);
	return (0);
}
