#include "holberton.h"

/**
 * _pow_recursion - returns x ^ y
 *
 * @x: number to raise
 * @y: power to raise x to
 *
 * Return: the result
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, (y - 1)));
}
