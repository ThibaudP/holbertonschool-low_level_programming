#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of an int
 * @n: an int
 *
 * Return: the last digit of n
 */

int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m < 0)
	{
		m = m * -1;
	}
	_putchar(m + '0');
	return (m);
}
