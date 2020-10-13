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
 * str_concat - Concatenates 2 strings 
 *
 * @s1: first string
 * @s2: second string
 * 
 * Return: a pointer to the result string 
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len1 = _strlen(s1), len2 = _strlen(s2);
	char *res;

	if (s1 == NULL)
		len1 = 0;
	if (s2 == NULL)
		len2 = 0;
	
	while (1)
	{
		res = malloc(sizeof(char) * (len1 + len2));
		if (res == NULL)
			return (NULL);
		break;
	}

	for (i = 0; s1[i]; i++)
		res[i] = s1[i];

	for (j = 0; s2[j]; j++)
	{
		res[i] = s2[j];
		i++;
	}

	return (res);
}
