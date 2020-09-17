#include <stdio.h>

/**
 * main - Toto
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int i = 0;
	char a = 'a';

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
