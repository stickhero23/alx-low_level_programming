#include "main.h"
/**
 * reverse_array - to reverse array
 * @a: an array of integers
 * @n: elements of array
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < (n / 2); i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
