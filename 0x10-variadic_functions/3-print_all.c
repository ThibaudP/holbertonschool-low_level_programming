#include "variadic_functions.h"

/**
 * print_char - prints a char
 *
 * @c: char to print
 */

void print_char(char c)
{
	printf("%c", c);
}

/**
 * print_int - prints an int
 *
 * @i: int to print
 */

void print_int(int i)
{
	printf("%i", i);
}

/**
 * print_float - prints a float
 *
 * @f: float to print
 */

void print_float(float f)
{
	printf("%f", f);
}


/**
 * print_string - prints a string
 *
 * @s: string to print
 */

void print_string(char *str)
{
	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
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
		{"c", "%c"},
		{"i", "%i"},
		{"f", "%f"},
		{"s", "%s"},
		{NULL, NULL}
	};
	char *sep = "";

	va_start(list, format);
	
	while (format[i])
	{
		j = 0;
		while(specs[j].spec)
		{
			if (format[i] == specs[j].spec[0])
			{
				printf("%s", sep);
				sep = ", ";
				
				printf(specs[j].pfspec, va_arg(list, void*));
			
			}
		j++;
		}
	i++;
	}

	va_end(list);

	printf("\n");
}
