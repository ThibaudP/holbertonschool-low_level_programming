#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 * _islower - Checks if a char is lowercase
 * @c: a char
 *
 * Return: 1 if c is lowercase, 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
