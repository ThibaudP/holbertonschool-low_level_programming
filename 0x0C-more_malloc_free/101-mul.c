#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _puts - Prints a string 
 *
 * @s: string to print
 */

void _puts(char *s)
{
	while (*s)
		_putchar(*s++);
	_putchar('\n');
}

/**
 * exit98 - Exits with status code 98
 */

void exit98(void)
{
	_puts("Error");
	exit(98);
}

/**
 * _isnumber - Checks if a string is a number
 *
 * @s: a string
 *
 * Return: length if number is valid, exit if not
 */

int _isnumber(char *s)
{
	int i;

	if (s == NULL)
		exit98();

	while(s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
			i++;
		else
			exit98();
	}

	return (i);
}

/**
 * main - Entry point. Multiplies 2 nums and prints the result
 *
 * @argc: number of arguments
 * @argv: value of arguments
 *
 * Return: 0 if success.
 */

int main(int argc, char **argv)
{
	if (argc != 3 || !_isnumber(argv[1]) || !_isnumber(argv[2]))
	{
		exit98();
	}

	return (0);
}
