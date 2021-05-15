#include <stdio.h>
#include "holberton.h"

/**
 * _strstr - Searches a string for a substring,
 * returns pointer to first char of substring.
 *
 * @haystack: string to be searched
 * @needle: substring to look for
 *
 * Return: pointer to substring if match, NULL if no match
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0, len = 0;

	while (needle[len])
		len++;

	while (haystack[i])
	{
		while ((haystack[i] == needle[0]) && needle[j])
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (j < len)
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
