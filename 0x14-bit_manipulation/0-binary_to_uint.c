#include "holberton.h"

/**
 * _strlen  - Returns the length of a string s
 *
 * @s: pointer to a string
 *
 * Return: the length of string s
 */

int _strlen(const char *s)
{
	int len = 0;

	if (s == NULL)
		return (0);

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * binary_to_uint - converts a binary string to an uint
 *
 * @b: the binary number in string form
 *
 * Return: an unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	unsigned int pow = 1;
	int i;

	if (b)
	{
		for (i = (_strlen(b) - 1); i >= 0; i--)
		{
			if (b[i] != '0' && b[i] != '1')
				return (0);

			if (b[i] == '1')
				dec += pow;

			pow *= 2;

		}
	}

	return (dec);
}
