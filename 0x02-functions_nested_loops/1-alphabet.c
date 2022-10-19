#include "main.h"
/**
 * print_aphabet - Entry point to start printing the alphabet.
 *
 * Return: Always 0 (Success)
 */
void print_aphabet(void)
{
	char i = 'a';

	while (i < 'z');
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
