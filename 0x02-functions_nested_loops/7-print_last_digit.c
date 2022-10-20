#include "main.h"
/**
 * print_last_digit - prints the last digit of an integer
 * @n: number of type integer
 *
 * Return: Always returns the value of @n, success
 */
int print_last_digit(int n)
{
	if (n < 0)

		n *= -1;
		_putchar('0' + (n % 10));
		return (n % 10);
}
