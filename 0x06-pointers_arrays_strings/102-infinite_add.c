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
 * revn_string - Reverses a string until n
 *
 * @str: a string
 * @n: last index to be reversed
 */

void revn_string(char *str, int n)
{
	int i, j = 0, len = (n - 1);
	char tmp;

	for (i = len; i > j; i--)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		j++;
	}
}

/**
 * infinite_add - Adds numbers as strings
 *
 * @n1: first number
 * @n2: second number
 * @r: result string
 * @size_r: size of the result array
 *
 * Return: a string
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, ret = 0, dig1, dig2, digr;
	int siz1 = _strlen(n1), siz2 = _strlen(n2);

	if (siz1 >= size_r || siz2 >= size_r)
		return (0);

	for (i = 0; i < siz1 || i < siz2; i++)
	{
		if (i >= siz1)
			dig1 = 0;
		else
			dig1 = n1[siz1 - i - 1] - '0';

		if (i >= siz2)
			dig2 = 0;
		else
			dig2 = n2[siz2 - i - 1] - '0';

		digr = (dig1 + dig2 + ret) % 10;
		ret = (dig1 + dig2 + ret) / 10;
		r[i] = digr + '0';
	}

	if (ret == 1)
	{
		if (i < size_r - 1)
			r[i++] = '1';
		else
			return (0);
	}

	for (j = i; j <= size_r; j++)
		r[j] = '\0';

	revn_string(r, i);
	return (r);
}
