#include "holberton.h"

/**
 * set_bit - sets the value of the bit at index
 *
 * @n: pointer to an unsigned long
 * @index: the index of asked bit
 *
 * Return: value of bit at index
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int len = sizeof(typeof(*n)) * 8;

	if (index > len)
		return (-1);

	*n = (*n | 1 << index);

	return (1);
}
