#include "holberton.h"

/**
 * _strpbrk - Searches a string for a set of bytes,
 * returns pointer to first matching byte.
 *
 * @s: string to be searched
 * @accept: string of accepted chars to match
 *
 * Return: a pointer to the first match
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);
}
