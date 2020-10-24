#include "variadic_functions.h"

/**
 * print_strings - print strings separated by a given char
 *
 * @separator: string to use as separator
 * @n: number of integers
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *buff;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (i != 0)
			printf("%s", (separator != NULL) ? separator : "");
		buff = va_arg(list, char *);

		printf("%s", (buff != NULL) ? buff : "(nil)");
	}
	va_end(list);

	printf("\n");
}
