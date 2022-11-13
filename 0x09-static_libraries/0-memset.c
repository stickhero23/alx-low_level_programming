#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: pointer to type char
 * @b: char type
 * @n: unsigned integer
 * Return: returns pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = n;

	if (i > 0)
	{
		int j;

		j = 0;

		while (j < i)
		{
			s[j] = b;
			j++;
		}
	}
	return (s);
}
