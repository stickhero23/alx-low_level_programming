#include <stdargs.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function to find sum of parameters
 * @n: first required variable, 0.
 * Return: returns 0 or sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list st;
	unsigned int i, sum;

	sum = 0;

	if (n == 0)
		return (0);
	va_start(st, n);
	for (i = 0; i < n; i++)
		sum += va_arg(st, int);

	va_end(st);

	return (sum);
}
