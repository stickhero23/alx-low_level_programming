#include "main.h"
/**
 * print_alphabet_x10 - Entry point to print the letters in lower case,
 * ten times.
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 10)
	{
		ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}

		_putchar('\n');
		i++;
	}
}
