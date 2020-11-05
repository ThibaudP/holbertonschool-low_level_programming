#include "holberton.h"

/**
 * get_bit - finds the value of the bit at index
 *
 * @n: an unsigned long
 * @index: the index of asked bit
 *
 * Return: value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	size_t len = sizeof(unsigned long int) * 8;
	int bit = 0;

	if (index > len)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
