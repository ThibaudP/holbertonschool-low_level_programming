#include "holberton.h"
#include <stdio.h>

/**
 * print_line - Draws a straight line of length n with "_"
 * @n: int, length of the line.
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < (n + 1); i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
