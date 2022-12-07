#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets a bit value to 0
 * @n: bit
 * @index: index to set bit value
 * Return: 1 on success, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max_bits;
	unsigned long int m = 1;

	max_bits = (sizeof(unsigned long int) * 8);

	if (index > max_bits)
		return (-1);
	m = ~(m << index);
	*n = (*n & m);

	return (1);
}
