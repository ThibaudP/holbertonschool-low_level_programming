#include "holberton.h"

/**
 * print_triangle - Draws a triangle of height "size"
 * @size: an int, height of the triangle
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (k = (size - i); k > 0; k--)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
