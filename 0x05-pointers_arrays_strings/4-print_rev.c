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
 * print_rev - Prints a string in reverse
 *
 * @str: pointer to a string
 */

void print_rev(char *str)
{
	int i, len;

	len = _strlen(str);
	for (i = len; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
