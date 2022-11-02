#include "main.h"
/**
 * _memcpy - copies n bytes from src to dest
 * @dest: destination array pointer
 * @src: source array pointer
 * @n: number of bytes to copy
 * Return: returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = n;

	if (j > 0)
	{
		int i;

		i = 0;
		while (i < j)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
