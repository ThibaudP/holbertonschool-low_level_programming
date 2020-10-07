#include "holberton.h"

/**
 * wildcmp - checks if both strings match, accounting for wildcards
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if strings are identical, 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
		if (*s1 == '\0')
			return (wildcmp(s1, s2 + 1));
		else if (*(s1 + 1) != '\0')
			return (0);
	}

	return (0);
}
