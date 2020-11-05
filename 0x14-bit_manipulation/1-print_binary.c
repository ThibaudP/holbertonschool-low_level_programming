#include "holberton.h"

/**
 * print_binary_rec - prints a binary number recursively
 *
 * @n: the number to print
 */

void print_binary_rec(unsigned long int n)
{
	if (n != 0)
	{
		print_binary_rec(n >> 1);
		_putchar ((n & 1) ? '1' : '0');
	}
}


/**
 * print_binary - print a binary number
 *
 * @n: the number to print
 */

void print_binary(unsigned long int n)
{
	if (n != 0)
		print_binary_rec(n);
	else
		_putchar('0');

}
