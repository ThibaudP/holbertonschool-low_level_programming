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
	int j, k;

	while (i < 100)
	{
		j = i / 10;
		k = i % 10;
		putchar(j + '0');
		putchar(k + '0');
		if (i < 99)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
