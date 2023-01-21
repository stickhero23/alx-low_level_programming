#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 * @dest: pointer of type char
 * @src: pointer of type char
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
