#include "main.h"
/**
 * puts_half - prints half of a string or the value
 * @str: pointer of type char
 * Return: Always 0, Success.
 */
void puts_half(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
		;
	for (n /= 2; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
