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

	for (i = 0; i < (len + 1); i++)
		dup[i] = str[i];

	return (dup);
}

/**
 * str_concat - Concatenates 2 strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to the result string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	char *res;

	if (s1 == NULL && s2 != NULL)
		return (_strdup(s2));
	if (s2 == NULL && s1 != NULL)
		return (_strdup(s1));

	res = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	if (res == NULL)
		return (NULL);

	if (s1 != NULL && s2 != NULL)
	{
		for (i = 0; s1[i]; i++)
			res[i] = s1[i];

		for (j = 0; s2[j]; j++)
		{
			res[i] = s2[j];
			i++;
		}
	}
	res[i] = '\0';

	return (res);
}
