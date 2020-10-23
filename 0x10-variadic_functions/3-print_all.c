#include "variadic_functions.h"

/**
 * print_char - prints a char
 *
 * @c: a char
 */

void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_int - prints an int
 *
 * @i: an int
 */

void print_int(va_list i)
{
	printf("%i", va_arg(i, int));
}

/**
 * print_float - prints a float
 *
 * @f: a float
 */

void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_string - prints a string
 *
 * @str: a string
 */

void print_string(va_list str)
{
	char *arg = va_arg(str, char*);
	
	if (arg == NULL)
		arg = "(nil)";

	printf("%s", arg);
}

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
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	char *sep = "";

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

				specs[j].func(list);
			}
		j++;
		}
	i++;
	}

	va_end(list);

	printf("\n");
}
