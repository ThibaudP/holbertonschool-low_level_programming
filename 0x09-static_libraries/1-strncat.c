#include "holberton.h"

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
