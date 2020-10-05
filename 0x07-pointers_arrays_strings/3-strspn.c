#include "holberton.h"

/**
 * _strspn - Gets the length of a prefix substring.
 *
 * @s: string to be searched
 * @accept: string of accepted chars to match
 *
 * Return: a pointer to the char
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n = 0, m = 0;
	int j;

	for (i = 0; s[i]; i++)
	{
		m = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				m++;
			}
		}
		if (m == 0)
			break;
	}
	return (n);
}
