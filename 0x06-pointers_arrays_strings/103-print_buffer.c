#include <stdio.h>
#include "holberton.h"

/**
 * is_printable - Checks if char is printable
 *
 * @c: the char to be checked
 *
 * Return: 1 if printable, 0 if not
 */

int is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}


/**
 * print_bline - Prints a line of the buffer
 *
 * @b: buffer to be printed
 * @size: number of bytes of the buffer to be printed
 * @byte: starting byte of the line
 */

void print_bline(char *b, int size, int byte)
{
	int i, j;

	printf("%08x: ", byte);

	for (i = 0; i < 10; i++)
	{
		if (i + byte < size)
			printf("%02x", b[byte + i]);
		else
			printf("  ");

		if (i % 2 != 0)
			printf(" ");
	}

	for (i = 0; i < 10; i++)
	{
		if (i + byte < size)
		{
			if (is_printable(b[byte + i]))
				printf("%c", b[byte + i]);
			else
				printf(".");
		}
		else
			printf(" ");
	}

	printf("\n");
}




/**
 * print_buffer - Prints the buffer
 *
 * @b: buffer to be printed
 * @size: number of bytes of the buffer to be printed
 */

void print_buffer(char *b, int size)
{
	int i = 0;
	
	for (i = 0; i < size; i += 10)
	{
		print_bline(b, size, i);
	}
}
