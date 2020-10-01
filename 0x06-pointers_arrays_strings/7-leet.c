#include "holberton.h"

/**
 * leet - translates string to leetspeak
 *
 * @s: a string
 *
 * Return: the string in leet
 */

char *leet(char *s)
{
	int i = 0, j;
	char *src = "aeotlAEOTL";
	char *dest = "4307143071";

	while (s[i])
	{
		j = 0;
		while (src[j])
		{
			if (s[i] == src[j])
			{
				s[i] = dest[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (s);
}
