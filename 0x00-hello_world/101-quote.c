#include <stdio.h>
#include <unistd.h>

/**
 *
 * 101-quote.c - Prints a string to stderr
 *
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
