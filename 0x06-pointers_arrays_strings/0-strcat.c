#include "main.h"
/**
 * *_strcat - appends the src string to the dest string,
 * @dest: char string
 * @src: char string
 * Return: Always 0, success
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';
	return (0);
}
