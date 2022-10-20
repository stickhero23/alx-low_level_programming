#include "main.h"

/**
 * largest_number - returns the largest number of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
		printf("%i is the largest number", a);
	}
	else if (b > a && a > c)
	{
		largest = b;
		printf("%i is the largest number", b);
	}
	else /* if (c >= a && c >= b) */
	{
		largest = c;
		printf("%i is the largest number", c);
	}

	return (largest)
}
