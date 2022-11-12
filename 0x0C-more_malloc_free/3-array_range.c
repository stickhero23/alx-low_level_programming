#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum array element value
 * @max: maximum value of array element
 * Return: returns NULL if min is greater than max,
 * or if malloc fails.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, n;

	if (min > max)
	{
		return (NULL); /* Validates input */
	}
	n = (max - min + 1);
	arr = malloc(sizeof(int) * n);

	if (arr == NULL)
	{
		return (NULL); /* when malloc fails*/
	}
	i = 0;
	while (i < n) /* creating the array */
	{
		arr[i] = min++;
		i++;
	}
	return (arr);
}
