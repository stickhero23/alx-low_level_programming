#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
void print_char(va_list all_types);
void print_string(va_list all_types);
void print_int(va_list all_types);
void print_float(va_list all_types);

/**
 * struct choosetype - struct
 * @letter: data type representation
 * @func: function pointer
 */
typedef struct choosetype
{
	char letter;
	void (*func)();
} check_datatype;
#endif
