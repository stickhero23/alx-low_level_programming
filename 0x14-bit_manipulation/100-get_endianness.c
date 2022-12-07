#include "main.h"
#include <stdio.h>
/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if small
 */
int get_endianness(void)
{
	/* create int n to hold a hex number 0x000000001 */
	/* check if the first byte stored is 00 or 01 */
	/* big endian (BE) stores 00, LE stores 01 */

	int n = 0x00000001;
	char *c = (char *)&n;

	return (c[0]);
}
