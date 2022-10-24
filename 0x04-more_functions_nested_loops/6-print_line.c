#include "main.h"
/**
 * print_line - Entry point to print a line on the terminal
 * @n: int type number
 * Return: Always 0, Success.
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			_putchar(95);
			n--;
		}
	}
	_putchar('\n');
}
