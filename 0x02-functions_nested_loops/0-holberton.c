#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char c[] = "Holberton\n";
	unsigned int i = 0;
	/* int len = strlen(c); */

	while (i < strlen(c))
	{
		_putchar(c[i]);
		i++;
	}
	return (0);
}
