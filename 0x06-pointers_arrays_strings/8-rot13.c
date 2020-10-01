#include "holberton.h"

/**
 * rot13 - encodes string with the ROT13 cipher
 *
 * @s: a string
 *
 * Return: the string encoded (or decoded!) w/ ROT13
 */

char *rot13(char *s)
{
	int i = 0, j;
	char *src = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *dst = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i])
	{
		j = 0;
		while (src[j])
		{
			if (s[i] == src[j])
			{
				s[i] = dst[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (s);
}
