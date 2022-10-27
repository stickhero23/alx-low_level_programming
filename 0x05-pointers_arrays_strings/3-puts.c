#include "main.h"
/**
 * _puts - prints a string followed by stdout.
 *@str: pointer of type char
 *Return: Always 0, Success.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
