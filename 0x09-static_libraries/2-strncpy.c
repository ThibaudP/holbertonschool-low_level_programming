#include "holberton.h"

/**
 * _strncpy - Copies a string up to n bytes
 *
 * @dest: 2nd string & result
 * @src: 1st string
 * @n: number of bytes from *str to be copied
 *
 * Return: dest (the result copied string)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
