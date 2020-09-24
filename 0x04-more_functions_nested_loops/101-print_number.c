#include "holberton.h"

/**
 * print_number - prints a number
 * @n: an int to be printed
 */

void print_number(int n)
{
	unsigned int nb = n;

	if (n < 0)
	{
		_putchar('-');
		nb = -n;
	}

	if (nb / 10)
		print_number(nb / 10);

	_putchar((nb % 10) + '0');
}
