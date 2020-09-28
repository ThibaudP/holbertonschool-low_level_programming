#include <stdio.h>
#include "holberton.h"

/**
 * _strlen - Returns the length of a string s
 *
 * @s: pointer to a string
 *
 * Return: the length of string s
 */

int _strlen(char *s)
{
	int len;

	while (*s++)
		len++;
	return (len);
}


/**
 * _puts - Prints a string to stdout
 *
 * @str: pointer to a string
 */

void _puts(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		_putchar(*str[i]);
	}
}
