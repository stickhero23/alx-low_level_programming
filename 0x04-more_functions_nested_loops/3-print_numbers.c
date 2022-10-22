#include "main.h"
/**
 * print_numbers - prints numbers
 * return: Always 0, success.
 */
void print_numbers(void)
{
	int c = 48;

	while (c <= 57)
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
