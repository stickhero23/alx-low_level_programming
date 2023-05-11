#include "search_algos.h"
/**
 * linear_search - searches sequentially
 * @array: array to search for item
 * @size: size of array
 * @value: the target element
 * Return: first index of value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
