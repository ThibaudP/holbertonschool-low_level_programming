#include <stdio.h>
#include "holberton.h"

/**
 * set_string - Sets the value of a pointer to a char
 *
 * @s: a pointer to a string
 * @to: a string
 */

void set_string(char **s, char *to)
{
	*s = to;
}
