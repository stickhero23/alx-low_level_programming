#include "main.h"
/**
 * _strncpy - to copy from source to dest
 * @dest: string
 * @src: string
 * @n: number of chars to be copied.
 * Return: returns dest after copying
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\n'; i++)
		dest[i] = src[i];
	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
