#include "holberton.h"

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

	for (i = 0; i <= n && src[i] != '\0'; i++)
		dest[i + n] = src[i];

	dest[i + n] = '\0';

	return (dest);
}
