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
 * _pow - Returns n to the power exp
 *
 * @n: the number
 * @exp: the power
 *
 * Return: n ^ exp
 */

int _pow(int n, int exp)
{
	int i, res = n;

	for (i = 1; i < exp; i++)
	{
		res *= n;
	}
	if (exp == 0)
		res = 1;
	return (res);
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
	int i, j, res = 0, len = 0;
	char *beg;
	char *sta;

	for (i = 0; i < _strlen(s); i++)
	{
		if (_isdigit(s[i]))
		{
			beg = &s[i];
			break;
		}
	}

	while (_isdigit(s[i]))
	{
		len++;
		i++;
	}
	for (j = 0; j < len; j++)
	{
		res = res + ((*(beg + j) - 48) * _pow(10,len - (j + 1)));
	}

	if (beg != s && *(beg - 1) == '-')
		res = -res;

	return (res);
}
