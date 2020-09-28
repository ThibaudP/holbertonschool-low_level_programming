#include <stdio.h>
#include "holberton.h"

/**
 * _strlen  - Returns the length of a string s
 *
 * @s: pointer to a string
 *
 * Return: the length of string s
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * rev_string - Reverses a string
 *
 * @str: a string
 */

void rev_string(char *str)
{
	int i, j = 0, len = (_strlen(str) - 1);
	char tmp;

	for (i = len; i > j; i--)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		j++;
	}
}
