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
 * print_array - prints an array
 *
 * @a: an array
 * @n: number of elements to be printed
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i < _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
