#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagonals
 * @: pointer to type integer
 * @size: size of matrix
 * Return: returns the sum of two diagonals
 */
void print_diagsums(int *a, int size)
{
	int sum_1 = 0;
	int sum_2 = 0;
	int row, j;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		sum_1 += a[i];
	}

	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		sum_2 += a[i];
	}
	printf("%d, %d\n", sum_1, sum_2);
}
