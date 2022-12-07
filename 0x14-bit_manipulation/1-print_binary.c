#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation.
 * @n: unsigned int
 * Return: binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int m = n;
	unsigned long int mask = 1;
	int len = 0;

	while (m > 0)
	{
		len++;
		m >>= 1;
	}
	len -= 1;

	if (len > 0)
		mas = mask << len;
	while (mask > 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1;
	}

}
