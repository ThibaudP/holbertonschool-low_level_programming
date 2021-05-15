#include <stdio.h>
#include "holberton.h"

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
