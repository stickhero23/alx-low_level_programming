#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - print anything
 * @format: a list of types of arguments.
 * Retun: Always 0, success.
 */
void print_all(const char * const format, ...)
{
	char *separator = "";
	int i, j = 0;
	va_list all;

	check_datatype dt[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
	va_start(all, format);

	while (format != NULL && format(j) != '\0')
	{
		i = 0;
		while (dt[i].letter != '\0')
		{
			if (choice[i].letter == format[j])
			{
				printf("%s", separator);
				dt[i].func(all);
				separator = ", ";
			}
			i++;
		}
		j++;
	}
	va_end(all);
	printf("\n");
}
/**
 * print_char - prints char
 * @all: va list
 */
void print_char(va_list all)
{
	printf("%d", va_arg(all, int));
}
/**
 * print_int - prints integers
 * @all: va list
 */
void print_int(va_list all)
{
	printf("%d", va_arg(all, int));
}
/**
 * print_float - prints float
 * @all: va list
 */
void print_float(va_list all)
{
	printf("%f", va_arg(all, double));
}
/**
 * print_string - prints string
 * @all: va list
 */
void print_string(va_list all)
{
	char *s;
	s = va_arg(all, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

