#include <stdio.h>
#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of an int
 * @n: an int
 *
 * Return: the last digit of n
 */

int print_last_digit(int n)
{
	int last, vabs;

	if (n < 0)
	{
		vabs = n * (-1);
	}
	else
	{
		vabs = n;
	}
	last = vabs % 10;
	_putchar(last + '0');
	return (last);
}
