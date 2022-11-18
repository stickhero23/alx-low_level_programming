#include <stdlib>
/**
 * print_name - to execute the function as a parameter
 * @name: the paramenter for the function pointer
 * @f: function to execute
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
