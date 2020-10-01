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
 * string_toupper - Changes all lowercase chars to uppercase
 *
 * @s: a string
 *
 * Return: the string in uppercase.
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (_islower(s[i]))
			s[i] -= 32;
		i++;
	}

	return (s);
}
