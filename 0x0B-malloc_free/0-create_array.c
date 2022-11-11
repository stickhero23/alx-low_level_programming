#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates array of char
 * @size: unassigned int type
 * @c: char
 * Return: returns NULL or an array
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	int i = 0;

	if (size <= 0)
		return (NULL);
	a = malloc(sizeof(char) * size);

	if (a == NULL)
		return (NULL);
	while (i < (int)size)
	{
		a[i] = c;
		i++;
	}
	a[i] = '\0';

	return (a);
}
