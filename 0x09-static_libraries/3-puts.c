#include <stdio.h>
#include "holberton.h"

/**
 * _puts - Prints a string to stdout
 *
 * @str: pointer to a string
 */

void _puts(char *str)
{
	int i, len;

	len = _strlen(str);
	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
