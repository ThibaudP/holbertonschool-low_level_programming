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
	return ((n >= 0) ? (n) : (-n));
}
