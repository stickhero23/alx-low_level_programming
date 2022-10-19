#include "main.h"
/**
 * print_alphabet- Entry point to print alphabet in lowercase
 * using only _putchar.
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z');
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
