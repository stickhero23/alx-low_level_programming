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
	va_list all_types;

	check_datatype dt[] = { {'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL} };
	va_start(all_types, format);

	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (dt[i].letter != '\0')
		{
			if (dt[i].letter == format[j])
			{
				printf("%s", separator);
				dt[i].func(all_types);
				separator = ", ";
			}
			i++;
		}
		j++;
	}
	va_end(all_types);
	printf("\n");
}
/**
 * print_char - prints char
 * @all: va list
 */
void print_char(va_list all_types)
{
	printf("%c", va_arg(all_types, int));
}
/**
 * print_int - prints integers
 * @all: va list
 */
void print_int(va_list all_types)
{
	printf("%d", va_arg(all_types, int));
}
/**
 * print_float - prints float
 * @all: va list
 */
void print_float(va_list all_types)
{
	printf("%f", va_arg(all_types, double));
}
/**
 * print_string - prints string
 * @all: va list
 */
void print_string(va_list all_types)
{
	char *s;

	s = va_arg(all_types, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

