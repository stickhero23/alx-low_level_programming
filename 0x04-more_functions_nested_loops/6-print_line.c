#include "main.h"
/**
 * print_line - Entry point to print a line on the terminal
 * @n: int type number
 * Return: Always 0, Success.
 */

void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		_putchar(95);
	}

	_putchar('\n');
}
