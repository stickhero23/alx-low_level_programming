#include "main.h"
/**
 * is_prime_number - identify if a number is prime
 * @n: integer type
 * Return: returns 1 for prime number and 0 if not prime
 */
int is_prime_number(int n)
{
	int num = 3;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);

	return (is_prime(n, num));
}
/**
 * is_prime - recursively divides to skip numbers with 2 as a divisor
 * @n: number to check if it is prime.
 * @num: the divisor.
 * Return: returns 1 if prime, 0 if not
 */
int is_prime(int n, int num)
{
	if (n == num)
		return (1);
	if (n % num == 0)
		return (0);
	return (is_prime(n, num + 1));
}
