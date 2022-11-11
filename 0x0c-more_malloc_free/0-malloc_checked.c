#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked  - allocates memory using malloc.
 * @b: unsigned int
 * Returns: returns a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	int *p;
	
	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
