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

	for (i = 0; i < len + 1; i++)
		dup[i] = str[i];

	return (dup);
}
