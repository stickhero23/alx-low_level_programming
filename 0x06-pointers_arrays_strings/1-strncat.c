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
	for (c = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
