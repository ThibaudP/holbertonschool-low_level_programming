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
	unsigned int i, j;
	char *res;

	while (1)
	{
		res = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2)));
		if (res == NULL)
			return ("Error!");
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
