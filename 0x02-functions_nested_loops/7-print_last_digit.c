#include "main.h"
/**
 * print_last_digit - prints the last digit of an integer
 * @n: number of type integer
 *
 * Return: Always returns the value of @n, success
 */
int print_last_digit(int n)
{
	int m;

	if (n < 0)
	{
		m = -1 * (n % 10);
		_putchar(m + '0');
		return (m);
	}
	else
	{
		m = n % 10;
		_putchar(m + '0');
		return (m);
	}
}
