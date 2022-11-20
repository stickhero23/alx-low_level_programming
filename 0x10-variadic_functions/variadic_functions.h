#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct choosetype - struct
 * @letter: data type representation
 * @func: function pointer 
 */
typedef struct choosetype
{
	char letter;
	void (*func)(all);
}check_datatype;
#endif
