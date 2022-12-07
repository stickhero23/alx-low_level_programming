#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets the value of a bit to 1
 * at a given index
 * @n: bit
 * @index: index at which to set bit value
 * Return: 1 on success, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_bits;
	unsigned long int m = 1;

	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	m <<= index;
	*n = (*n | m);

	return (1);
}
