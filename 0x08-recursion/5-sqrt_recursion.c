#include "main.h"
/**
 * _sqrt_recursion - find root of a number
 * @n: integer type
 * Return: returns the root or -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (square_root(n, 0));
}
/**
 * square_root - find the root of n starting with 0.
 * @n: n, number to find root for.
 * @root: the root of n to test.
 * Return: returns root of natural number, -1, or not root
 */
int square_root(int n, int root)
{
	if (root * root > n)
	{
		return (-1);
	}
	if (root * root == n)
	{
		return (root);
	}
	return (square_root(n, root + 1));
}
