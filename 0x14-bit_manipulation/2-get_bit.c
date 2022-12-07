#include "main.h"
#include <stdio.h>
/**
 * get_bit - get a bit at a given index
 * @n: unsigned it
 * @index: index of bit to get
 * Return: value of a bit or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitvalue;
	unsigned int max_bits;

	max_bits = (sizeof(unsigned long int) * 8);

	if (index > max_bits)
		return (-1);

	bitvalue = n >> index;

	return (bitvalue & 1);
}
