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
 * puts_half - prints the 2nd half of a string
 *
 * @str: a string
 */

void puts_half(char *str)
{
	int i, len, hlf;

	len = _strlen(str);
	if (len % 2 != 0)
		hlf = (len - 1) / 2;
	else
		hlf = len / 2;

	for (i = hlf; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
