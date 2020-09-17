#include <stdio.h>

/**
 * main - Toto
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
