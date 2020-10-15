#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

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

	if (s == NULL)
		return (0);

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * _strdup - Duplicates a string
 *
 * @str: string to be duplicated
 *
 * Return: a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	unsigned int i, len;
	char *dup;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < (len + 1); i++)
		dup[i] = str[i];

	return (dup);
}


/**
 * string_nconcat - Concatenates 2 strings with s2 up to n
 *
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of s2 to copy
 *
 * Return: a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j, len2 = _strlen(s2);
	char *res;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n > len2)
		n = len2;

	res = malloc(sizeof(char) * (_strlen(s1) + n + 1));
	if (res == NULL)
		return (NULL);

	if (s1 != NULL && s2 != NULL)
	{
		for (i = 0; s1[i]; i++)
			res[i] = s1[i];

		for (j = 0; j < n; j++)
		{
			res[i] = s2[j];
			i++;
		}
	}
	res[i] = '\0';

	return (res);
}
