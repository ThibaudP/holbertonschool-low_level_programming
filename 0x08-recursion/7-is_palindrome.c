#include "holberton.h"

/**
 * _strlen_recursion - returns length of a string
 *
 * @s: string to be measured
 *
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}


/**
 * palindrome_test - checks if *s is a palindrome
 *
 * @s: string to check
 * @i: first index
 * @j: last index
 *
 * Return: 1 if palindrome, 0 if not
 */

int palindrome_test(char *s, int i, int j)
{
	if ((i == j || i == (j - 1)) && s[i] == s[j])
		return (1);
	if (s[i] == s[j])
		return (palindrome_test(s, (i + 1), (j - 1)));
	return (0);
}

/**
 * is_palindrome- checks if s is a palindrome
 *
 * @s: a string
 *
 * Return: 1 if palindrome, 0 if no palindrome
 */

int is_palindrome(char *s)
{
	int i = 0;
	int j = _strlen_recursion(s);
	
	if (j == 0)
		return (1);

	return (palindrome_test(s, i, (j - 1)));
}
