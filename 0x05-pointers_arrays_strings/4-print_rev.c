#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: pointer of type char
 * Return: Always 0, success
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (i--; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
