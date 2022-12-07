#include "main.h"
#include <stdio.h>
/**
 * flip_bits - determines how many bits to flip
 * @n: number
 * @m: second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit_diff = 0;
	unsigned long int diff;

	diff = n ^ m;

	do {
		bit_diff += (diff & 1);
		diff >>= 1;
	} while
		(diff > 0);

	return (bit_diff);
}
