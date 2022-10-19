#include "main.h"
/**
 * print_alphabet - Entry point to print the letters in lower case.
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
