#include "holberton.h"

/**
 * print_times_table - Prints all the multiplication tables
 * @n: an int
 */

void print_times_table(int n)
{
	int i, m, res;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (m = 0; m <= n; m++)
			{
				res = m * i;
				if (m != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (res < 10 && m != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((res % 10) + '0');
				}
				else if (res >= 10 && res < 100)
				{
					_putchar (' ');
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
				}
				else if (res >= 100)
				{
					_putchar((res / 100) + '0');
					_putchar(((res / 10) % 10) + '0');
					_putchar((res % 10) + '0');
				}
				else
				{
					_putchar((res % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
