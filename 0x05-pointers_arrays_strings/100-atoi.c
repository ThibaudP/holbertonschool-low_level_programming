#include <stdio.h>
#include "holberton.h"

/**
 * _strlen  - Returns the length of a string s
 *
 * @s: pointer to a string
 *
 * Return: the length of string s
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * _isdigit - Checks if a char is a digit
 * @c: an int
 *
 * Return: 1 if c is a digit, 0 if not
 */

int _isdigit(int c)
{
	return ((c >= '0' && c <= '9') ? (1) : (0));
}

/**
 * _atoi - converts the first number in a string to an int
 *
 * @s: input string
 *
 * Return: an int
 */

int _atoi(char *s)
{
	int i, c = 0, len, res = 0;

	len = _strlen(s);

	for (i = 0; i < len; i++)
	{
		if (s[i] == '-')
			c++;

		if (_isdigit(s[i]))
			break;
	}

	if (c % 2 != 0)
		c = -1;
	else
		c = 1;

	while (_isdigit(s[i]))
	{
		res = (res * 10) + (c * ((s[i] - 48)));
		i++;
	}

	return (res);
}
