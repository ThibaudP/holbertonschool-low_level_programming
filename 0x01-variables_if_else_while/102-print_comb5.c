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
	int l, m, n;

	while (i < 100)
	{
		j = i / 10;
		k = i % 10;
		l = i + 1;

		while (l < 100)
		{
			m = l / 10;
			n = l % 10;
			putchar(j + '0');
			putchar(k + '0');
			putchar(' ');
			putchar(m + '0');
			putchar(n + '0');
			if (i < 99 || l < 99)
			{
				putchar(',');
				putchar(' ');
			}
			l++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
