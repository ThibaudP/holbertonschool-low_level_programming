#include "holberton.h"

/**
 * get_endianness - checks if numbers are stored as little or big endian
 *
 * Return: 1 if big endian, 0 if little endian
 */

int get_endianness(void)
{
	int i = 1;
	char *c = (char *)&i;

	if (*c != 0)
		return (1);
	else
		return (0);
}
