#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: string
 * @src: string
 * @n: int type integer
 * Return: number of elements to concatenate
 */
char *_strncat(char *dest, char *src, int n);
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (c = 0; src[j] != '\0' && n > 0; j++, n--, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
