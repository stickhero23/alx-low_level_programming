#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - linear search algorithm function
 * @array: array to search for item
 * @size: size of array
 * @value: the target element
 * return: first index of value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
		if (array[i] == value)
			return (i);
	return (-1);
}
