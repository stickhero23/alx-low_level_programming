#include "main.h"
/**
 * swap_int - swaps integers.
 * @a: pointer of type integer for a.
 * @b: pointer of type integer for b.
 * Return: Always 0, success.
 */
void swap_int(int *a, int *b)
{
	int i;
	i = *a;
	*a = *b;
	*b = i;
}
