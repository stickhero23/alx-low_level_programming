#include "main.h"
/**
 * print_last_digit - prints the last digit of an integer
 * @n: number of type integer
 *
 * Return: Always 0, success
 */
int print_last_digit(int n)
{
	int m;

	if (n < 0)
	{
		m = (n * -1) % 10;
		return (m);
	}
	else
	{
		m = n % 10;
		return (m);
	}
}
