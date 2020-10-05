#include <stdio.h>
#include <stddef.h>
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
	unsigned int i, j;

	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			while (needle[j] && (haystack[i] == needle[0]))
			{
				if (haystack[i + j] == needle[j])
					j++;
				else
					break;
			}

			{
				i++;
				j = 0;
			}
			else
				return (haystack + i);
		}
	}
	return (0);
}
