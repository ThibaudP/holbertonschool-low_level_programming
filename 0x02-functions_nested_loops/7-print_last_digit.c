#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of an int
 * @n: an int
 *
 * Return: the last digit of n
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	_putchar((n % 10) + '0');
	return (n % 10);
}
