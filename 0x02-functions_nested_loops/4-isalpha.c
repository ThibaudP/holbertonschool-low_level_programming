#include <stdio.h>
#include "holberton.h"

/**
 * _isalpha - Checks if a char is a letter
 * @c: A char
 *
 * Return: 1 if c is lowercase, 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
