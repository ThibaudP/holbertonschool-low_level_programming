#include "holberton.h"

/**
 * _islower - Checks if a char is lowercase
 * @c: a char
 *
 * Return: 1 if c is lowercase, 0 if not
 */

int _islower(int c)
{
	return ((c >= 'a' && c <= 'z') ? (1) : (0));
}

/**
 * leet - translates string to leetspeak
 *
 * @s: a string
 *
 * Return: the string in leet
 */

char *leet(char *s)
{
	int i = 0, j = 0;
	char *src = "aeotlAEOTL";
	char *dest = "4307143071";

	while (s[i])
	{
		j = 0;
		while (src[j])
		{
			if (s[i] == src[j])
				s[i] = dest[j];
			j++;
		}
		i++;
	}

	return (s);
}
