#include "holberton.h"

/**
 * _sqrt_test - checks if x is the square root of y
 *
 * @x: possible square root
 * @y: number to check against
 *
 * Return: -1 if fail, square root of y if success
 */

int _sqrt_test(int x, int y)
{
	if (x * x > y)
		return (-1);
	if (x * x == y)
		return (x);
	return (_sqrt_test((x + 1), y));
}

/**
 * _sqrt_recursion - prints the square root of n
 *
 * @n: an int
 *
 * Return: the sqrt of n
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (0);
	return (_sqrt_test(1, n));
}
