#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation.
 * @n: unsigned int
 * Return: binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int m;
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (m = n, i = 0; (m >>= 1) > 0; i++)
		;
	for (; i >= 0; i--)
	{
		if ((n >> i) & 1)
			_putchar('1');
		else
			_putchar('0');
	}

}
