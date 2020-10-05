#include "holberton.h"

/**
 * _strchr - finds the first occurence of c in *s.
 *
 * @s: string to be searched
 * @c: char to look for
 *
 * Return: a pointer to the char
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	while (s[i++])
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
