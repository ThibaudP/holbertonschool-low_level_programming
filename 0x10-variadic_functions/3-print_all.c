#include "variadic_functions.h"

/**
 * print_all - mini printf - prints all the strings
 *
 * @format: format constant
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, j = 0;
	specs_t specs[] = {
		{"c", "%c"},
		{"i", "%i"},
		{"f", "%f"},
		{"s", "%s"},
		{NULL, NULL}
	};
	char *sep = "";
	void *arg;

	va_start(list, format);

	while (format && format[i])
	{
		j = 0;
		while (specs[j].spec)
		{
			if (format[i] == specs[j].spec[0])
			{
				printf("%s", sep);
				sep = ", ";

				arg = va_arg(list, void*);

				if (format[i] == 's' && arg == NULL)
					arg = "(nil)";
				printf(specs[j].pfspec, arg);
			}
		j++;
		}
	i++;
	}

	va_end(list);

	printf("\n");
}
