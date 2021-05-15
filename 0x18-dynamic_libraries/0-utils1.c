#include "holberton.h"

int _putchar(char c)
{
	(void)c;
	return (0);
}

int _islower(int c)
{
	(void)c;
	return (0);
}

int _isalpha(int c)
{
	(void)c;
	return (0);
}

int _abs(int n)
{
	(void)n;
	return (0);
}

int _isupper(int c)
{
	(void)c;
	return (0);
}

int _isdigit(int c)
{
	(void)c;
	return (0);
}

int _strlen(char *s)
{
	int len = 0;

	if (s == NULL)
		return (0);

	while (s[len] != '\0')
		len++;

	return (len);
}

void _puts(char *s)
{
	(void)s;
}

char *_strcpy(char *dest, char *src)
{
	(void)dest;
	return (src);
}

int _atoi(char *s)
{
	(void)s;
	return (0);
}

char *_strcat(char *dest, char *src)
{
	(void)dest;
	return (src);
}

char *_strncat(char *dest, char *src, int n)
{
	(void)dest;
	(void)n;
	return (src);
}

char *_strncpy(char *dest, char *src, int n)
{
	(void)dest;
	(void)n;
	return (src);
}

int _strcmp(char *s1, char *s2)
{
	(void)s1;
	(void)s2;
	return (0);
}

char *_memset(char *s, char b, unsigned int n)
{
	(void)b;
	(void)n;
	return (s);
}

char *_memcpy(char *dest, char *src, unsigned int n)
{
	(void)dest;
	(void)n;
	return (src);
}

char *_strchr(char *s, char c)
{
	(void)c;
	return (s);
}

unsigned int _strspn(char *s, char *accept)
{
	(void)s;
	(void)accept;
	return (0);
}

char *_strpbrk(char *s, char *accept)
{
	(void)s;
	return (accept);
}

char *_strstr(char *haystack, char *needle)
{
	(void)haystack;
	return (needle);
}
