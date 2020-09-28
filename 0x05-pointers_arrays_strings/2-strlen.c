#include <stdio.h>
#include "holberton.h"

/**
 * _strlen  - Returns the length of a string s
 *
 * @s: pointer to a string
 */

int _strlen(char *s)
{
	int len;

	while (*s++)
		len++;
	
	return (len);
}
