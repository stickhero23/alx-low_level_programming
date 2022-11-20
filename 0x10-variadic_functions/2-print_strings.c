#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - prints the string
 * @separator: delimiter
 * @n: number of strings passed.
 * Return: Always 0, success.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	unsigned int i;
	char *s;

	if (n > 0)
	{
		va_start(strs, n);
		for (i = 1; i <= n; i++)
		{
			s = va_arg(strs, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(strs);
	}
	printf("\n");
}
