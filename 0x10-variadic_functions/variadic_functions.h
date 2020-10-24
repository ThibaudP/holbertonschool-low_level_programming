#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct specs- Struct specs
 *
 * @spec: The char specifier
 * @func: The function associated
 */

typedef struct specs
{
	char *spec;
	void (*func)(va_list);
} specs_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
