#include "main.h"
/**
 * print_alphabet - Entry point to start printing the alphabet.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z');
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
