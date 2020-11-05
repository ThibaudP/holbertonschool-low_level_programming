#include "holberton.h"

/**
 * flip_bits - returns the number of different bits between 2 numbers
 *
 * @n: first unsigned long
 * @m: second unsigned long
 *
 * Return: the number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	unsigned int count = 0;

	diff = n ^ m;

	while (diff > 0)
	{
		if (diff & 1)
			count++;
		diff = diff >> 1;
	}

	return (count);
}
