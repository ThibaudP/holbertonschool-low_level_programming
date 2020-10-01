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
 * _issepchar - Checks if a char is a separator char
 * @c: a char
 *
 * Return: 1 if c is a sep char, 0 if not
 */

int issepchar(char c)
{
	int i = 0, j = 0;
	char *sep = " ,;.!?\"(){}\t\n";

	while (sep[i])
	{
		if (c == sep[i])
		{
			j = 1;
			break;
		}
		i++;
	}

	return (j);
}

/**
 * cap_string - Capitalizes all words
 *
 * @s: a string
 *
 * Return: the string in uppercase.
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (issepchar(s[i - 1]) && _islower(s[i]))
			s[i] -= 32;
		i++;
	}

	return (s);
}
