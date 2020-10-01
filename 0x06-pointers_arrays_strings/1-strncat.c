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
 * _strncat - Concatenates 2 strings up to n bytes
 *
 * @dest: 2nd string & result
 * @src: 1st string
 * @n: number of bytes from *str to be copied
 *
 * Return: dest (the concatenated string)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, m = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i + m] = src[i];

	dest[i + m] = '\0';

	return (dest);
}
