#include <stdio.h>
#include <string.h>
#include "holberton.h"

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
