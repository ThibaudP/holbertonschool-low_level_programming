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
 * _strcat - Concatenates 2 strings 
 *
 * @dest: 2nd string & result
 * @src: 1st string
 *
 * Return: dest (the concatenated string)
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, n = _strlen(dest);

	for (i = 0; i < (n + 1) && src[i] != '\0'; i++)
		dest[i + n] = src[i];

	dest[i + n] = '\0';

	return (dest);
}
