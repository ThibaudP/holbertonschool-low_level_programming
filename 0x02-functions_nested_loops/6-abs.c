#include <stdio.h>
#include "holberton.h"

/**
 * _abs  - Computes the absolute value of an int.
 * @n: an int
 *
 * Return: the absolute value of n
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * (-1));
	}
}
