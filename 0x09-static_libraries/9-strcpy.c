#include <stdio.h>
#include "holberton.h"

/**
 * _strcpy - copies one string to another
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the destination string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
