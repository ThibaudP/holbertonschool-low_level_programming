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
	unsigned int i;
	char *dup;

	if (str == NULL)
		return (NULL);

	while (1)
	{
		dup = malloc(sizeof(char) * _strlen(str));
		if (dup == NULL)
			return (NULL);
		break;
	}

	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	return (dup);
}
