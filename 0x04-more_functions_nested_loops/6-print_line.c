#include "main.h"
/**
 * print_line - Entry point to print a line on the terminal
 * @n: int type number
 * Return: Always 0, Success.
 */

void print_line(int n)
{
	int n;

	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
	}
	_putchar('\n');
}
