#include "holberton.h"

/**
 * _strcmp - Compares 2 strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: the sum of errors
 */

int _strcmp(char *s1, char *s2)
{

	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
