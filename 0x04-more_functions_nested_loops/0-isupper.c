#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 * _isupper - Checks if a char is uppercase
 * @c: a char
 *
 * Return: 1 if c is uppercase, 0 if not
 */

int _isupper(int c)
{
	return ((c >= 'A' && c <= 'Z') ? (1) : (0));
}
