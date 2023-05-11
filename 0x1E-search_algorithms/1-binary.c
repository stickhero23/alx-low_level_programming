#include "search_algos.h"

/**
 * binary_search - binary search in sorted array
 * @array: ponter to first element in array to search in
 * @size: number of elements in array
 * @value: value to search for
 */
int binary_search(int *array, size_t size, int value)
{
	int tmp;
	size_t b = 0;

	if (array == NULL || size == 0)
		return (-1);
	size--;
	while (b <= size)
	{
		print_array(array, b, size);

		tmp = (size - b) / 2 + b;
		if (array[tmp] == value)
			return (tmp);
		else if (array[tmp] < value)
		{
			if (size % 2 == 1)
				b = tmp + 1;
			else
				b = tmp;
		}
		else
		{
			if (size % 2 == 1)
				size = tmp;
			else
				size = tmp - 1;
		}
	}
	return (-1);
}

/**
 * print_array - prints the current array
 * @array: array to print
 * @t: starting incrementer index
 * @size: size of the increment
 */
void print_array(int *array, size_t t, size_t size)
{
	print("Searching in array: ");
	for (; t <=  size; t++)
	{
		printf("%d", array[t]);
		if (t < size)
			printf(", ");
	}
	printf("\n");
}
