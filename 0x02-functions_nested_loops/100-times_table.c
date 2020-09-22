#include "holberton.h"

/**
 * print_times_table - Prints all the multiplication tables
 * @n: an int
 */

void print_times_table(int n)
{
	int i = 0;
	int m, res;

	if (n < 0 || n > 15)
		return;
	while (i <= n)
	{
		m = 0;
		while (m <= n)
		{
			res = m * i;
			if (m != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (res >= 100)
			{
				_putchar((res / 100) + '0');
				_putchar(((res / 10) % 10) + '0');
				_putchar((res % 10) + '0');
			}
			else if (res < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((res % 10) + '0');
			}
			else if (res >= 10 && res < 100)
			{
				_putchar(' ');
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else if (m == 0)
			{
				_putchar((res % 10) + '0');
			}
			m++;
		}
		_putchar('\n');
		i++;
	}
}
