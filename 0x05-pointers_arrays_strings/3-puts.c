#include <stdio.h>
#include "holberton.h"

/**
 * _puts - Prints a string to stdout
 *
 * @str: pointer to a string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
